class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights){
        
        int n=names.size();
        vector<pair<string,int>> v;
        for( int i=0 ; i<n ; i++ ){
            v.push_back(make_pair(names[i],heights[i]));
        }
        
        sort( v.begin() , v.end() , [&](auto& a , auto& b){
           return (a.second>b.second); 
        });
        
        vector<string> ans(n);
        for( int i=0 ; i<n ; i++ ){
            ans[i] = v[i].first;
        }
        return ans;
    }
};