class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> mp;
        for( auto x:s ){mp[x]++;}
        auto it = mp.begin();
        int f = it->second, c=0;
        for( auto x:mp ){
            if( x.second == f ){
                c++;
            }
        }
        if( c==mp.size() )
            return true;
        return false;
    }
};