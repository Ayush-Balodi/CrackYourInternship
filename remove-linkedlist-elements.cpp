/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/remove-linked-list-elements

    TC = O(n) + O(n) = O(n) O(n) comes from first while loop as [7,7,7,7] where it can max go upto whole length
    SC = O(1) as minimal extra space is used
*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        if( head == NULL ){
            return head;
        }
        
        while( head != NULL && head->val == val ){
            head = head->next;
        }
        
        ListNode* temp = head;
        while( temp != NULL && temp->next != NULL ){
            
            if( temp->next->val == val ){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};