class Solution {
public:
    int firstUniqChar(string str) {
        int n=str.length();
        vector<int> v(26, 0);
        for( auto x:str ){
            v[x-'a']++;
        }
        
        for( int i=0 ; i<n ; i++ ){
            if(v[str[i]-'a'] == 1){
                return i;
            }
        }
        return-1;
    }
};