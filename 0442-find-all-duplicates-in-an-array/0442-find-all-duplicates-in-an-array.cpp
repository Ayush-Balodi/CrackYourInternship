class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
		int max = *max_element(begin(nums), end(nums));
        vector<int> v(max+1,0), ans;
        
        for( int i=0 ; i<n ; i++ ){
            v[nums[i]]++;
        }
        
        for( int i=1 ; i<=max ; i++){
            if(v[i] == 2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};