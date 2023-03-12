/*
    1.> First I've made a frequency map
    2.> Then build a maxheap based on the frequency
    3.> I've make the queue which is consisting of time period for which cpu will remain ideal if we use that character again
    4.> We iterate and do this task until the q is not empty or pq is not empty
*/
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        priority_queue<int> pq;
        map<char, int> mp;
        for( auto x:tasks ){
            mp[x]++;
        }
        
        for( auto x:mp ){
            pq.push(x.second);
        }
        
        queue<pair<int,int>> q; 
        int time=0;
        while( !pq.empty() || !q.empty() ){
            time += 1;
            if( !pq.empty() ){
                int temp = pq.top();
                pq.pop();
                temp--;
                if( temp != 0 ){
                    q.push({time+n,temp});
                }
            }
            if( !q.empty() and q.front().first==time ){
                auto temp2 = q.front();
                pq.push(temp2.second);
                q.pop();
            }
        }
        return time;
    }
};