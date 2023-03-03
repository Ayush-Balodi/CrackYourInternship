class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        int ans=0,prev=0;
        for( auto x:bank ){
            int current = count( x.begin() , x.end() , '1' );
            ans += prev*current;
            if( current > 0 ){
                prev=current;
            }
        }
        return ans;        
    }
};