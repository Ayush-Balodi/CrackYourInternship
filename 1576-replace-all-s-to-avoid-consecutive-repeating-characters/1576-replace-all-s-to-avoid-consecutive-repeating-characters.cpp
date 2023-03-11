class Solution {
public:
    string modifyString(string s) {
        int n=s.length();
        char left, right;
        for( int i=0 ; i<n ; i++ ){
            if(s[i]=='?'){
                if(i-1>=0) left=s[i-1];
                if(i+1<n) right=s[i+1];
                for( int j=0 ; j<26 ; j++ ){
                    if(j!=left-'a' && j!=right-'a'){
                        s[i] = j+'a';
                        break;
                    }
                }
            }
        }
        return s;
    }
};