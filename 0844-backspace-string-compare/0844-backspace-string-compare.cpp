class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string str1="", str2="";
        for( auto x:s ){
            if(x=='#'&& str1!="")
                str1.pop_back();
            else if( x!='#')
                str1+=x;
        }
        for( auto x:t ){
            if(x=='#' && str2!="")
                str2.pop_back();
            else if( x!='#' )
                str2+=x;
        }
        if( str1 == str2 )
            return true;
        return false;
    }
};