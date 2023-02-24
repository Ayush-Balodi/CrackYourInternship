class Solution {
public:
/*
    1 => enter
    0 => end
*/
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        vector<vector<int>> v;
        int n=trips.size(), curr=0;
        for( int i=0 ; i<n ; i++ ){
            v.push_back({trips[i][1],1,trips[i][0]});
            v.push_back({trips[i][2],0,trips[i][0]});
        }
        sort( v.begin() , v.end() );
        n=v.size();
        for( int i=0 ; i<n ; i++ ){
            if( v[i][1] == 1 ){ curr += v[i][2];}
            else { curr -= v[i][2]; }
            if( curr > capacity ){ return false;}
        }
        return true;
    }
};