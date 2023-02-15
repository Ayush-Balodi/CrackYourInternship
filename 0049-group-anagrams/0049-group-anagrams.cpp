class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n=strs.size(), i=0;
        vector<pair<string,int>> v;
        
        for( auto s:strs ){
            sort(s.begin(), s.end());
            v.push_back(make_pair(s,i++));
        }
        
        sort(v.begin() , v.end());
        
        vector<vector<string>> ans;
        vector<string> temp;
        
        for( i=0 ; i<n-1 ; i++ ){
            if( v[i].first == v[i+1].first ){
                temp.push_back(strs[v[i].second]);
            }
            if( v[i].first != v[i+1].first ){
                temp.push_back(strs[v[i].second]);
                ans.push_back(temp);
                temp.clear();
            }
        }
        temp.push_back(strs[v[i].second]);
        ans.push_back(temp);
        
        return ans;
    }
};