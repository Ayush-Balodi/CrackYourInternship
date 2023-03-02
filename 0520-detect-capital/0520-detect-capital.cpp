class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n=word.length(), d=0, lo=0, up=0;
        
        // if( word[0]>='A' && word[0]<='B' ){ d++; }
        // else{ lo++; }
        
        for( int i=0 ; i<n ; i++ ){
            if( word[i]>='A' && word[i]<='Z' ){ up++; }
            else{ lo++; }
        }
        
        if( lo==n || up==n ){
            return true;
        }
        if( up==1 ){ if(word[0] >='A' and word[0]<='Z'){ return true; }}
        
        return false;
    }
};