class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq(amount.begin() , amount.end() );
        int ans=0;
        while( !pq.empty() ){
            int first = pq.top(); pq.pop();
            int second = pq.top(); pq.pop();
            if( first<=0 && second<=0 ){ break; }
            first--; 
            second--;
            pq.push(first);
            pq.push(second);
            ans++;
        }
        return ans;
    }
};