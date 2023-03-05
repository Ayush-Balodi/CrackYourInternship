class Solution {
public:
    typedef pair<int,int> P;
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for( auto x:nums ){
            mp[x]++;
        }
        
        vector<pair<int,int>> v;
        for( auto x:mp ){
            v.push_back({x.second,x.first});
        }
        
        sort( v.begin() , v.end() , [&](auto &a, auto &b){
            if( a.first == b.first ){
                return a.second>b.second;
            }
            return a.first<b.first;
        });
        
        
        vector<int> ans;
        for( auto x:v ){
            while( x.first-- ){
                ans.push_back(x.second);
            }
        }
        return ans;
    }
};