/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/remove-nth-node-from-end-of-list

    TC = O(n) + O(n)
    SC = O(1)
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if( head == NULL ){
            return NULL;
        }
        
        int length = 0 , c=1;
        ListNode* temp = head;
        
        while( temp != NULL ){
            length++;
            temp = temp->next;
        }
        
        if( length-n == 0 ){
            return head->next;
        }
        
        temp = head;
        ListNode* del = NULL ;
        while( temp!= NULL && c<=length ){
            
            if( c == (length-n) ){
                del = temp->next;
                temp->next = temp->next->next;
            }
            temp = temp->next;
            c++;
        }
        
        delete del;
        return head;
    }
};