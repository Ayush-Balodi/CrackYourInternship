class Solution {
public:
    string capitalizeTitle(string title) {
        
        istringstream ss(title);
        string word, result="";
        while( ss>>word ){
            
            int n=word.length();
            if(n<=2){
                for( auto &x:word ){ x = tolower(x); }
            }
            else{
                if( word[0]>='a' and word[0]<='z' ){ word[0] = word[0]-32; }
                for( int i=1 ; i<n ; i++ ){
                    if( word[i]>='A' and word[i]<='Z' ){ word[i] = word[i]+32; }
                }
            }
            result+= word;
            result+= " ";
        }
        result.pop_back();
        return result;
    }
};