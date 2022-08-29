/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/reverse-linked-list-ii/

    TC = O(n) for 1st and O(sqrt(num)) for 2nd
    SC = O(1)
*/

Approach1:-)
There are the divisors for the number which are same as one and itself and if we found any other divisor than this we return false if they are more than three.

C++ Code:->

class Solution {
public:
    bool isThree(int num) {
        
        int count=1;
        for( int i=2 ; i<=num ; i++ ){
            if( num%i == 0 ){
                count++;
            }
        }
        
        if( count == 3 ){
            return true;
        }
        return false;
    }
};
Approach2:-)
Divisors for numbers>=2 have atleast two divisors. We just check now whether the number provided is a perfect square or not. And if we found it is a perfect square then we just check whether the number has more divisor if it has then return false.

C++ Code:->

class Solution {
public:
    bool isThree(int num) {
        
        if( num == 1 || num == 2 ){
            return false;
        }
        
        if( floor(sqrt(num)) != ceil(sqrt(num)) ){
            return false;
        }
        
        for( int i=2; i*i<num ; i++ ){
            if( i!=sqrt(num) && (num%i == 0) ){
                return false;
            }
        }
        return true;
    }
};