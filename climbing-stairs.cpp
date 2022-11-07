/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/climbing-stairs
    
    TC = O(n)
    Auxiliary space = O(n) 
*/
class Solution {
public:
    int climbStairs(int n) {
        
        if( n<=2 ){
            return n;
        }
        vector<int> dp(n+1,0);
        dp[1] = 1;
        dp[2] = 2;
        for( int i=3; i<=n ; i++ ){
            dp[i] = dp[i-1] + dp[i-2];
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
    int climbStairs(int n) {
        
        int one=1, two=1;
        for( int i=0 ; i<n-1 ; i++ ){
            int temp = one;
            one = one+two;
            two = temp;
        }
        return one;
    }
};