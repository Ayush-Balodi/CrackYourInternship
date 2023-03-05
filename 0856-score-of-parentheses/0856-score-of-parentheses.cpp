class Solution {
public:
    int index=0;
    int scoreOfParentheses(string s) {
        int score=0, n=s.size();
        while( index < n ){
            char first = s[index]; index++;
            if( first == '(' ){
                if( s[index] == ')' ){
                    score= score+1;
                    index++;
                }
                else{
                    score = score + 2*(scoreOfParentheses( s ));
                }
            }
            else{
                return score;
            }
        }
        return score;
    }
};