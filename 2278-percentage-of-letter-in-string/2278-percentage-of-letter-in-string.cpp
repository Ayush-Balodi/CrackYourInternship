class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        int count=0 , n=s.length();
        for( int i=0 ; i<n ; i++ ){
            if( s[i] == letter ){
                count++;
            }
        }
        
        float ans = (float)(count*100)/n;
        return (int)ans;
    }
};