/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/linked-list-cycle-ii

    TC = O(n)
    SC = O(1) // as no extra space is taken
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
    ListNode *detectCycle(ListNode *head) {
        
        if( head == NULL || head->next == NULL ){
            return NULL;
        }
        ListNode* slow=head, *fast=head;
        
        while( slow != NULL && fast != NULL && fast->next != NULL  ){
            slow = slow->next;
            fast = fast->next->next;
            
            if( slow == fast ){
                break;
            }
        }
        
        if( slow != fast ){
            return NULL;
        }
        else{
            slow = head;
        }
        
        while( slow != fast ){
            slow = slow->next;
            fast = fast->next;
            if( slow == fast ){
                return slow;
            }
        }
        return slow;
    }
};