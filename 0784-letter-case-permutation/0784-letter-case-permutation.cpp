class Solution {
private:
    void validate( int i , string temp , string s , vector<string> &v ){
        if( i==s.size() ){
            v.push_back(temp);
            return;
        }
        if( !isalpha(s[i]) ){
            temp += s[i];
            validate( i+1, temp, s, v );
        }
        else{
            temp += tolower(s[i]);
            validate( i+1, temp, s, v );
            temp.pop_back();
            temp += toupper(s[i]);
            validate( i+1, temp, s, v );
        }
        return;
    }
public:
    vector<string> letterCasePermutation(string s) {
        string temp="";
        vector<string> v;
        validate( 0, temp, s, v );
        return v;
    }
};