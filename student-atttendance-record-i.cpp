/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/student-attendance-record-i/

    TC = O(n)
    SC = O(1)
*/

class Solution {
public:
    bool checkRecord(string s) {
        int n = s.length();
        int c=0;
        
        for( int i=0 ; i<n ; i++ ){
            
            if( s[i] == 'A' ){
                c++;
                if( c >= 2 ){
                    // cout << "YEs" << endl;
                    return false;
                } 
            }
            if( i!=n-2 && s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L' ){
                // cout << "No" << endl;
               return false;
            }
        }
        return true;
    }
};