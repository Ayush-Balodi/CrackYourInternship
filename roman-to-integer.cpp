/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/roman-to-integer/

    TC = O(n)
    SC = O(1)
*/

class Solution {
public:
    
    int roman( char ch ){
        if( ch == 'I' )return 1;
        else if( ch == 'V' )return 5;
        else if( ch == 'X' )return 10;
        else if( ch == 'L' )return 50;
        else if( ch == 'C' )return 100;
        else if( ch == 'D' )return 500;
        else return 1000;
    }
    
    int romanToInt(string str) {
        
        int i=0 , num , sum=0;
        
        while( i<str.length() ){
            if( i == (str.length()-1) || roman(str[i]) >= roman(str[i+1]) )             {
                num = roman(str[i]);
                i++;
            }
            else{
                num = roman(str[i+1])-roman(str[i]);
                i = i+2;
            }
            sum = sum + num;
        }
        return sum;
    }
};