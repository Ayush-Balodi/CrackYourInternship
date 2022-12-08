class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        int n=code.size();
        vector<int> ans(n,0);
        if( k>0 ){
            for( int i=0 ; i<n ; i++ ){
                for( int j=i ; j<i+k ; j++ ){
                    ans[i] = ans[i] + code[(j+1)%n];
                }
            }
        }
        else if( k<0 ){
            k = k*-1;
            for( int i=0 ; i<n ; i++ ){
                for( int j=1 ; j<=k ; j++ ){
                    ans[i] += code[(i-j+n)%n];
                }
            }
        }
        return ans;
    }
};