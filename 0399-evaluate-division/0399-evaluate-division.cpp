class Solution {
public:
    void dfs( string src, string dest, unordered_map<string, unordered_map<string, double>> &graph, unordered_set<string> vis, double &ans, double temp ){
        
        if( vis.find(src) != vis.end() ){
            return;
        }
        vis.insert(src);
        if( src == dest ){
            ans = temp;
            return;
        }
        
        for( auto x:graph[src] ){
            dfs( x.first, dest, graph, vis, ans, temp*x.second );
        } 
        return;
    }
    
    void buildGraph( vector<vector<string>>& equations, vector<double>& values, unordered_map<string, unordered_map<string, double>> &graph){
        
        for( int i=0 ; i<equations.size() ; i++ ){
            string dividend = equations[i][0];
            string divisor = equations[i][1];
            
            double value = values[i];
            graph[dividend][divisor] = value;
            graph[divisor][dividend] = 1/value;
        }
        return;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        unordered_map<string, unordered_map<string, double>> graph;
        buildGraph( equations, values, graph );
        vector<double> ans;
        
        for( auto x:queries ){
            string dividend = x[0];
            string divisor = x[1];
            
            if( graph.find(dividend) == graph.end() or graph.find(divisor) == graph.end() ){
                ans.push_back(-1.0);
            }
            else{
                unordered_set<string> visited;
                double a=-1, temp=1.0;
                dfs( dividend, divisor, graph, visited, a, temp );
                ans.push_back(a);
            }
        }
        return ans;
    }
};