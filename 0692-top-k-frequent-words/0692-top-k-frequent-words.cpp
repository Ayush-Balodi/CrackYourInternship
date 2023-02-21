class Solution {
public:
    typedef pair<string,int> P;
    
    struct thetha{
        bool operator()(P &a, P &b ){
            return (a.second>b.second) || (a.second==b.second && a.first<b.first);
        }    
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        priority_queue<P , vector<P> , thetha> pq;
        
        unordered_map<string,int> mp;
        for( auto it:words ){
            mp[it]++;
        }
        
        for( auto it:mp ){
            pq.push({it.first, it.second});
            if(pq.size() > k)
                pq.pop();
        }
        
        int i = k-1;
        vector<string> result(k);
        while(!pq.empty()) {
            result[i] = pq.top().first;
            pq.pop();
            i--;
        }
        return result;
    }
};