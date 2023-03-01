class Solution {
public:
    int balancedStringSplit(string s) {
        
        int n=s.length(), countL=0, countR=0, result=0;
        for( int i=0; i<n ; i++ ){
            if( s[i] == 'R' ){
                countR++;
            }
            else{
                countL++;
            }
            
            if( countL == countR ){
                result++;
                countL = countR = 0;
            }
        }
        return result;
    }
};