/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/factorial-trailing-zeroes

    TC = thetha(log n)
    SC = thetha(1)

    5^k <= n
    k <= log n
*/

class Solution {
public:
    int trailingZeroes(int num) {
        
        int res=0;
        for( int i=5 ; i<=num ; i*=5 ){
            res = res + num/i;
        }
        return res;
    }
};