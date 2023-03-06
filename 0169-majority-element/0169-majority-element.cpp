class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(), majority=nums[0], count=0;
        for( int i=0 ; i<n ; i++ ){
            if( count==0 ){
                count++;
                majority = nums[i];
            }
            else if( majority == nums[i] ){
                count++;
            }
            else{
                count--;
            }
        }
        return majority;
    }
};