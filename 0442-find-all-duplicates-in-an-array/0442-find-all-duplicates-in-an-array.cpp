class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n+1,0), ans;
        
        for( int i=0 ; i<n ; i++ ){
            v[nums[i]]++;
        }
        
        for( int i=1 ; i<=n ; i++){
            if(v[i] == 2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};