class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort( intervals.begin() , intervals.end() , 
             [&](auto&a , auto&b){
                 return a[0]<b[0];
             });
        
        vector<int> temp = intervals[0];
        vector<vector<int>> ans;
        
        for( int i=1 ; i<n ; i++ ){
            if( temp[1] >= intervals[i][0] ){
                temp[1] = max(temp[1],intervals[i][1]);
            }
            else{
                ans.push_back(temp);
                temp = intervals[i];
            }
        }
        ans.push_back(temp);
        return ans;
    }
};