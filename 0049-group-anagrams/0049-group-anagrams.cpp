class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<pair<string,int>> v;
        int i=0;
        for( auto x:strs ){
            sort(x.begin(),x.end());
            v.push_back({x,i++});
        }
        
        sort(v.begin(),v.end());
        
        int n=v.size();
        vector<vector<string>> ans;
        vector<string> temp;
        for( int i=0 ; i<n-1 ; i++ ){
            if(v[i].first == v[i+1].first){
                temp.push_back(strs[v[i].second]);
            }
            if(v[i].first != v[i+1].first){
                temp.push_back(strs[v[i].second]);
                ans.push_back(temp);
                temp.clear();
            }   
        }
        temp.push_back(strs[v[n-1].second]);
        ans.push_back(temp);
        return ans;
    }
};