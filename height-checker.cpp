/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Mathematics/problem/exactly-3-divisors

    TC = O(n)+O(n) => O(n)
    SC = O(n)
    Auxiliary space = Θ(n)
*/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int n=heights.size();
        vector<int> extra(n);
        
        for( int i=0 ; i<n ; i++ ){
            extra[i] = heights[i];
        }
        
        sort( heights.begin() , heights.end() );
        
        int count=0;
        for( int i=0 ; i<n ; i++ ){
            if( heights[i] != extra[i] ){
                count++;
            }
        }
        return count;
    }
};