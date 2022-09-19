/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/richest-customer-wealth

    TC = O(n.m)
    SC = O(n.m)
    Auxiliary space = O(1)
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int n=accounts.size(), m=accounts[0].size();
        int maxsum=INT_MIN;
        
        for( int i=0 ; i<n ; i++ ){
            int sum=0;
            for( int j=0 ; j<m ; j++ ){
                sum+=accounts[i][j];
            }
            maxsum = max( maxsum , sum );
        }
        return maxsum;
    }
};