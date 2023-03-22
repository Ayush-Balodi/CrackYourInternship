class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        
        vector<vector<int>> adj[n+1];
        for( auto a:roads ){
            adj[a[0]].push_back({a[1], a[2]});
            adj[a[1]].push_back({a[0], a[2]});
        }
        
        vector<int> visited(n+1, 0);
        queue<int> q;
        q.push(1);
        
        int minval = INT_MAX;
        while( !q.empty() ){
            int temp=q.front();
            q.pop();

            for(auto s:adj[temp])
            {
                minval = min(minval, s[1]);
                if(!visited[s[0]])
                { 
                    visited[s[0]]=1;
                    q.push(s[0]);
                }
            }
        }
        return minval;
    }
};