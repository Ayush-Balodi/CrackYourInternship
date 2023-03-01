class Solution {
public:
    int countPoints(string rings) {
        int n=rings.size();
        vector<vector<bool>> check(10,vector<bool>(3));
        
        int index=-1;
        for( auto i:rings ){
            
            if( i == 'R' ){
                index=0;
            }
            else if( i == 'G' ){
                index=1;
            }
            else if( i == 'B' ){
                index=2;
            }
            else{
                check[i-'0'][index] = true;
            }
        }
        int count=0;
        for( auto num:check ){
            if( num[0] && num[1] && num[2] ){
                count++;
            }
        }
        return count;
    }
};