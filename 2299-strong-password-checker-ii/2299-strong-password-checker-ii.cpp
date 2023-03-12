class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int n=password.length();
        if( n<8 ){
            return false;
        }
        string cas="!@#$%^&*()-+";
        int c1=0, c2=0,c3=0,c4=0;
        for( int i=0 ; i<n ; i++ ){
            if( password[i] >= 'A' && password[i] <='Z' ){
                c1++;
            }
            if( password[i] >= 'a' && password[i] <='z' ){
                c2++;
            }
            if( password[i] >= '0' && password[i] <='9' ){
                c3++;
            }
            if( cas.find(password[i]) != string::npos ){
                c4++;
            }
            if( i>0 && password[i] == password[i-1] ){
                return false;
            }
        }
        
        if(c1<1 || c2<1 || c3<1 || c4<1 ){
            return false;
        }
        return true;
    }
};