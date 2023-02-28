class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt=0, n=jewels.size();
        for( int i=0 ; i<n ; i++ ){
            cnt += count(stones.begin(),stones.end(),jewels[i]);
        }
        return cnt;
    }
};