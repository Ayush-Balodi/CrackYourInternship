class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n=nums.size();
        bool flag=false;
        for( int i=0 ; i<n-1 ; i++ ){
            if( nums[i] >= nums[i+1] ){
                if(flag)
                    return false;
                flag=true;
                if(i!=0)
                    nums[i+1] = (nums[i-1] < nums[i+1]) ? nums[i+1] : nums[i];
            }
        }
        return true;
    }
};
/*
     0 1 2  3 4
    [1 2 10 10 7]
       k i  j
*/