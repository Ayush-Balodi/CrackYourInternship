class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size();
        priority_queue<int> pq;
        for( auto it:nums ){
            pq.push(it);
        }
        int c1 = pq.top();
        pq.pop();
        int c2 = pq.top();
        pq.pop();
        
        return((c1-1)*(c2-1));
    }
};