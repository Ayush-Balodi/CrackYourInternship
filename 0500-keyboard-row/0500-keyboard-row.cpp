class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string r1="qwertyuiop",r2="asdfghjkl",r3="zxcvbnm";
        vector<string> ans;
        for( auto x:words ){
            int c1=0, c2=0 , c3=0;
            int n=x.size();
            for( int i=0 ; i<n ; i++ ){
                char temp = tolower(x[i]);
                if( r1.find(temp) != string::npos ) c1++;
                if( r2.find(temp) != string::npos ) c2++;
                if( r3.find(temp) != string::npos ) c3++;
            }
            if( c1==n || c2==n || c3==n ){
                ans.push_back(x);
            }
        }
        return ans;
    }
};