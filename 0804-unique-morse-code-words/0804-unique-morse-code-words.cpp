class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> s;
        for( auto x:words ){
            int n=x.length();
            string temp="";
            for( int i=0 ; i<n ; i++ ){
                temp+=morse[x[i]-'a'];
            }
            s.insert(temp);
            temp.clear();
        }
        return s.size();
    }
};