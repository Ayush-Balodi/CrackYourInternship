class Solution {
public:
    int similarPairs(vector<string>& words) {
        vector<set<char>> v;
        for( auto x:words ){
            set<char> temp(x.begin() , x.end());
            v.push_back(temp);
        }
        
        int n=v.size(), count=0;
        for( int i=0 ; i<n ; i++ ){
            for( int j=i+1 ; j<n ; j++ ){
                if( v[i] == v[j] ){
                    count++;
                }
            }
        }
        return count;        
    }
};