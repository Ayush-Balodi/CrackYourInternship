class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        if( barcodes.size() == 0 || barcodes.size()==1 ){
            return barcodes;
        }
        map<int,int> mp;
        for( auto x:barcodes ) mp[x]++;
        
        priority_queue<pair<int,int>> pq;
        for( auto [x, y]:mp ){
            pq.push({y,x});
        }
        vector<int> res;
        while( pq.top().first>0 ){
            auto t1 = pq.top(); pq.pop();
            t1.first-=1;
            res.push_back(t1.second);
            
            auto t2 = pq.top(); pq.pop();
            if( t2.first>0 ){
                t2.first-=1;
                res.push_back(t2.second);
            }
            pq.push(t1);
            pq.push(t2);
        }
        return res;
    }
};