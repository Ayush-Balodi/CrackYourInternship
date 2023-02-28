class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> m;
        for(auto str:stones ){
            m[str]++;
        }
        int n=jewels.size(), count=0;
        for( int i=0 ; i<n ; i++ ){
            count += m[jewels[i]];
        }
        return count;
    }
};