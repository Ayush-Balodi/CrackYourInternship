/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/reverse-string-ii

    TC = O(n)
    SC = O(k) k=>length of the substring formed at execution
    Auxiliary space = O(k)
*/

class Solution {
public:
    string reverseStr(string s, int k) {
        
        int n=s.length();
        for( int i=0 ; i<n ; i+=2*k ){
            
            string str = s.substr(i,k);
            reverse(str.begin(),str.end());
            s.replace(i,k,str);
        }
        return s;
    }
};

/*
    TC = O(n)
    SC = O(n)
    Auxiliary space = O(1)
*/
class Solution {
public:
    string reverseStr(string s, int k) {
        
        int l=0;
        int r = min(k,(int)s.length());
        while( l < s.length() ){
            
            reverse(s.begin()+l,s.begin()+r);
            l+=2*k;
            r=min(k+l,(int)s.size());
        }
        return s;
    }
};