class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        
        int n=s1.length(),c1=0,c2=0;
        sort(s1.begin() , s1.end());
        sort(s2.begin() , s2.end());
        
        for( int i=0 ; i<n ; i++ ){
            if(s1[i]>=s2[i]){
                c1++;
            }
            if(s2[i]>=s1[i]){
                c2++;
            }
        }
        if( c1==n || c2==n ){
            return true;
        }
        return false;
    }
};