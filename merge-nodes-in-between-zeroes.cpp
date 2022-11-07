/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/merge-nodes-in-between-zeros/

    TC = O(n)
    Auxiliary space = O(1) // as no extra space is taken
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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* temp=head;
        int sum=0;
        
        ListNode* temp2 = new ListNode(-1);
        ListNode* head2=temp2;
        
        while( temp != NULL ){
            
            sum += temp->val;
            temp = temp->next;
            
            if( temp!=NULL && temp->val == 0 ){
                
                head2->next = new ListNode(sum);
                head2 = head2->next;
                sum = 0;
            }
        }
        head2->next = NULL;
        head2 = temp2;
        return head2->next;
    }
};