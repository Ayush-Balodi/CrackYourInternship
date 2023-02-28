class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for( auto x:operations ){
            for( int i=0 ; i<x.size() ; i++ ){
                if(x[i]=='+'){
                    ans++;
                    break;
                }
                if(x[i] == '-'){
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};