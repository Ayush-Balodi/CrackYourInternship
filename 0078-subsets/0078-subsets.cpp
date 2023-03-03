class Solution {
public:
    vector<vector<int>> ans;
    void helper( vector<int> &sub, int i, vector<int> &nums ){
        if( i==nums.size() ){
            ans.push_back(sub);
            return;
        } 
        helper( sub, i+1, nums );
        sub.push_back(nums[i]);
        helper( sub, i+1, nums );
        sub.pop_back();
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        helper( v, 0, nums );
        return ans;
    }
};