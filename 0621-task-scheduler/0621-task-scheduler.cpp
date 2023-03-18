// https://drive.google.com/file/d/1C_1Vc4fj91gBjboWQRPjY9WxsMVbiIwQ/view?usp=share_link
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> mp;
        for( auto x:tasks ){
            mp[x]++;
        }
        
        priority_queue<int> pq;
        for( auto x:mp ){
            pq.push(x.second);
        }
        int time=0;
        queue<pair<int,int>> q;
        
        while( !pq.empty() || !q.empty() ){
            time+=1;
            if( !pq.empty() ){
                int temp = pq.top();
                temp--;
                pq.pop();
                if( temp!=0 ){
                    q.push( {time+n, temp} );
                }
            } 
            if( !q.empty() and q.front().first == time ){
                auto temp2 = q.front();
                q.pop();
                pq.push({temp2.second});
            }
        }
        return time;
    }
};