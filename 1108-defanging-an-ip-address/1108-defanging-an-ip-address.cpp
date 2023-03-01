class Solution {
public:
    string defangIPaddr(string address) {
        
        string ans="";
        int n=address.length();
        for( int i=0 ; i<n ; i++ ){
            if( address[i] == '.' ){
                ans+='[';
                ans+=address[i];
                ans+=']';
                continue;
            }
            ans+=address[i];
        }
        return ans;
    }
};