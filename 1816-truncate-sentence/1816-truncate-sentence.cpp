class Solution {
public:
    string truncateSentence(string s, int k) {
        
        istringstream ss(s);
        string temp="",word;
        while( ss >> word && k-- ){
            temp += word+' ';
        }
        temp.pop_back();
        return temp;
    }
};