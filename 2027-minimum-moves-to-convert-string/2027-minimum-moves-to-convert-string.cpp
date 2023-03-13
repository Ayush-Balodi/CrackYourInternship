class Solution {
public:
    int minimumMoves(string s) {
        int n=s.length(), ans=0;
        int i=0;
        
        while( i<n ){
            if( s[i] == 'O' ){
                i++;
            }
            else{
                ans++; i+=3;
            }
        }
        return ans;
    }
};