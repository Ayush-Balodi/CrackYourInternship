class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxval = INT_MIN,cnt=0;
        for( auto x:sentences ){
            cnt = 1+count(x.begin(),x.end(),' ');
            maxval = max(cnt,maxval);
        }
        return maxval;
    }
};