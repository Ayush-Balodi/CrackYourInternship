/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/ransom-note/

    TC = O(n+m)
    SC = O(1)
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int arr[26] = {0};
        int m=ransomNote.length() , n=magazine.length();
        
        for( int i=0 ; i<n ; ++i ){
            
            ++arr[magazine[i]-'a'];
        }
        
        for( int i=0 ; i<m ; i++ ){
            
            if( arr[ransomNote[i] - 'a'] ){
                --arr[ransomNote[i] - 'a'];
            }
            else{
                return false;
            }
        }
        return true;
    }
};