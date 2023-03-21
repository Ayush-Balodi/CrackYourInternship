class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int k) {
    
        int n=nums.size(), count=0;
        if( n==1 && k==1 && nums[0]==0 )
            return true;
        
        for( int i=0 ; i<n ; i++ ){
            if( nums[i]==1 ){
                continue;
            }
            else if(nums[i]==0){
                if( i==0 and i+1<n and nums[i+1]!=1 ){
                    count++;
                    nums[i]=1;
                    continue;
                }
                if( i==n-1 and i-1>=0 and nums[i-1]!=1 ){
                    count++;
                    nums[i]=1;
                    continue;
                }
                
                if( i!=0 and i!=n-1 and nums[i-1]!=1 and nums[i+1]!=1 ){
                    nums[i] = 1;
                    count++;
                    continue;
                }  
            }
        }
        if( count>=k )
            return true;
        return false;
    }
};