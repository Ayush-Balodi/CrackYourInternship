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
    ListNode* swapNodes(ListNode* head, int k) {
        
        head = new ListNode(0, head);
        ListNode* left=head, *right=head;
        while( --k ){
            left = left->next;
        }
        
        ListNode* temp = left;
        
        while( temp->next->next ){
            temp = temp->next;
            right = right->next;
        }
        
        swap( left->next, right->next );
        swap( left->next->next, right->next->next );
        
        return head->next;
    }
};