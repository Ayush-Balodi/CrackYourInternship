class Solution {
public:
    string getHint(string secret, string guess) {
        
        int n=secret.size(), bull=0;
        unordered_map<int,int> m1;
        unordered_map<int,int> m2;
        
        for( int i=0 ; i<n; i++ ){
            if(secret[i] == guess[i]){
                bull++;
            }
            else{
                m1[secret[i]]++;
                m2[guess[i]]++;
            }
        }        
        int cow=0;
        for( auto val:m2 ){
            if(m1.find(val.first) != m1.end()){
                cow += min(val.second,m1[val.first]);
            }
        }
        string ans = to_string(bull) + "A" + to_string(cow)+ "B";
        return ans;
    }
};