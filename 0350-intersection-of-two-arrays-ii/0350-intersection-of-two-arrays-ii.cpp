class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mp;
        for( auto x:nums1 ){
            mp[x]++;
        }
        int k=0;
        for( auto x:nums2 ){
            if( mp[x] > 0 ){
                nums1[k++] = x;
                mp[x]--;
            }
        }
        return vector<int>(nums1.begin(),nums1.begin()+k);   
    }
};