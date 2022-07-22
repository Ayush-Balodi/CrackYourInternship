/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/implement-strstr

    TC = O(n) // as indexOf function will traverse the string to find index
    SC = O(1) // as no extra space is taken
*/

class Solution {
    public int strStr(String haystack, String needle) {
        
        if( haystack == null ){
            return -1;
        }
        if( needle == null ){
            return 0;
        }
        return haystack.indexOf(needle);
    }
}