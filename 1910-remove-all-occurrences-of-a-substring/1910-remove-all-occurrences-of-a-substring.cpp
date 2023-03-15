class Solution {
public:
    string removeOccurrences(string str, string part) {
        
        while(str.find(part)!=string::npos){
            int x = str.find(part);
            str.erase(x,part.length());
            cout << str << endl;   
        }
        return str;
    }
};