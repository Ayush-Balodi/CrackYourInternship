class Solution {
public:
    void BFS( vector<int> adj[], int source, vector<int> &visited ){
        queue<int> q;
        q.push(source); visited[source]=1;
        while( !q.empty() ){
            int curr = q.front();
            q.pop();
            
            for( auto x:adj[curr] ){
                if( visited[x] == 0 ){
                    visited[x] = 1;
                    q.push(x);
                }
            }
        }
        return;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        int v=edges.size();
        vector<int> adj[n];
        
        if(v==0){
            return true;
        }
        
        for( int i=0 ; i<v ; i++ ){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int> visited(n+1, 0);
        BFS(adj, source, visited);

        if(visited[destination] == 1){
            return true;
        }
        return false;
    }
};