class Solution {
public:
    bool isPalindrome(string s) {
        
        string temp="";
        for( auto x:s ){
            if( isalnum(x) ){
                temp+=tolower(x);    
            }
        }
        int n=temp.size();
        int l=0, h=n-1;
        while( l<=h ){
            if( temp[l] != temp[h] ){
                return false;
            } 
            l++;h--;
        }
        return true;
    }
};