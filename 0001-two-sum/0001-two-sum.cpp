class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int  n = nums.size();
        vector<pair<int,int>> v;
        for( int i=0 ; i<n ; i++ ){
            v.push_back(make_pair(nums[i],i));
        }
        
        sort(v.begin() , v.end());
        
        int low=0, high=n-1;
        vector<int> ans;
        
        while( low <= high ){
            if( (v[low].first + v[high].first) == target){
                ans.push_back(v[low].second);
                ans.push_back(v[high].second);
                break;
            }
            else if( (v[low].first + v[high].first) < target ){
                low++;
            }
            else{
                high--;
            }
        }
        return ans;
    }
};