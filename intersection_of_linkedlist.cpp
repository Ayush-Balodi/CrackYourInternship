/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/intersection-of-two-linked-lists

    TC = O(max(headA,headB))
    Auxiliary space = O(1)
*/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while( temp1 && temp2 && temp1!=temp2 ){
            
            temp1 = temp1->next;
            temp2 = temp2->next;
            
            if( temp1 == temp2 ){
                return temp1;
            }
            
            if( temp1 == NULL ){
                temp1 = headB;
            }
            
            if( temp2 == NULL ){
                temp2 = headA;
            }
        }
        return temp1;        
    }
};