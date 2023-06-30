class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int m=intervals.size(), n=intervals[0].size();
        vector<vector<int>> nums;
        sort( intervals.begin(), intervals.end());
        
        nums.push_back(intervals[0]);
        
        for( int i=1 ; i<m ; i++ ){
            if(nums.back()[1] >= intervals[i][0]){
                nums.back()[1] = max(nums.back()[1], intervals[i][1]);
            }
            else{
                nums.push_back(intervals[i]);
            }
        }
        return nums;
    }
};