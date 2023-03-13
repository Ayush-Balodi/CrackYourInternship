class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ans=0;
        for( auto x:words ){
            if(s.find(x)==0){
                ans++;
            }
        }
        return ans;
    }
};