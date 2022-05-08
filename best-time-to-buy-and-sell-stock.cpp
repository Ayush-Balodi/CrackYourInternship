/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

    TC = O(n)
    SC = O(1)
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size() , p = 0;
        int min = INT_MAX;
        
        for( int i=0 ; i<n ; i++ ){
            if( min > prices[i] ){
                min = prices[i];
            }
            
            if( p < prices[i]-min ){
                p = prices[i] - min;
            }
        }
        return p;
    }
};