/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/reverse-words-in-a-string/

    TC = O(n)
    Auxiliary space = O(n)
*/

class Solution {
public:
    string reverseWords(string str) {
        
        string result = "";
        reverse(str.begin(),str.end());
        
        int i = 0, j = 0;
        int n = str.length();
        
        while( i<n && j<n ){
            while( str[i]==' ' && i<n ){
                i++;
            }
            j = i;
            
            while( str[j]!=' ' && j<n ){
                j++;
            } 
            
            string word = str.substr( i , j-i );
            i = j+1;
            reverse( word.begin() , word.end() );
            
            result += word;
            result += " ";
        }
        
        n = result.length()-1;
        while(result[n] == ' '){
            result.pop_back();
            n--;
        }
        
        return result;
    }
};