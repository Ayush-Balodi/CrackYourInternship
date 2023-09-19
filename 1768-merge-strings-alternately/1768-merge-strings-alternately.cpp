class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int m=word1.size(), n=word2.size();
        int i=0, j=0;
        string result="";
        
        while( i<m or j<n ){
            
            if( i<m ){ result.push_back(word1[i++]); }
            if( j<n ){ result.push_back(word2[j++]); }
        }
        return result;
    }
};