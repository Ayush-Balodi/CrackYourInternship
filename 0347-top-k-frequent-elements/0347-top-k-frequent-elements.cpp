class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> mp;
        for(auto x:nums ){
            mp[x]++;
        }
        
        priority_queue<pair<int,int>> vp;
        for( auto x:mp ){
            vp.push({x.second,x.first});
        }
        
        vector<int> result;
        while( !vp.empty() and k-- ){
            auto pre = vp.top();
            result.push_back(pre.second);
            vp.pop();
        }
        return result;
    }
};