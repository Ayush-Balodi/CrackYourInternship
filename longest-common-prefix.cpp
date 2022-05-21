/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/longest-common-prefix/

    TC = O(n+low.n) = O(low.n) // low=length of shorteststring in vector
    SC = O(low);
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        
        string result = "";
        int n = str.size();
        
        if( n == 0 ){
            return result;
        }
        
        int j = INT_MAX;
        
        for( int i=0 ; i<n ; i++ ){
            int s = str[i].length();
            
            if( j > s ){
                j = s;
            }
        }
        
        for( int i=0 ; i<j ; i++ ){
            char temp = str[0][i];
            int k = 1;
            
            while( k < n ){
                
                if( temp == str[k][i] ){
                    k++;
                }
                else{
                    return result;
                }
            }
            result += temp;
        }
        
        return result;
    }
};