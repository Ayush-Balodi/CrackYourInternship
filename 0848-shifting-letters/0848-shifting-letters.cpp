class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        
        int sum=0, n=s.size();
        for( int i=n-1 ; i>=0 ; i-- ){
            sum += shifts[i]%26;
            s[i] = ((s[i]-'a'+sum)%26)+'a';
        }
        return s;
    }
};