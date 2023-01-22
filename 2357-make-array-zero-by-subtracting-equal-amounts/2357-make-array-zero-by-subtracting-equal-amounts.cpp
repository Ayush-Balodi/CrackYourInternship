class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int n=nums.size();
        priority_queue<int,vector<int>,greater<int>> pq;
        int mx=INT_MIN;
        
        for( int i=0 ; i<n ; i++ ){
            pq.push(nums[i]);
            mx = max( mx,nums[i] );
        } 
        
        int temp=0, count=0, lastElement=0;
        while( !pq.empty() && mx ){
            
            if( pq.top()==0 || pq.top()==lastElement ){
                pq.pop();
                continue;
            }
            
            int topElement = pq.top();
            int value = topElement-temp;
            mx -= value;
            temp += value;
            
            count++;
            lastElement = topElement;
        }
        return count;
    }
};