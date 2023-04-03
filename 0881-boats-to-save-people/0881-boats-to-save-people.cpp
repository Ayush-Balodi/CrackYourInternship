// ->SORTING ->TWO-POINTER ->GREEDY
class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int n=nums.size();
       
        if( n<1 and nums[0]<=limit )
            return 1;
        
        sort(nums.begin(), nums.end());
        int low=0, high=n-1, count=0;
        
        while( low<=high ){
            if( nums[low]+nums[high] <= limit ){
                count++; 
                low++; 
                high--;
            }
            else{
                count++;
                high--;
            }
        }
        return count;
    }
};