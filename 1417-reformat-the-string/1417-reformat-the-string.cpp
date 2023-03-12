class Solution {
public:
    string reformat(string s) {
        int n=s.length();
        string str1="", str2="";
        for( int i=0 ; i<n ; i++ ){
            if( isalpha(s[i]) ){
                str1+=s[i];
            }
            if( isdigit(s[i]) ){
                str2+=s[i];
            }
        }
        
        int m=str2.length(); 
        n=str1.length();
        int j=0, k=0;
        
        if( abs(n-m) >1 ){
            return "";
        }
        //cpoying string with greater length
        if( str1.size()>str2.size() ){
            str1.swap(str2);
        }
        string ans="";
        for( int i=0 ; i<s.size() ; i++ ){
            if( i%2==0 ){
                ans+= str2[j++];
            }
            else{
                ans+= str1[k++];
            }
        }
        return ans;
    }
};