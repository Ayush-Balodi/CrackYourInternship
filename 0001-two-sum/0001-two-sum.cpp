class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=n=nums.size();
        vector<pair<int,int>> vp;
        for( int i=0 ; i<n ; i++ ){
            vp.push_back({nums[i],i});
        }
        
        sort(vp.begin(), vp.end());
        int l=0, h=n-1;
        
        while( l<h ){
            int sum = vp[l].first + vp[h].first;
            if( sum == target ){
                return {vp[l].second, vp[h].second};
            }
            else if( sum < target ){
                l++;
            }
            else{
                h--;
            }
        }
        return {};
    }
};