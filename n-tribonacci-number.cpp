/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/n-th-tribonacci-number

    TC = O(n)
    Auxiiary space = O(n) 
*/
class Solution {
public:
    int tribonacci(int n) {
        if( n==0 ){
            return 0;
        }
        if( n==1 || n==2 ){
            return 1;
        }
        vector<int> dp(n+1 , 0);
        dp[1] = 1; dp[2] = 1;
        for( int i=3 ; i<=n ; i++ ){
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        return dp[n];
    }
};

/*
    TC = O(n)
    Auxiliary space = O(1) // as no extra space is taken 
*/

class Solution {
public:
    int tribonacci(int n) {
        if( n==0 ){return 0;}
        if( n==1 || n==2 ){return 1;}
        int one=0, two=1, three=1, ans;
        for( int i=3 ; i<=n ; i++ ){
            ans = one + two + three;
            one = two; two = three; three = ans;
        }
        return three;
    }
};