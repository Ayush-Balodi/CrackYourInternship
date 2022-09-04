/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/contest/weekly-contest-309/problems/check-distances-between-same-letters/

    TC = O(n^2)
    SC = O(1)
*/

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        
        int n=s.length();
        for( int i=0 ; i<n-1 ; i++ ){
            
            for( int j=i+1 ; j<n ; j++ ){
                
                if( s[i] == s[j] && distance[s[i]-'a'] != j-i-1 ){
                    cout << s[i] << " " << s[j] << endl;
                    return false;
                }
            }
        }
        return true;
    }
};