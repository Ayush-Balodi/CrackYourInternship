/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/3sum/

    TC = O(n^2) + O(log m)
    Auxiliary space = O(1)
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        sort( nums.begin() , nums.end() );
        vector<vector<int>> v;
        
        for( int i=0 ; i<n-2 ; i++ ){
            
            if( i == 0 || (nums[i] != nums[i-1]) ){
                
                int low=i+1 , high=n-1 , sum = 0-nums[i];
                while( low < high ){
                    
                    if( nums[low] + nums[high] == sum ){
                        v.push_back({nums[i],nums[low],nums[high]});
                        
                        while( low < high && nums[low] == nums[low+1] ){low++;}
                        while( low < high && nums[high] == nums[high-1] ) {high--;}
                        
                        low++;
                        high--;
                    }
                    else if( nums[low] + nums[high] < sum ) {low++;}
                    else {high--;}
                }
            }
        }
        return v;
    }
};