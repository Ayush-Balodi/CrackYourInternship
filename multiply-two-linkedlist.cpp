/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://practice.geeksforgeeks.org/problems/multiply-two-linked-lists

    TC = O(m) + O(n) => O(m+n) => m=length of linked list1 ; n=length of linked list2
    SC= O(1)
*/

long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long a = 1000000007;
    long long s1=0 , s2=0;
    
    while( l1 != NULL ){
        
        s1 = (s1*10)%a + l1->data;
        l1 = l1->next;
    }
    
    while( l2 != NULL ){
        
        s2 = (s2*10)%a + l2->data;
        l2 = l2->next;
    }
    
    return ((s1*s2)%a);
}