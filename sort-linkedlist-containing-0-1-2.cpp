/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it

    TC = O(n) + O(n) => O(n)
    SC = O(1)
*/

class Solution
{
    public:
    
    
    Node* segregate(Node *head) {
        
        int arr[3] = {0};
        
        Node* temp = head;
        while( temp != NULL){
            arr[temp->data]++;
            temp = temp->next;
        }
        
        temp = head;
        while( temp != NULL ){
            if( arr[0] > 0 ){
                temp->data = 0;
                arr[0]--;
            }
            else if( arr[1] > 0 ){
                temp->data = 1;
                arr[1]--;
            }
            else{
                temp->data = 2;
            }
            temp = temp->next;
        }
        return head;
    }
};