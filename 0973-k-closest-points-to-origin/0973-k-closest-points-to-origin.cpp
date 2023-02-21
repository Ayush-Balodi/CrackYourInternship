class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,pair<int,int>>> dist;
        
        for( auto x:points ){
            int d = pow(x[0],2)+pow(x[1],2);
            dist.push_back({d,{x[0],x[1]}});
        }
        
        vector<vector<int>> ans;
        sort(dist.begin() , dist.end());
        
        for( int i=0 ; i<k ; i++ ){
            ans.push_back({dist[i].second.first,dist[i].second.second});
        }
        return ans;
    }
};