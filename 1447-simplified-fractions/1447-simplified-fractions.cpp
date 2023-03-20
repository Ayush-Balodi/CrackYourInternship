class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        
        vector<string> v;
        for( int i=1 ; i<n ; i++ ){
            for( int j=1 ; j<=n ; j++ ){
                string str="";
                if(i<j && __gcd(i,j)==1){
                    str += to_string(i) + '/' + to_string(j);
                    v.push_back(str);
                }
            }
        }
        return v;
    }
};