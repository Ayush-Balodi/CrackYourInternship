class Solution {
public:
    string frequencySort(string str) {
        unordered_map<char,int> mp;
        for( auto x:str ){
            mp[x]++;
        }
        
        priority_queue<pair<int,char>> pq;
        for( auto x:mp ){
            pq.push({x.second,x.first});
        } 
        
        string ans="";
        while(!pq.empty()){
            auto temp = pq.top();
            while(temp.first--){
                ans+=temp.second;
            }
            pq.pop();
        }
        return ans;
    }
};