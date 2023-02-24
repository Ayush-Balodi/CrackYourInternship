class Solution {
public:
    typedef pair<int,int> P;
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int n=mat.size(), m=mat[0].size();
        priority_queue<P,vector<P>,greater<P>> pq;
        
        for( int i=0 ; i<n ; i++ ){
            int c=0;
            for( int j=0 ; j<m ; j++ ){
                if( mat[i][j] == 1 ){
                    c++;
                }
            }
            pq.push({c,i});
        }
        
        vector<int> ans;
        while( k-- ){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};