/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/min-cost-climbing-stairs

    TC = thetha(n)
    SC = thetha(n) // as no extra space is taken
*/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        if(n == 2){
            return min(cost[0],cost[1]);
        }

        vector<int> dp(n+1,0);
        for( int i=2 ; i<=n ; i++ ){
            dp[i] = min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
        }
        return dp[n];
    }
};

/*
    TC = thetha(n)
    SC = O(1)
*/
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        if(n == 2){
            return min(cost[0],cost[1]);
        }
        
        int ans, one=0 , two=0;
        //vector<int> dp(n+1,0);
        for( int i=2 ; i<=n ; i++ ){
            ans = min(two+cost[i-1],one+cost[i-2]);
            one = two;
            two = ans;
        }
        return two;
    }
};