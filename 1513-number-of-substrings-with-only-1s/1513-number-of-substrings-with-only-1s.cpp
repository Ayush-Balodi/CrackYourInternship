class Solution {
public:
    int numSub(string s) {
        int ans=0, count=0;
        for( auto c:s ){
            count = (c=='1') ? count+1 : 0;
            ans = (ans+count)%1000000007;
        }
        return ans;
    }
};