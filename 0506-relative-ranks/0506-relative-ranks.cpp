class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        int n=score.size();
        priority_queue<pair<int,int>> pq;
        for( int i=0 ; i<n ; i++ ){
            pq.push({score[i],i});
        }
        
        vector<string> answer(n);
        for( int i=0 ; i<n ; i++ ){
            pair<int,int> tp = pq.top();
            if( i==0 ){ answer[tp.second] = "Gold Medal"; }
            else if( i==1 ){ answer[tp.second] = "Silver Medal"; }
            else if( i==2 ){ answer[tp.second] = "Bronze Medal"; }
            else { answer[tp.second] = to_string(i+1); }
            pq.pop();
        }
        return answer;
    }
};