class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        map<int,int> loss;
        for( auto v:matches ){
            int x=v[0] , y=v[1];
            if(loss.count(x) == 0){ loss[x]=0; }
            loss[y]++;
        }
        vector<int> one, two;
        for( auto x : loss ){
            if( x.second == 0 ){
                one.push_back(x.first);
            }
            if( x.second == 1 ){
                two.push_back(x.first);
            }
        }
        return {one,two};
    }
};