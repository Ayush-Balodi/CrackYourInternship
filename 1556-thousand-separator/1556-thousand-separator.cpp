class Solution {
public:
    string thousandSeparator(int n) {
        if( n==0 ){
            return "0";
        }
        string ans;
        int c=0;
        while( n>0 ){
            int rem = n%10;
            ans+=(rem+'0');
            c++;
            n = n/10;
            if(c==3 && n!=0){
                ans+='.';
                c=0;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};