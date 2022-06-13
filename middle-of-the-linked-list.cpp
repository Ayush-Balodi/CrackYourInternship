/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/middle-of-the-linked-list

    TC = O(n) n=>length of the linkedist
    SC = O(1);
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        int i=0 , j=0;
        ListNode* temp = head;
        while( temp != NULL ){
            i++;
            temp = temp->next;
        }
        
        temp = head;
        
        if( i % 2 == 0 ){
            i = (i / 2) + 1;
            while( j < i-1 ){
                temp = temp->next;
                j++;
            }
        }
        else{
            i = (i / 2) + 1;
            while( j < i-1 ){
                temp = temp->next;
                j++;
            }
        }
        return temp;
    }
};

/*
    Using two pointers
*/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while( fast != NULL && fast->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};