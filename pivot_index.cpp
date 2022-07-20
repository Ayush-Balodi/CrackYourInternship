/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/find-pivot-index/

    TC = O(n^2)
    SC = O(n) due to stack trace
*/

class Solution {
public:
    
    bool check ( vector<int> &nums , int pivot ){
        
        int left=0 , right=0;
        int n = nums.size();
        if( pivot == 0 ){
            left = 0;
        }
        else{
            for( int i=0 ; i<pivot ; i++ ){
                left += nums[i];
            }
        }
        
        if( pivot == n-1 ){
            right = 0;
        }
        else{
            for( int i=pivot+1; i<n ; i++ ){
                right += nums[i];
            }
        }
        //cout << left << " " << right << endl;
        if( left == right ){
            return true;
        }
        return false;
    }
    
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        for( int i=0 ; i<n ; i++ ){
            if( check ( nums , i ) == true ){
                return i;
            }
        }
        return -1;
    }
};

/*
    TC = O(n)
    SC = O(1)
*/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        if( !n ){
            return -1;
        }
        
        int sum=0 , left=0;
        for( int i=0 ; i<n ; i++ ){
            sum += nums[i];
        }
        for( int i=0 ; i<n ; i++ ){
            if(left*2 == sum-nums[i]){
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }
};