class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        deque<int> pq;
        for( int i=0;i<=n;i++){
            pq.push_back(i);
        }
        vector<int> v;
        for( int i=0 ; i<n ; i++ ){
            if(s[i] == 'I'){
                v.push_back(pq.front());
                pq.pop_front();
            }
            if( s[i] == 'D' ){
                v.push_back(pq.back());
                pq.pop_back();
            }
        }
        v.push_back(pq.back());
        return v;
    }
};