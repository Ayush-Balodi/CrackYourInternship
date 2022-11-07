/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/maximum-69-number/

    TC = O(n)
    Auxiliary space = O(1) // as no extra space is taken
*/
class Solution {
public:
    int maximum69Number (int num) {
        
        string str=to_string(num);
        int n = str.length(), maxfound=-1;
        
        maxfound = max(maxfound,stoi(str));
        
        for( int i=0 ; i<n ; i++ ){
            
            if(str[i] == '9'){
                str[i] = '6';
                maxfound = max(maxfound,stoi(str));
                str[i] = '9';
            }
            if(str[i] == '6'){
                str[i] = '9';
                maxfound = max(maxfound,stoi(str));
                str[i] = '6';
            }
        }
        return maxfound;
    }
};