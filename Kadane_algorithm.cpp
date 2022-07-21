/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

    TC = O()
    SC = O()
*/

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int nums[], int n){
        
        long long currSum=0, maxSum=INT_MIN;
        
        for( long long i=0 ; i<n ; i++ ){
            
            currSum += nums[i];
            maxSum = max( maxSum , currSum );
            if( currSum < 0 ){
                currSum = 0;
            }
        }
        return maxSum;
    }
};