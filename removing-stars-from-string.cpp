/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/contest/weekly-contest-308/problems/removing-stars-from-a-string/

    TC = O(n) + O(n)
    SC = O(s.legnth())
*/

class Solution {
public:
    string removeStars(string s) {
        
        if( s == "*" ){
            return "";
        }
        
        int n=s.length();
        vector<char> result;
        
        for( int i=0 ; i<n ; i++ ){
            
            if( i!=0 && s[i] == '*' ){
                
                result.pop_back();
                continue;
            }
            else{
                result.push_back(s[i]);  
            }
        }
        
        string str = "";
        n=result.size();
        for( int i=0 ; i<n ; i++ ){
            str += result[i];
        }
        return str;
    }
};