/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/group-anagrams

    TC = O(n^2)
    Auxiliary space = O(1)
*/
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int n=nums.size() , sum=-1;
        for( int i=0 ; i<n-1 ; i++ ){
            for( int j=i+1 ; j<n ; j++ ){
                if(nums[i]<nums[j]){
                    sum = max(sum,nums[j]-nums[i]);
                }
            }
        }
        return sum;
    }
};

/*
    TC = O(n)
    Auxiliary space = O(1)
*/
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int n=nums.size() , sum=-1;
        int small = nums[0];
        
        for( int i=0 ; i<n ; i+=1 ){
            if(nums[i] <= small){ small = nums[i]; }
            else { sum = max(sum , nums[i]-small); }
        }
        return sum;
    }
};