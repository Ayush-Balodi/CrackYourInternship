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
        
        if( head == NULL or head->next==NULL )
            return NULL;
        
        if( head->next == head )
            return head;
        
        ListNode* slow=head, *fast=head;
        while( fast!=NULL and slow!=NULL and fast->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
            if( slow == fast )
                break;
        }
        
        if( slow != fast )
            return NULL;
    
        slow = head;    
        while( slow != fast ){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};