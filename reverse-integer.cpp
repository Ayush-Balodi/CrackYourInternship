/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/reverse-integer/
    
    TC = O(n)
    SC = O(1)
*/

class Solution {
public:
    int reverse(int num) {        
        
        int sum=0;
        while( num != 0 ){
            int rem = num % 10;
            if( sum > INT_MAX/10 || sum < INT_MIN/10 ){
                return 0;
            }
            sum = ( sum * 10 ) + rem;
            num = num / 10;
        }
        return sum;
    }
};