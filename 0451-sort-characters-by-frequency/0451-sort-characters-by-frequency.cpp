class Solution {
public:
    string frequencySort(string s) {
        
        map<char,int> mp;
        for( auto x:s ){
            mp[x]++;
        }
        
        priority_queue<pair<int,char>> pq;
        for( auto x:mp ){
            pq.push({x.second,x.first});
        }
        
        string ans="";
        while(!pq.empty()){
            pair<int,char> temp = pq.top();
            while( temp.first-- ){
                ans+=temp.second;
            }
            pq.pop();
        }
        return ans;
    }
};