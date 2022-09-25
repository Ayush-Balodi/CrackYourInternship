/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/count-vowel-substrings-of-a-string/

    TC = O(n^2)
    SC = O(n)
*/

class Solution {
private:
    bool isVowel( char ch ){
        if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
            return true;
        }
        return false;
    }
public:
    int countVowelSubstrings(string word) {
        int n=word.length();
        int ans=0;
        map<char,int> m;
        for( int i=0 ; i<n ; i++ ){
            m.clear();
            for( int j=i ; j<n ; j++ ){
                if( !isVowel(word[j]) ){
                    break;
                }
                m[word[j]]++;
                if( m.size() == 5 ){
                    ans++;
                } 
            }
        }
        return ans;
    }
};