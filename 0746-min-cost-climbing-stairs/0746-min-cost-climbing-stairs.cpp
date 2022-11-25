class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        if( n==2 ){
            return min( cost[0] , cost[1] );
        }
        vector<int> v(n+2,0);
        for( int i=2 ; i<=n ; i++ ){
            v[i] = min( v[i-1]+cost[i-1] , v[i-2]+cost[i-2] );
        }
        return v[n];
    }
};