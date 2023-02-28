class Solution {
public:
    vector<string> cellsInRange(string s) {
        
        char col1 = s[0];
        int row1 = s[1]-'0';
        
        char col2 = s[3];
        int row2 = s[4] - '0';
        
        vector<string> ans;
        for( int i=col1 ; i<=col2 ; i++ ){
            for( int j=row1 ; j<=row2 ; j++ ){
                string temp ="";
                temp+=i;
                temp += to_string(j);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};