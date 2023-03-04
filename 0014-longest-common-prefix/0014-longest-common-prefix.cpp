class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int minval = INT_MAX, n=strs.size();
        for( auto x:strs ){
            if( minval > x.size() ){
                minval = x.size();
            }
        }
        
        string result=""; 
        for( int i=0 ; i<minval ; i++ ){
            char temp = strs[0][i];
            int k=1;
            while(k<n){
                if( strs[k][i] == temp ){
                    k++;
                }
                else{
                    return result;
                }
            }
            result += temp;
        }
        return result;
    }
};