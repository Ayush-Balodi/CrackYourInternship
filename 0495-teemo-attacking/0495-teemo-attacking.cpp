class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
        
        int n=t.size() , ans=0;
        for( int i=0 ; i<n-1 ; i++ ){
            if( t[i]+d > t[i+1] ){
                ans += t[i+1]-t[i];
            }
            else{
                ans += d;
            }
            cout << i << " " << ans <<endl;
        }
        return ans+d;
    }
};