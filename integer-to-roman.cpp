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