class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX, profit=0;
        for( auto x:prices ){
            if( min>x )
                min=x;
            if( x-min > profit )
                profit = x-min;
        }
        return profit;
    }
};