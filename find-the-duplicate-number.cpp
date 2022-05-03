/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git

    TC = O(n) + O(nlogn) = O(nlogn)
    SC = O(1) as no extra space is consumed.
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort( nums.begin() , nums.end() );
        
        int n = nums.size();
        
        for( int i=0 ; i<n-1 ; i++ ){
            if( nums[i] == nums[i+1] ){
                return nums[i];
            }
        }
        return -1;
    }
};

//@2nd method
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0] , fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while( slow != fast );
        
        fast = nums[0];
        
        while( slow != fast ){
            slow = nums[slow];
            fast = nums[fast];
        }

        return nums[slow];
    }
};