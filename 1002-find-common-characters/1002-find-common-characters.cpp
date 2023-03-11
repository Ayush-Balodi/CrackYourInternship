class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        
        for( auto x:words[0] ){
            hash1[x-'a']++; 
        }
        
        int n=words.size();
        
        for( int i=1 ; i<n ; i++ ){
            for(auto x:words[i] ){
                hash2[x-'a']++;
            }
            
            for( int i=0 ; i<26 ; i++ ){
                hash1[i] = min(hash1[i] , hash2[i]);
                hash2[i] = 0;
            }
        }
        vector<string> ans;
        for( int i=0 ; i<26 ; i++ ){
            if(hash1[i]>0){
                while(hash1[i]--){
                    char x=i+'a';
                    ans.push_back({x});
                }
            }
        }
        return ans;
    }
};