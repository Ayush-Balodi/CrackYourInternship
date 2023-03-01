class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        int n=names.size();
        vector<pair<int,string>> v;
        for( int i=0 ; i<n ; i++ ){
            v.push_back({heights[i] , names[i]});
        }
        
        sort(v.begin() , v.end() , [&](auto &a , auto &b){
            return a.first>b.first;
        });
        
        vector<string> answer;
        for( auto x:v ){
            answer.push_back(x.second);
        }
        return answer;
    }
};