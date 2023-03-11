class Solution {
private:
    /*1.> Recursive*/
    // int helper( string s, int i, int j ){
    //     if( i >= j ){
    //         return 1;
    //     }
    //     return (s[i]==s[j]) ? helper( s, i+1, j-1 ) : 0;
    // }
    
    /*2.> Memoized approach*/
    // int helper( vector<vector<int>> &mem, string s, int i, int j ){
    //     if( i >= j ){
    //         return 1;
    //     }
    //     if( mem[i][j] >=0 ){ return mem[i][j]; }
    //     return mem[i][j] = (s[i]==s[j]) ? helper( mem, s, i+1, j-1 ) : 0;
    // }
public:
    int countSubstrings(string s) {
        /*1.> Recursive*/
        // int count=0;
        // for( int i=0 ; i<s.size() ; i++ ){
        //     for( int j=i ; j<s.size() ; j++ ){
        //         count += helper(s,i,j);
        //     }
        // }
        // return count;
        
        /*2.> Memoized approach*/
        // vector<vector<int>> mem(s.length() , vector<int>(s.length(), -1));
        // int count=0;
        // for( int i=0 ; i<s.size() ; i++ ){
        //     for( int j=i ; j<s.size() ; j++ ){
        //         count += helper(mem,s,i,j);
        //     }
        // }
        // return count;
        
        /*3.> DP*/
        int n=s.length(), count=0;
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for( int i=n-1 ; i>=0 ; i-- ){
            for( int j=i ; j<n ; j++ ){
                if( i == j ){
                    dp[i][j] += 1;
                }
                else if( i+1 == j ){
                    dp[i][j] = (s[i]==s[j]) ? 1 : 0;
                }
                else{
                    dp[i][j] = (s[i]==s[j]) ? dp[i+1][j-1] : 0;
                }
                count += dp[i][j];
            }
        }
        return count;
    }
};
/*
i=0 j=2<3
     a  b  c
     0  1  2
a 0  1  0  0
b 1  0  1  0
c 2  0  0  1
*/