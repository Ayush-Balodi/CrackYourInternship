class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int count=0;
        for( auto x:operations ){
            int n=x.size();
            for( int i=0 ; i<n ; i++ ){
                if(x[i] == '+'){
                    count += 1;
                    break;
                }
                if( x[i] == '-'){
                    count -= 1;
                    break;
                }
            }
        }
        return count;
    }
};