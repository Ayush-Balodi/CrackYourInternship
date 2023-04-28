class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<int> adj[n];
        int v=edges.size();
        if(v==0)
            return true;
        
        for( int i=0; i<v; i++ ){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        queue<int> q;
        vector<int> visited(n+1, 0);
        q.push(source); visited[source]=1;
        
        while( !q.empty() ){
            int curr = q.front();
            q.pop();
            for( auto x:adj[curr] ){
                if( visited[x]==0 ){
                    q.push(x);
                    visited[x]=1;
                }
            }
        }
        
        return visited[destination];
    }
};