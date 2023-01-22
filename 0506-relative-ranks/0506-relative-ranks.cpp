class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        int n=score.size();
        vector<string> str(n,"");
        priority_queue<pair<int,int>> pq;
        
        for( int i=0 ; i<n ; i++ ){
            pq.push(make_pair(score[i],i));    
        }
        
        for( int i=0 ; i<n ; i++ ){
            if( i==0 ){
                str[pq.top().second] += "Gold Medal";
            }
            else if( i==1 ){
                str[pq.top().second] += "Silver Medal";
            }
            else if( i==2 ){
                str[pq.top().second] += "Bronze Medal";
            }
            else{
                str[pq.top().second] = to_string(i+1);
            }
            pq.pop();
        }
        return str;
    }
};