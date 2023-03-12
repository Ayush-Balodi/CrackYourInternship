class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        vector<string> str1;
        vector<string> str2;
        
        for( auto x:words ){
            sort(x.begin(),x.end());
            str1.push_back(x);
        }
        int n=words.size();
        for( int i=0 ; i<n ; i++ ){
            if( i==0 || str1[i] != str1[i-1] ){
                str2.push_back(words[i]);
            }
        }
        return str2;
    }
};