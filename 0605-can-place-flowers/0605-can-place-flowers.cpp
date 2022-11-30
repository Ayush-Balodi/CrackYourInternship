class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int key) {
        
        if( key == 0 ){
            return true;
        }
        int count=0;
        int n=nums.size();
        
        if( n==1 and nums[0]==0 ){
            return true;
        }
        for( int i=0 ; i<n ; i++ ){

            if(i==0 and nums[i]==0 and !nums[i+1] ){
                nums[i] = 1;
                count++;
            }
            if( i==n-1 and nums[i]==0 and !nums[i-1] ){
                nums[i] = 1;
                count++;
            } 
            if( (i!=0 and i!=n-1 ) and nums[i]==0 and !nums[i-1] and !nums[i+1] )
            {
                nums[i] = 1;
                count++;
            }
            if( count == key ){
                return true;
            }
        }
        return false;
    }
};