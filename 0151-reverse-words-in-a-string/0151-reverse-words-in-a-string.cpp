class Solution {
public:
    string reverseWords(string s) {
        
        string word, ans="";
        reverse(s.begin(),s.end());
        istringstream ss(s);
        while( ss>>word ){
            reverse(word.begin() , word.end());
            ans+=word+' ';
        }
        ans.pop_back();
        return ans;
    }
};