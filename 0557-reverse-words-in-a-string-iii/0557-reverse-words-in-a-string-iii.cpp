class Solution {
public:
    string reverseWords(string s) {
        
        istringstream ss(s);
        string word, result="";
        
        while( ss >> word ){
            reverse(word.begin() , word.end());
            result += word;
            result += " ";
        }
        result.pop_back();
        return result;
    }
};