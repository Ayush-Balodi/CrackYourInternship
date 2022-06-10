/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1/#

    TC = O(v*E);
    TC = O(V);
*/
class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        
        vector<vector<int>> p;
        vector<int> l1;
        
        for( int i=0 ; i<V ; i++ ){
            l1.push_back(i);
            for( int j=0 ; j<adj[i].size() ; j++){
                l1.push_back(adj[i][j]);
            }
            p.push_back(l1);
            l1.clear();
        }
        return p;
    }
};
