/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/contest/biweekly-contest-86

    TC = O(n^2)
    SC = O(n*(n+1)/2)
*/
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
       
        map<int,int> m;
        int k=1 , n=nums.size();
        for( int i=0 ; i<n-1 ; i++ ){
            int sum = nums[i];
            for( int j=i+1 ; j<i+2 ; j++ ){
                sum+=nums[j];
                if( m[sum] > 0 ){
                    return true;
                }
                m[sum] = k++;
            }
        }
        return false;
    }
};