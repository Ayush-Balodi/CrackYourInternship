class Solution {
public:
    int countAsterisks(string s) {
        int n=s.length(), count=0, c=0;
        for( int i=0 ; i<n ; i++ ){
            if( s[i] == '|' ){
                c++;
            }
            if( c==1 ){ continue; }
            else if( c==2 ){
                c=0;
            }
            if( s[i] == '*' ){count++;}
        }
        return count;
    }
};