class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for( auto x:arr ) mp[x]++;
        
        priority_queue<int> pq;
        for( auto x:mp ){
            pq.push(x.second);
        }
        
        int n=arr.size(), f=0, c=0;
        while( !pq.empty() ){
            f += pq.top();
            pq.pop();
            c++;
            if(f >= n/2){
                return c;
            }
        }
        return c;
    }
};