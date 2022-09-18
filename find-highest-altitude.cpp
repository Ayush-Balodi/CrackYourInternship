/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/find-the-highest-altitude

    TC = O(n+1)
    SC = O(n+1)
    Auxiliary space = O(n+1)
*/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n=gain.size();
        vector<int> extra(n+1,0);
        for( int i=1 ; i<n+1 ; i++ ){
            extra[i] = extra[i-1] + gain[i-1];
        }
        int maxval = INT_MIN;
        for( int i=0 ; i<n+1 ; i++ ){
            maxval = max( maxval , extra[i] );
        }
        return maxval;
    }
};