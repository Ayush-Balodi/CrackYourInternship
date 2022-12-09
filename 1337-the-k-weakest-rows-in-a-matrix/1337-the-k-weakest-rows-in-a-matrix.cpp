class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int n=mat.size() , m=mat[0].size();
        int c;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for( int i=0 ; i<n ; i++ ){
            c=0;
            for( int j=0 ; j<m ; j++ ){
                if(mat[i][j] == 1){
                    c++;
                }
            }
            pq.push({c,i});
        }
        
        vector<int> v;
        while( !pq.empty() && k-- ){
            int top = pq.top().second;
            v.push_back(top);
            pq.pop();
        }
        return v;
    }
};