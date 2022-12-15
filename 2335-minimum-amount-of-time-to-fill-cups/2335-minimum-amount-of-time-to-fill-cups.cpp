class Solution {
public:
    int fillCups(vector<int>& nums) {
        
        priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());
        
        int sum=0;
        int first = pq.top(); pq.pop();
        sum+=first;
        int second = pq.top(); pq.pop();
        sum +=second + pq.top();
        if( first + second > pq.top() ){
            return  sum/2 + sum%2;
        }
        return pq.top();        
    }
};