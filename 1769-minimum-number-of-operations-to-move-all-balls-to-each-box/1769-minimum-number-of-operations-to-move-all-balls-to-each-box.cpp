class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int n=boxes.length();
        vector<int> nums(n,0);
        for( int i=0 ; i<n ; i++ ){
            for( int j=0 ; j<n ; j++ ){
                if(j==i){ 
                    continue;
                }
                if( boxes[j] == '1' ){
                    nums[i] += abs(i-j);
                }
            }
        }
        return nums;
    }
};