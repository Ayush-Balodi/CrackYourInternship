class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1, m2; vector<int> ans;
        for( auto x:nums1 ){ m1[x]++; }
        for( auto x:nums2 ){ m2[x]++; }
        for( auto [s,v] : m1 ){
            if( m2[s]>0 ){
                ans.push_back(s);
            }
        }
        return ans;
    }
};