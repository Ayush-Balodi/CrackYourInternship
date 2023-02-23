class Solution {
public:
    typedef pair<int,int> P;
    int eatenApples(vector<int>& apples, vector<int>& days) {
        
        int n=apples.size(), ans=0, i=0;
        priority_queue<P, vector<P> , greater<P>> pq; //{last day before expiration,apples}
        
        // until the vector end or the queue has apple left for other days
        while( i<n || pq.size() ){
            
            // pushing apples into the queue with their expiration date-1
            if(i<n && apples[i]>0 ) { pq.push(make_pair(i+days[i]-1, apples[i])); }
            
            // popping out those apples which got rotten today
            while( pq.size() && pq.top().first<i ){ pq.pop(); }
            
            // taking out one apple and checking if more than one so push it back by apple-1
            if(pq.size()){
                pair<int,int> temp = pq.top();
                pq.pop();
                if( temp.second > 1 ){ pq.push({temp.first, temp.second-1}); }
                ans++;
            }
            i++;
        }
        return ans;
    }
};