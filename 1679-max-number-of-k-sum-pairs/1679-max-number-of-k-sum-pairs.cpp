class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        int n=nums.size();
        
        int l=0, h=n-1, count=0;
        
        while( l<h ){
            int sum=nums[l]+nums[h];
            if( sum == k ){
                count++; l++; h--;
            }
            else if( sum <k ){
                l++;
            }
            else{
                h--;
            }
        }
        return count;
    }
};