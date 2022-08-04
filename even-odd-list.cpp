/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/odd-even-linked-list

    TC = O(n)
    SC = O(n)
*/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode* even = new ListNode(-1);
        ListNode* odd = new ListNode(-1);
        
        ListNode *temp=head, *temp2=even, *temp3=odd;
        
        int c=1;
        
        while( temp != NULL ){
            
            if( c%2 == 0 ){
                temp2->next = temp;
                temp2 = temp2->next;
            }
            else{
                temp3->next = temp;
                temp3 = temp3->next;
            }
            c++;
            temp = temp->next;
        }
        
        temp3->next = even->next;
        temp2->next = NULL;
        
        return odd->next;
    }
};

/*
    TC = O(n)
    SC = O(1)
*/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if( head ==NULL ){
            return NULL;
        }
        
        if( head->next == NULL ){
            return head;
        }
        
        if( head->next->next == NULL ){
            return head;
        }
        
        ListNode* odd=head;
        ListNode* even=odd->next; 
        ListNode* temp=even;
        ListNode* temp2=odd;
        
        while( even != NULL && even->next != NULL ){
            
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = temp;
        return temp2;
    }
};