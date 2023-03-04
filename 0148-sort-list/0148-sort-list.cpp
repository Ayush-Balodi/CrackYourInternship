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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        vector<int> nums;
        ListNode* temp=head;
        while( temp!= NULL ){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        
        sort(nums.begin() , nums.end());
        ListNode* newlist = new ListNode();
        temp = newlist;
        int n=nums.size();
        for( int i=0 ; i<n ; i++ ){
            temp->val = nums[i];
            if(i!=n-1){
                temp->next = new ListNode();
                temp = temp->next;
            }
        }
        temp->next=NULL;
        return newlist;        
    }
};