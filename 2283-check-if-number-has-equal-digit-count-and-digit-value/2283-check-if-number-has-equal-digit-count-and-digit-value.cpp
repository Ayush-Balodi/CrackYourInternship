class Solution {
public:
    bool digitCount(string num) {
        
        int n=num.length();
        vector<int> v(10,0);
        for( int i=0 ; i<n ; i++ ){
            v[num[i]-'0']++;
        }
        for( int i=0 ; i<n ; i++ ){
            if((num[i]-'0') != (v[i])){
                
                return false;
            }
        }
        return true;
    }
};