class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxval = INT_MIN,cnt=0;
        for( auto x:sentences ){
            // maxval = max(maxval,(int)count(x.begin(),x.end(),' '));
            // return maxval+1;
            // (int) because of the returning of unsigned int by count function
            cnt = 1+count(x.begin(),x.end(),' ');
            maxval = max(cnt,maxval);
        }
        return maxval;
    }
};