/* 
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/remove-element
    
    TC = O(n)
    SC = O(1)
*/

class Solution {
public:
    bool isPowerOfTwo(int num) {
        
        for( int i=0 ; i<=30 ; i++ ){
            if( num == pow(2,i) ){
                return true;
            }
        }
        return false;
    }
};

/*
    TC = O(1)
    SC = O(1)
*/

class Solution {
public:
    bool isPowerOfTwo(int num) {
        
        if( num <= 0 ){
            return false;
        }
        return (num&(num-1))==0;
    }
};

/*
    TC = O(log n)
    SC = O(log n)
*/

class Solution {
public:
    bool isPowerOfTwo(int num) {
        
        if( num <= 0 ){
            return false;
        }
        return (num&(num-1))==0;
    }
};