class Solution {
private:
    bool vowel( char ch ){
        if( ch =='a' || ch == 'e' || ch =='i' || ch == 'o' || ch =='u' ){
            return true;
        }
        if( ch =='A' || ch == 'E' || ch =='I' || ch == 'O' || ch =='U' ){
            return true;
        }
        return false;
    }
public:
    string reverseVowels(string s) {
        int n=s.length();
        stack<char> st;
        
        for( int i=0 ; i<n ; i++ ){
            if( isalpha(s[i]) ){
                if(vowel(s[i])){
                    st.push(s[i]);
                }
            }
        }
        
        for( int i=0 ; i<n ; i++ ){
            if( isalpha(s[i]) ){
                if(vowel(s[i])){
                    s[i] = st.top();
                    st.pop();
                }
            }
        }
        return s;
        
    }
};