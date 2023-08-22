class Solution {
    
public:
    int solve( vector<vector<int>> &offers, vector<int> &dp, int current ){
        
        if( current >= offers.size() ){
            return 0;
        }
        if( dp[current] != -1 ){
            return dp[current];
        }
        int not_take = solve( offers, dp, current+1 );
        
        int low = current+1, high=offers.size()-1;
        
        while( low <= high ){
            int mid = (low+high)/2;
            if( offers[mid][0] > offers[current][1] ){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        int take = offers[current][2]+solve(offers, dp, low);
        return dp[current] = max(take, not_take);
    }
    
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        
        sort( offers.begin(), offers.end() , [](auto &a, auto &b){
            if(a[0]<b[0]){
               return true;
            } 
            return false;
        });
        
        int m=offers.size();
        vector<int> dp(m+1,-1);
        
        return solve( offers, dp,  0 );
    }
};