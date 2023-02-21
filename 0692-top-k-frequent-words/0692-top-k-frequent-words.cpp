class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> mp;
        for( auto it:words ){
            mp[it]++;
        }
        
        vector<pair<string,int>> v;
        for( auto it:mp ){
            v.push_back({it.first,it.second});
        }
        
        sort( v.begin() , v.end() , [&]( auto &a, auto &b ){
            if( a.second == b.second ){
                return a.first<b.first;
            }
            return a.second>b.second;
        });
        
        vector<string> answer;
        for( int i=0 ; i<k ; i++ ){
            answer.push_back(v[i].first);
        }
        return answer;
    }
};