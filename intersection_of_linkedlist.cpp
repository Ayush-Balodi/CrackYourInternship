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

// This approach calculates the length of the two linkedlists and then we subtract the length of the larger from the smaller and now we just need to point the number of node depicted by that difference in the larger linkedlist. Than traversing the linkedlist checking one node at a time and comparing them for a match if found return node and if not pointer will traverse to the end and we still return a right answer which is null.

// NOTE : returning temp1 at last of code serves two cases i.e,
// i> when the first node we check are the one we are finding, it now will return that node.
// ii> when there is no match of the node in linked list so after traversing the whole linkedlist now we have null in temp1. Returning back temp1 means we are returnning null to the judge.

// TC = O(l1) + O(l2) + O(max(l1,l2))
// Auxiliary space = O(1)

// Still don't get the feel , see the code:-)

class Solution {
public:
	//c++ solution to the linked list intersection 
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int l1=0, l2=0;
        
        while( temp1 != NULL ){
            l1++;
            temp1 = temp1->next;
        }
        
        while( temp2 != NULL ){
            l2++;
            temp2 = temp2->next;
        }
        
        
        if( l1 > l2 ){
            
            temp1=headA; temp2=headB;
            int d = (l1-l2);
            while( d-- ){
                temp1 = temp1->next;
            }
            
            while( temp1 && temp2 && temp1 != temp2 ){
                
                temp1 = temp1->next;
                temp2 = temp2->next;
                if( temp1 == temp2 ){
                    return temp1;
                }
            }
        }
        else{
            
            temp1 = headA; temp2=headB;
            int d = (l2-l1);
            while( d-- ){
                temp2 = temp2->next;
            }
            
            while( temp1 && temp2 && temp1 != temp2 ){
                
                temp1 = temp1->next;
                temp2 = temp2->next;
                
                if( temp1 == temp2 ){
                    return temp1;
                }
            }
        }
        return temp1;
    }
};