/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/contest/weekly-contest-311

    TC = O(1)
    SC = O(1)
    Auxiliary space = O(1)
*/

class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        if( n%2 == 0 ){
            return n;
        }
        return n*2;
    }
};