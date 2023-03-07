class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.length();
        if( n<26 ){ return false; }
        vector<int> v(26,0);
        for( int i=0 ; i<n ; i++ ){
            v[sentence[i]-'a']++;
        }
        
        for( int i=0 ; i<26 ; i++ ){
            if( v[i] < 1 ){
                return false;
            }
        }
        return true;
    }
};