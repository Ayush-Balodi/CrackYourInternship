/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/subarray-sum-equals-k/

    TC = O(n);
    SC = O(n); asunordered map can max is of size n
*/
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int n = nums.size(), sum=0 ,ans=0;
        unordered_map<int,int> m;
        
        m[0] = 1;
        for( int i=0 ; i<n ; i++ ){
            
            sum += nums[i];
            int rem = sum % k;
            
            if( rem < 0 ){
                rem += k;
            } 
            
            if( m.count(rem) > 0 ){
                ans += m[rem];
            }
            m[rem] +=1;
        }
        return ans;
    }
};