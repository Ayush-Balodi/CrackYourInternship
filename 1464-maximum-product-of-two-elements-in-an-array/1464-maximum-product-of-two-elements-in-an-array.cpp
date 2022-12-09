class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size();
        priority_queue<int> pq;
        for( int i=0 ; i<n ; i++ ){
            pq.push(nums[i]);
        }
        int t1=pq.top() ; pq.pop();
        int t2=pq.top() ; pq.pop();
        return (t1-1)*(t2-1);
    }
};