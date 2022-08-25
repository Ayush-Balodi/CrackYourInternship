/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/multiply-strings/

    TC = O(l1.l2) + O(l1+l2)
    Auxiliary space = O(l1+l2)
*/

class Solution {
public:
    string multiply(string nums1, string nums2) {
        
        if( nums1 == "0" || nums2 == "0" ){
            return "0";
        }
        int l1 = nums1.length() ;
        int l2 = nums2.length();
        vector<int> arr(l1+l2,0);
        
        int i=l2-1;
        int shifter = 0;
        
        while( i>=0 ){
            
            int ival = nums2[i]-'0';
            i--;
            
            int j = l1-1;
            int k = arr.size()-1-shifter;
            int carry = 0;
            
            while( j>=0 || carry != 0 ){
                int jval = (j>=0) ? nums1[j]-'0' : 0;
                j--;
                
                int product = ival * jval + carry + arr[k];
                arr[k] = product%10;
                carry = product/10;
                k--;
            }
            shifter++;          
        }
        
        string result ="";
        bool flag = false;
        
        for( int i=0 ; i<arr.size() ; i++ ){
            
            //cout << arr[i] << " ";
            if( arr[i] == 0 && flag == false ){
                continue;
            }
            else{
                flag = true;
                result += arr[i]+'0';
                //cout << result;
            }
        }
        return result;
    }
};