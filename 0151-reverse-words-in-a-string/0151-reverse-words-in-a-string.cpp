class Solution {
public:
    string reverseWords(string s) {
        
        string answer="";
        int i=0, j=0, n=s.length();
        
        reverse(s.begin() , s.end());
        
        while( i<n && j<n ){
            while( s[i]==' ' && i<n ){
                i++;
            }
            j=i;
            while( s[j]!=' ' && j<n ){
                j++;
            }
            string word=s.substr(i,j-i);
            i=j+1;
            reverse( word.begin(), word.end() );
            answer+=word;
            answer+=" ";
        }
        
        n=answer.length()-1;
        while( answer[n] == ' ' ){
            answer.pop_back();
            --n;
        }
        return answer;
    }
};