class Solution {
public:
    int helper( vector<vector<int>> &nums, int i, int j, map<string,int> &mp ){
        
        int r=nums.size();
        int c=nums[0].size();
        
        if( i == r ){
            return 0;
        }
        if( j<0 or j>=c ){
            return INT_MAX;
        }
        string key = to_string(i)+"silki"+to_string(j);
        if( mp.find(key) != mp.end() ){
            return mp[key];
        }
        
        int op1 = helper( nums, i+1, j, mp );
        int op2 = helper( nums, i+1, j-1, mp );
        int op3 = helper( nums, i+1, j+1, mp );
        
        mp.insert({key, nums[i][j] + min(op1, min(op2,op3))});
        return mp[key];
    }
    int minFallingPathSum(vector<vector<int>>& nums) {
        
        map<string,int> mp;
        int n=nums.size(), ans=INT_MAX;
        for( int i=0 ; i<n ; i++ ){
            ans = min(ans, helper( nums, 0, i, mp ));
        }
        return ans;
    }
};