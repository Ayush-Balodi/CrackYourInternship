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
    ListNode* swapPairs(ListNode* head) {
        if( head == NULL or head->next == NULL ){
            return head;
        }
        ListNode* prev=NULL, *curr=head, *nxt;
        ListNode* temp = head->next;
        
        while( curr != NULL and curr->next != NULL ){
            nxt = curr->next;
            curr->next = nxt->next;
            nxt->next = curr;
            if(prev) prev->next = nxt;
            prev = curr;
            curr = curr->next;
        }
        return temp;
    }
};