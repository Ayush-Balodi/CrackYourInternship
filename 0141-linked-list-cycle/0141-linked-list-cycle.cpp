/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if( head==NULL or head->next==NULL ){
            return false;
        }
        if( head->next==head ){
            return true;
        }
        ListNode* slow=head, *fast=head;
        
        while( slow!=NULL and fast!=NULL and fast->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
            if( slow == fast ){
                return true;
            }
        }
        return false;
    }
};