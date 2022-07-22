/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/implement-strstr/

    TC = O(l1.l2)
    SC = O(1) // as no extra space is taken
*/
class Solution {
public:
    int strStr(string str1, string str2) {
        
        int l1 = str1.length() , l2 = str2.length();
        string str;
        
        if( str2 == "\0" ){
            return 0;
        }
        
        for( int i=0 ; i<(l1-l2+1) ; i++ ){
            for( int j=0 ; j<l2 ; j++ ){
                if( str1[i+j] != str2[j] ){
                    break;
                }
                if( j == l2-1 ){
                    return i;
                }
            }
        }
        return -1;
    }
};

/*
    TC = O(log(n))
    SC = O(1)
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if( haystack == "" ){
            return -1;
        }
        if( needle == "" ){
            return 0;
        }
        return haystack.find(needle);
    }
};