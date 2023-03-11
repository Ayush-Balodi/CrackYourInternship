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
    ListNode* l1;
    int length;
    Solution(ListNode* head) {
        l1 = head;
        ListNode* temp=l1; int n=0;
        while( temp != NULL ){
            temp = temp->next; n++;
        }
        length = n;
    }
    
    int getRandom() {
        int random_index = rand()%length;
        ListNode* temp=l1;
        for(int i=0 ; i<random_index ; i++ ){
            temp = temp->next;
        }
        return temp->val;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */