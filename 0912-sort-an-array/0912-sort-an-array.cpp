class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        priority_queue<int,vector<int>,greater<int>> pq(nums.begin() , nums.end());
        vector<int> answer;
        while( !pq.empty() ){
            answer.push_back(pq.top());
            pq.pop();
        }
        return answer;
    }
};