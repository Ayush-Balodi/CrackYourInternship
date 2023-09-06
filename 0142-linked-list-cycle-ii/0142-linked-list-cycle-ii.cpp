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
    ListNode *detectCycle(ListNode *head) {
        
        if( head == NULL or head->next ==NULL ){
            return NULL;
        }
        
        ListNode* slow=head, *fast=head;
        int c=0;
        while( fast!=NULL and fast->next!=NULL and slow!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
            if( slow == fast ){
                c=1; break;
            }
        }
        
        if( c==1 ){
            slow = head;
        }
        else{
            return NULL;
        }
        
        while( slow != fast ){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};