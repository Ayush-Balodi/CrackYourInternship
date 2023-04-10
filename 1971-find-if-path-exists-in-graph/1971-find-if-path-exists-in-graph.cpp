class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> mp;
        for( auto x:edges ){
            vector<int> temp = x;
            int u=temp[0];
            int v=temp[1];
            
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        
        queue<int> q; vector<int> visited(n+1, 0);
        q.push(source); visited[source] = 1;
        
        while( !q.empty() ){
            int curr = q.front();
            q.pop();
            
            for( auto x:mp[curr] ){
                if( visited[x]==0 ){
                    visited[x]=1;
                    q.push(x);
                }
            }
            if( visited[destination] )
                return true;
        }
        return visited[destination];
    }
};