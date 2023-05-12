class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        
        sort( nums.begin(), nums.end() );
        
        int n=nums.size();
        int p1=0, p2=0, count=0;
        
        while( p1<n and p2<n ){
            
            count++;
            int temp = nums[p1];
            while( p2<n and nums[p2]-temp<=k )
                p2++;
            p1=p2;
        }
        return count;
    }
};