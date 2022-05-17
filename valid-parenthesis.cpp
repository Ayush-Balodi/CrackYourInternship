/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/valid-parentheses/submissions/
    TC = O(n)  // as traversal is happening once
    Sc = O(n) // stack is taken
*/
class Solution {
public:
    
    bool compare( char c1 , char c2 ){
        
        if( c1 == '(' && c2 == ')' ){
            return true;
        } 
        else if( c1 == '{' && c2 == '}' ){
            return true;
        }
        else if( c1 == '[' && c2 == ']' ){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isValid(string str) {
        
        stack<char> s;
        int n = str.length();
        
        for( int i=0 ; i<n ; i++ ){
            if( str[i] == '(' || str[i] == '{' || str[i] == '[' ){
                s.push(str[i]);
            }
            else if( str[i] == ')' || str[i] == '}' || str[i] == ']' ){
                if( !s.empty() && compare(s.top() , str[i]) ){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if( s.empty() == 1 ){
            return true;
        } 
        else{
            return false;
        }
    }
};