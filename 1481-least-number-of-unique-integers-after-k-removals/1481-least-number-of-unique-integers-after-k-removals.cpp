class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for( auto x:nums ){
            mp[x]++;
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for( auto x:mp ){
            pq.push({x.second, x.first});
        }
        int temp=0;
        for( int i=0 ; i<k ; i++ ){
            temp += pq.top().first;
            if( temp > k ){
                break;
            }
            pq.pop();
        }
        return pq.size();
    }
};