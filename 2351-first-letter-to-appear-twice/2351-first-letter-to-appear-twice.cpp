class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> v(26,0);
        for( auto x:s ){
            v[x-'a']++;
            if(v[x-'a']==2){
                return x;
            }
        }
        return ' ';
    }
};