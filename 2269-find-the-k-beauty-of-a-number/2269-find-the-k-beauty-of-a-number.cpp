class Solution {
public:
    int divisorSubstrings(int num, int k) {
        
        int temp = num;
        string str="", nums;
        while( temp > 0 ){
            int rem = temp%10;
            str += to_string(rem);
            temp /= 10; 
        }
        reverse(str.begin() , str.end());
        cout << str << " "; 
        int n=str.length();
        for( int i=0 ; i<n-k+1 ; i++ ){
            nums = str.substr(i,k);
            cout << nums << " ";
            if( stoi(nums) == 0 ){ continue; }
            if( num % stoi(nums) == 0 ){
                temp++;
            }
            nums.clear();
        }
        return temp;
    }
};