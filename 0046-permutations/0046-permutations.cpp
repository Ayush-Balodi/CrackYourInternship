/*
1> We are traversing the nums by taking a data structure and having the frequency map to store which element we have currently in our data structure.

2> We are calculating this in permute function where we are checking whether the frequency map of number is unmarked or not, if it is unmarked then move forward to add it in the data structure and make its count '1' so as to mark it down and recursively call back to the function with same parameters so as to have another element left.

3> When returning from the function we are just removing the currently added element to the data structure and also removing them from frequency map as '0' marked.

*/
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