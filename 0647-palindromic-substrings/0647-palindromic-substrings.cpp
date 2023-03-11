class Solution {
private:
    /*1.> Recursive*/
    // int helper( string s, int i, int j ){
    //     if( i >= j ){
    //         return 1;
    //     }
    //     return (s[i]==s[j]) ? helper( s, i+1, j-1 ) : 0;
    // }
    
    int helper( vector<vector<int>> &mem, string s, int i, int j ){
        if( i >= j ){
            return 1;
        }
        if( mem[i][j] >=0 ){ return mem[i][j]; }
        return mem[i][j] = (s[i]==s[j]) ? helper( mem, s, i+1, j-1 ) : 0;
    }
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
        
        vector<vector<int>> mem(s.length() , vector<int>(s.length(), -1));
        int count=0;
        for( int i=0 ; i<s.size() ; i++ ){
            for( int j=i ; j<s.size() ; j++ ){
                count += helper(mem,s,i,j);
            }
        }
        return count;
    }
};