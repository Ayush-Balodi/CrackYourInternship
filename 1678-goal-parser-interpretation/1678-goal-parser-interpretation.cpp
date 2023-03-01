class Solution {
public:
    string interpret(string command) {
        
        int n=command.length();
        string result="";
        
        for( int i=0 ; i<n ; i++ ){
            if( command[i] == 'G' ){
                result += 'G';
            }
            if( command[i] == '(' ){
                if( command[i+1] == ')' ){
                    result += 'o';
                    i++;
                }
                else if( command[i+1]=='a' && command[i+2]=='l' ){
                    result += "al";
                    i += 2;
                }
            }
        }
        return result;
    }
};