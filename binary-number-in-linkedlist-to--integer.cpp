/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer
 
    TC = O(nodes in linkedlist which could be n) + O(n) + O(n) ; here n=>string.length()
    Therefore, tc = O(n)
    SC = O(n) as string is created to store binary numbers
*/

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        if( head == NULL ){
            return -1;
        }
        string str;
        ListNode* temp = head;
        while( temp != NULL ){
            str += temp->val;
            temp = temp->next;
        }
        
        reverse( str.begin() , str.end() );
        
        int sum=0 , i=0;
        while( i<str.length() ){
            sum += (pow(2,i)*str[i]);
            i++;
        }
        
        return sum;
    }
};