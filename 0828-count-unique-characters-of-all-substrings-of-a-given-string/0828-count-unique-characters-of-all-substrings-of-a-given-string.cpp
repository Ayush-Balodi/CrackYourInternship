//EXPLANATION :+> https://drive.google.com/file/d/1qQ3WnF6-uTt3QRzV2gEs4-C9e-B_qcLX/view?usp=share_link 

class Solution {
public:
    int uniqueLetterString(string s) {
        
        vector<vector<int>> mp(26);
        int n=s.length();
        
        for( int i=0 ; i<26 ; i++ ){
            mp[i].push_back(-1);
        }
        
        for( int i=0 ; i<n ; i++ ){
            mp[s[i]-'A'].push_back(i);
        }
        
        for( int i=0 ; i<26 ; i++ ){
            mp[i].push_back(n);
        }
        
        int sum=0;
        for( int i=0 ; i<26 ; i++ ){
            for( int j=1 ; j<mp[i].size()-1 ; j++ ){
                sum += (mp[i][j] - mp[i][j-1]) * (mp[i][j+1] - mp[i][j]);
            }
        }
        return sum;
    }
};