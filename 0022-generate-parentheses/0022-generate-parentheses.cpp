class Solution {
public:
    void validate( int open, int close, string op , vector<string> &v ){
        if( open == 0 && close == 0 ){
            v.push_back(op);
            return;
        }
        if( open != 0 ){
            string op1 = op;
            op1.push_back('(');
            validate( open-1, close, op1, v);
        }
        if( close>open ){
            string op2 = op;
            op2.push_back(')');
            validate( open, close-1, op2, v);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        
        int open,close;
        open=close=n;
        vector<string> v;
        validate( open,close,"",v );
        return v;
    }
};