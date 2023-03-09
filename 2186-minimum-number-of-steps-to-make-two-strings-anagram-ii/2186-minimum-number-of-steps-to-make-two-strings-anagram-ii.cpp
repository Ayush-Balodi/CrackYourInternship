class Solution {
public:
    int minSteps(string s, string t) {
        
        unordered_map<char,int> mp;
        for( auto x:s ){
            mp[x]++;
        }
        for( auto x:t ){
            mp[x]--;
        }
        int count=0;
        for( auto x:mp ){
            count += abs(x.second);
        }
        return count;
    }
};
/*
    => "cotxazilut"
    => "nahrrmcchxwrieqqdwdpneitkxgnt"
    => 27
*/