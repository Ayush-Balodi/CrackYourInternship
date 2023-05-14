class Solution {
private:
    unordered_map<vector<bool>, int> dp;
    int helper( vector<int> &nums, vector<bool> &visited, int op, int n ){
        int maxval=0;
        for( int i=0 ; i<n ; i++ ){
            if (dp.find(visited)!=dp.end()) return dp[visited];
            if( visited[i] == true ) continue;
            
            for( int j=i+1 ; j<n ; j++ ){
                if( visited[j] == true ) continue;
                
                visited[i] = true;
                visited[j] = true;
                int currScore = op * gcd( nums[i], nums[j] );
                int nextScore = helper( nums, visited, op+1, n );
                maxval = max( maxval, currScore+nextScore );
                visited[i] = false;
                visited[j] = false;
            }
        }
        return dp[visited]=maxval;
    }
public:
    int maxScore(vector<int>& nums) {
        
        int n=nums.size();
        vector<bool> visited(n, false);
        return helper(nums, visited, 1, n);
    }
};