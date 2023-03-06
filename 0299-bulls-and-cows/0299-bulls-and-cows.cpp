class Solution {
public:
    string getHint(string secret, string guess) {
        
        int bulls=0, cows=0;
        int n=secret.length(), m=guess.length();
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        
        for( int i=0 ; i<n ; i++ ){
            if( secret[i] == guess[i] ){
                bulls++;
            }
            else{
                mp1[secret[i]]++;
                mp2[guess[i]]++;
            }
        }
        for( auto val:mp2 ){
            if( mp1.find(val.first) != mp1.end() ){
                cows += min(val.second,mp1[val.first]);
            }
        }
        return to_string(bulls)+'A'+to_string(cows)+'B';
    }
};
/*
    [1123]
      |
    [01*1] *->1
*/