/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/integer-to-roman/

    TC = O(digits(num))*O(1);
    SC = O(26) = O(1);
*/

class Solution {
public:
    string intToRoman(int num) {
        
        string result = "";
        int arr[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string c[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        while( num > 0 ){
            
            for( int i=0 ; i<13 ; i++ ){
                
                if( num >= arr[i] ){
                    num -= arr[i];
                    result += c[i];
                    break;
                }
            }
        }
        return result;
    }


};

// I             1
// IV            4
// V             5
// IX            9
// X             10
// XL            40
// L             50
// XC            90
// C             100
// CD            400
// D             500
// CM            900
// M             1000

/*
    TC = O(n);
    SC = O(1);
*/

class Solution {
public:
    string intToRoman(int num) {
        
        string result = "";
        
        while( num >= 1000 ){
            num -= 1000;
            result += "M";
        }
        if( num >= 900 ){
            num -= 900;
            result += "CM";
        }
        
        while( num >= 500 ){
            num -= 500;
            result += "D";
        }
        if( num >= 400 ){
            num -= 400;
            result += "CD";
        }
        
        while( num >= 100 ){
            num -= 100;
            result += "C";
        }
        if( num >= 90 ){
            num -= 90;
            result += "XC";
        }
        
        while( num >= 50 ){
            num -= 50;
            result += "L";
        }
        if( num >= 40 ){
            num -= 40;
            result += "XL";
        }
        
        while( num >= 10 ){
            num -= 10;
            result += "X";
        }
        if( num >= 9 ){
            num -= 9;
            result += "IX";
        }
        
        while( num >= 5 ){
            num -= 5;
            result += "V";
        }
        if( num >= 4 ){
            num -= 4;
            result += "IV";
        }
        
        while( num >= 1 ){
            num -= 1;
            result += "I";
        }
        
        return result;
    }
};