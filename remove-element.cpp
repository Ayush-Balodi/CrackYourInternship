/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/remove-element
    
    TC = O(n^2)
    SC = O(1) as no extra space is consumed.
*/

class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        
        int c=0 , n=arr.size();
        for( int i=0 ; i<n ; i++ ){
            
            while( arr[i] == val ){
                
                c++;
                for( int j=i; j<n-1; j++ ){
                    arr[j] = arr[j+1];
                }
                arr[n-1] = -1;
            }
        }
        return n-c;       
    }
};

/*
    TC = O(n)
    SC = O(1)
*/

class Solution {
    public int removeElement(int[] nums, int val) {
        
        int n = nums.length;
        
        int i=0 ;
        for( int j=0 ; j<n ; j++ ){
            
            if( nums[j] != val ){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
}