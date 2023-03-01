class Solution {
public:
    typedef tuple<int,int,int> T;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        int n=nums1.size(), m=nums2.size();
        priority_queue<T, vector<T>, greater<T>> pq;
        for( int i=0 ; i<n ; i++ ){
            pq.push({nums1[i]+nums2[0], i, 0});
        }
        vector<vector<int>> ans;
        while( !pq.empty() && k-- ){
            auto [a, b, c] = pq.top();
            ans.push_back({nums1[b],nums2[c]});
            pq.pop();
            if( c != m-1 ){
                pq.push({nums1[b]+nums2[c+1], b, c+1});
            }
        }
        return ans;
    }
};