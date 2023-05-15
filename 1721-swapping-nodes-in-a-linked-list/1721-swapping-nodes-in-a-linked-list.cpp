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
        int n=1, x, y, i=0;
        ListNode* temp = head;
        
        while( temp != NULL ){
            
            if( n == k ){
                x = temp->val;
            }
            n++;
            temp = temp->next;
        }
        int last = n-k;
        n=1, temp=head;
        
        while( temp != NULL ){
            if( n == last ){
                y = temp->val;
            }
            n++;
            temp = temp->next;
        }
        
        temp=head;
        while( head != NULL ){
            i++;
            if( i == k ){
                head->val = y;
            }
            if( i == last ){
                head->val = x;
            }
            head = head->next;
        }
        return temp;
    }
};