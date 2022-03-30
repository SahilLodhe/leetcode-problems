class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int>result;
        if(root == NULL){
            return result;
        }
        helper(result,root);
        return result;
    }
    void helper(vector<int>&result,Node*root){
        result.push_back(root->val);
        for(int i = 0;i<root->children.size();i++){
            helper(result,root->children[i]);
        }
    }
    
};
