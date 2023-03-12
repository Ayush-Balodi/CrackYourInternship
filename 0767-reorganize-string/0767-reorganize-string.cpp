class Solution {
public:
    string reorganizeString(string s) {
        map<char,int> mp;
        for( auto x:s ) mp[x]++;
        
        priority_queue<pair<int,char>> pq;
        for( auto x:mp ){
            pq.push({x.second, x.first});
        }
        
        string res="";
        while( pq.size() > 1 ){
            auto temp1=pq.top(); pq.pop();
            auto temp2=pq.top(); pq.pop();
            
            res+=temp1.second;
            res+=temp2.second;
            
            temp1.first-=1;
            temp2.first-=1;
            
            if( temp1.first>0 ){
                pq.push(temp1);
            }
            if( temp2.first>0 ){
                pq.push(temp2);
            }
        }
        
        if( !pq.empty() ){
            if( pq.top().first>1 )
                return "";
            else
                res+=pq.top().second;
        }
        return res;
    }
};