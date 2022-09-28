/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/reverse-string-ii

    TC = O(n) + O(n)
    SC = O(n) 
    Auxiliary space = O(n)
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        vector<int> v;
        int l=0 , r=n-1;
        
        for( int i=0 ; i<n ; i++ ){
            int area = (r-l)*min(height[l],height[r]);
            v.push_back(area);
            
            if( height[l] < height[r] ){
                l++;
            }
            else{
                r--;
            }
        }
        int maxval = INT_MIN;
        n=v.size();
        for( int i=0 ; i<n ; i++ ){
            maxval = max( maxval , v[i] );
        }
        return maxval;
    }
};