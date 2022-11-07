/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/generate-parentheses/

    TC = O(n)
    SC = O(n) // as no extra space is taken
*/
class Solution {
private:
    void matching( int open, int close, string op , vector<string> &v ){
        
        if( open == 0 && close == 0 ){
            v.push_back(op);
            return;
        }
        if( open != 0 ){
            string op1 = op;
            op1.push_back('(');
            matching( open-1 , close , op1 , v );
        }
        if( close > open ){
            string op2 = op;
            op2.push_back(')');
            matching( open , close-1 , op2 , v );
        }
        return;
    }
public:
    vector<string> generateParenthesis(int n) {
        
        int open , close;
        vector<string> v;
        open = close = n;
        string op="";
        
        matching( open , close , op , v );
        
        return v;
    }
};