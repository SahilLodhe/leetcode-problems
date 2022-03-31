/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDiffInBST(TreeNode* root) {
        priority_queue<int>res;
        vector<int>v;
        int final = INT_MAX;
        traverse(root,res);
        while(!res.empty()){
            v.push_back(res.top());
            res.pop();
        }
        for(int i = 0;i<=v.size() - 2;i++){
            for(int j = i + 1;j<=v.size() - 1;j++){
                final = min(final,abs(v[i] - v[j]));
            }
        }
        return final;
    }
    void traverse(TreeNode* root,priority_queue<int>&res){
        if(root == NULL){
            return;
        }
        res.push(root->val);
        traverse(root->left,res);
        traverse(root->right,res);
    }
};
