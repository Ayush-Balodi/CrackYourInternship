/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/subarray-sums-divisible-by-k/
 
    <--TLE-->
    TC = O(n^3)
    SC = O(1)
*/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int kon) {
        
        int n = nums.size() , c=0;
        for( int i=0 ; i<n ; i++ ){
            
            for( int j=i ; j<n ; j++ ){
                
                int sum = 0;
                
                for( int k=i ; k<=j ; k++ ){
                    sum += nums[k];
                }
                
                if( sum % kon == 0 ){
                    c++;
                }
            }
        }
        return c;
    }
};

/*
    <--TLE-->
    TC = O(n^2)
    SC = O(n+1) = O(n)
*/
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int n = nums.size() , c=0;
        
        int count[n+1];
        count[0] = 0;
        
        for( int i=1 ; i<=n ; i++ ){
            count[i] = count[i-1] + nums[i-1];
        }
        
        for( int i=1 ; i<=n ; i++ ){
            int sum = 0;
            for( int j=0 ; j<i ; j++ ){
                sum = count[i] - count[j];
                if( sum % k == 0 ){
                    c++;
                }
            }
        }
        return c;
    }
};

/*
    TC = O(n);
    SC = O(n); as unordered_map can be of maximum size as n 
*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int temp , n=nums.size() , c=0;
        unordered_map<int,int> m;
        
        m[0] = 1;
        int sum=0;
        for( int i=0 ; i<n ; i++ ){
            
            sum += nums[i];
            if( m.count(sum-k) > 0 ){
                 c += m[sum-k];
            }
            m[sum] += 1;
        }
        return c;
    }
};