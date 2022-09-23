/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/reverse-string

    TC = O(n/2) => O(n)
    SC = O(n)
    Auxiliary space = Θ(1)
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n=s.size();
        for( int i=0 ; i<n/2 ; i++ ){
            char ch = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = ch;
        }
        return;
    }
};