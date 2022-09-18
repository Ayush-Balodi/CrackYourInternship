/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/

    TC = O(n)
    SC = O(n)
    Auxiliary space = O(1)
*/

class Solution {
public:
    int longestContinuousSubstring(string str) {
        
        int n = str.size();
        int low=0 , high;
        int maxval = INT_MIN , c=0;
        while( low < n-1 ){
            high = low+1;
            
            if( (str[low]+1) == str[high] ){
                c++;
                low++; high++;
            }
            else{
                maxval = max(maxval,c+1);
                low++;high++;
                c=0;
            }
        }
        maxval = max(maxval,c+1);
        return maxval;
    }
};