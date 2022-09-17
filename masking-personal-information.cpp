/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/masking-personal-information

    TC = O(n) in both the ccases of phone number and email
    Auxiliary space = O(n) + O)(n) in case of phone number and O(n) in case of email.
*/

class Solution {
public:
    string maskPII(string str) {
        
        int c=0 , n=str.size();
        string result;
        
        for( auto vals:str ){
            if( isalpha(vals) ){
                c++;
            }
        }
        
        if( c==0 ){
            
            string extra;
            for( int i=0 ; i<n ; i++ ){
                if( isdigit( str[i] ) ){
                    extra.push_back(str[i]);
                }
            }
            
            int t=extra.size();
            if( t == 10 ){
                result += "***-***-";
            }
            else if( t == 11 ){
                result += "+*-***-***-";
            }
            else if( t == 12 ){
                result += "+**-***-***-";
            }
            else{
                result += "+***-***-***-";
            }
            
            result.push_back(extra[t-4]);
            result.push_back(extra[t-3]);
            result.push_back(extra[t-2]);
            result.push_back(extra[t-1]);
        }
        else{        
            for( int i=0 ; i<n ; i++ ){
                if( str[i] == '@' ){
                    c=i;
                }
            }
            result.push_back(tolower(str[0]));
        
            int x=5;
            while( x-- ){
                result.push_back('*');
            }
            result.push_back(tolower(str[c-1]));
                
            for( int i=c ; i<n ; i++ ){
                result.push_back(tolower(str[i]));
            }
        }
        return result;
    }
};