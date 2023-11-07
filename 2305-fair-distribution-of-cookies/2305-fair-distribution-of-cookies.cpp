class Solution {
public:
    int ans=INT_MAX;
    void helper(vector<int> &cookies, int start, vector<int> &v, int k){
        
        if( start == cookies.size() ){
            int maxm = INT_MIN;
            for( int i=0 ; i<k ; i++ ){
                maxm = max(maxm, v[i]);
            }
            ans = min(ans, maxm);
            return;
        }
        for( int i=0 ; i<k ; i++ ){
            v[i] += cookies[start];
            helper(cookies, start+1, v, k );
            v[i] -= cookies[start];
        }
        return;
    }
    int distributeCookies(vector<int>& cookies, int k) {
        
        vector<int> v(k,0);
        helper(cookies, 0, v, k);
        return ans;        
    }
};