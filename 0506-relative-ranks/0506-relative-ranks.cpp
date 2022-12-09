class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        int n = score.size();
        vector<string> str(n,"");
        priority_queue<pair<int,int>> pq;
        
        for( int i=0 ; i<n ; i++ ){
            pq.push({score[i],i});
        }
        
        int ind;
        if( !pq.empty() ){
            ind = pq.top().second;
            str[ind] = "Gold Medal";
            pq.pop();
        }
        if( !pq.empty() ){
            ind = pq.top().second;
            str[ind] = "Silver Medal";
            pq.pop();
        }
        if( !pq.empty() ){
            ind = pq.top().second;
            str[ind] = "Bronze Medal";
            pq.pop();
        }
        int x=4;
        while( !pq.empty() ){
            ind = pq.top().second;
            str[ind] = to_string(x);
            x++;
            pq.pop();
        }
        return str;
    }
};