class Solution {
private:
    bool palindrome(string s, int i, int j){
        while( i<j ){
            if( s[i] != s[j] ){
                return false;
            }
            i++;
            j--;
        }
        return true;
    } 
public:
    bool validPalindrome(string s) {
        int low=0, high=s.length()-1;
        while( low < high ){
            if(s[low]!=s[high]){
                return palindrome(s, low+1, high) || palindrome(s, low, high-1);
            }
            low++;
            high--;
        }
        return true;
    }
};