/*
VERY IMPORTANT FOR THE REVERSION OF A PART OF THE LINKED LIST!!!
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode*reversed(ListNode*head){
        ListNode*prev = NULL;
        while(head){
            ListNode*next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode*fast = head;
        ListNode*slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        slow = reversed(slow);
        fast = head;
        while(slow){
            if(slow->val != fast->val){
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;
        
        
    }
};
