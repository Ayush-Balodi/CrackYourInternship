class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        
        string real1="", real2="", img1, img2;
        int i=0;
        while( num1[i] != '+' ){
            real1+=num1[i];
            i++;
        } 
        img1 = num1.substr(i+1,num1.length()-i);
        
        i=0;
        while( num2[i] != '+' ){
            real2+=num2[i];
            i++;
        } 
        img2 = num2.substr(i+1,num2.length()-i);
        
        int r1=stoi(real1), r2=stoi(real2);
        int i1=stoi(img1), i2=stoi(img2);
        
        int ans1 = (r1*r2) - (i1*i2);
        int ans2 = (r1*i2) + (i1*r2);
        
        return to_string(ans1) + '+' + to_string(ans2) + 'i';
    }
};