class Solution {
private:
    void permute( vector<vector<int>> &ans, vector<int> &nums, vector<int> ds, int freq[], int n ){
        if( ds.size() == n ){
            ans.push_back(ds);
            return;
        }
        for( int i=0 ; i<n ; i++ ){
            if( !freq[i] ){
                freq[i]=1;
                ds.push_back(nums[i]);
                permute( ans, nums, ds, freq, n );
                ds.pop_back();
                freq[i]=0;
            }
        }
        return;
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        int freq[n];
        for( int i=0 ; i<n ; i++ ){ freq[i]=0; }
        vector<int> ds;
        permute( ans, nums, ds, freq, n );
        return ans;
    }
};