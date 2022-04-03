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
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        int m;
        ListNode* temp = head;
        while(temp != NULL){
            len += 1;
            temp = temp->next;
        }
        
        m = (len/2);      
        
        temp = head;
        
        int ans = 0;
        for(int i = 0;i<m;i++){
            temp = temp->next;
            ans = temp->val;
        }

        return temp;
    }
};