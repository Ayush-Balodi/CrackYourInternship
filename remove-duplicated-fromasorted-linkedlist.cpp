/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/remove-duplicates-from-sorted-array/

    TC = O( n ) n=>length of the linkedlist
    SC = O( 1 )
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* temp = head;
        
        while( temp != NULL ){
            if( temp->next!=NULL && temp->val == temp->next->val ){
                ListNode* temp2 = temp->next;
                temp->next  = temp->next->next;
                delete temp2;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};