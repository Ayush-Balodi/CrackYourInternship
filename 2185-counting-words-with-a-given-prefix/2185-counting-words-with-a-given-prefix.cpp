class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int k=pref.length();
        int ans=0;
        for( auto x:words ){
            int n=x.length(), c=0;
            for( int i=0 ; i<n ; i++ ){
                if( i<k && x[i] == pref[i] ){
                    c++;
                }
                else{
                    break;
                }
                if( c==k ){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};