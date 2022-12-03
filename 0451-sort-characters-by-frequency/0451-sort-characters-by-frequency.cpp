class Solution {
public:
    string frequencySort(string s) {
        
        map<char,int> mp;
        int n=s.length();
        for( int i=0 ; i<n ; i++ ){
            mp[s[i]]++;
        }
        
        priority_queue<pair<int,char>> pq;
        string ans="";
        for( auto it:mp ){
            pq.push({it.second,it.first});
        }
        
        while( !pq.empty() ){
            
            pair<int,char> temp = pq.top();
            pq.pop();
            
            while( temp.first-- ){
                ans+=temp.second;
            }
        }
        return ans;
    }
};