/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/goal-parser-interpretation/

    TC = O(n)
    Auxiliary space = O(n)
*/

class Solution {
public:
    string interpret(string command) {
        
        int n=command.length();
        string result = "";
        
        for( int i=0 ; i<n ; i++ ){
            if( command[i] == 'G' ){
                result += 'G';
            }   
            else if( command[i] == '(' ){
                
                if( command[i+1] == ')' ){
                    result += 'o';
                    i++;
                }
                else if( command[i+1] == 'a' && command[i+2] == 'l' ){
                    result += "al";
                    i=i+2;
                }
            }
        }
        return result;
    }
};