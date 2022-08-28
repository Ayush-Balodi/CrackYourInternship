/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/reverse-linked-list-ii/

    TC = O(left-1) + O(right-left)
    SC = O(1)
*/

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if( head == NULL || head->next == NULL ){
            return head;
        }
        
        ListNode* dummy = new ListNode(-1); dummy->next = head;
        ListNode* prev = dummy , *tail = NULL;
        for( int i=0 ; i<left-1 ; i++ ){
            prev = prev->next;
        }
        
        tail = prev->next;
        for( int i=0 ; i<right-left ; i++ ){
            ListNode* temp = prev->next;
            prev->next = tail->next;
            tail->next = tail->next->next;
            prev->next->next = temp;
        }
        return dummy->next;
    }
};