/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/contest/biweekly-contest-85

    TC = O(n^2)
    SC = O(1)
*/

class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        
        int count=0 , c , n=s.length();
        
        for( int j=0 ; j<s.length() ; j++ ){
            
            c=0;
            for( int i=0 ; i<n-1 ; i++ ){
                
                if( s[i]=='0' && s[i+1] == '1' ){
                    c++;
                    swap(s[i],s[i+1]);
                    i++;
                }
            }
            
            if( count == 0 && c == 0 ){
                continue;
            }
            count++;
            
            if( c==0 ){
                count-=1;
                break;
            }
        }
        return count;
    }
};