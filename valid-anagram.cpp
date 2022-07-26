/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/valid-anagram/

    TC = O(l1+l2)
    SC = O(l1+l2)

    we can also use constant space approach by using array of alphabet sizes;
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int l1=s.length() , l2=t.length();
        if( l1 != l2 ){
            return false;
        }
        
        map<char,int>m1;
        map<char,int>m2;
        
        for( int i=0 ; i<l1 ; ++i ){
            ++m1[s[i]];
        }
        
        for( int i=0 ; i<l2 ; ++i ){
            ++m2[t[i]];
        }
        
        if( m1 == m2 ){
            return true;
        }
        return false;
    }
};