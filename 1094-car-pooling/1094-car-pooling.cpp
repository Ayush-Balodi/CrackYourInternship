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

/*
    [[2,1,5],[3,3,7]]
    [[1,1,2], [5,0,2], [3,1,3], [7,0,3]]
    [[1,1,2], [3,1,3], [5,0,2], [7,0,3]]
    
    curr = 2+3=5>4{false}
*/