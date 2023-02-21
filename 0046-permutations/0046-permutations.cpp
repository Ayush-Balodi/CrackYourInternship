class Solution {
private:
    void permute( int index, vector<vector<int>>& ans, vector<int>& nums, int n ){
        if( index == n ){
            ans.push_back(nums);
            return;
        }
        for( int i=index ; i<n ; i++ ){
            swap( nums[index], nums[i] );
            permute( index+1, ans, nums, n );
            swap( nums[index], nums[i] );
        }
        return; 
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        permute( 0, ans, nums, n );
        return ans;
    }
};