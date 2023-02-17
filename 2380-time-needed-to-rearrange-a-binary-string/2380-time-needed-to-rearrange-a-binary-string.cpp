class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        
        int n=s.length(), count=0;
        while( 1 ){
            bool flag = false;
            for( int i=0 ; i<n-1 ; i++ ){
                if(s[i]=='0' && s[i+1]=='1'){
                    s[i] = '1';
                    s[i+1] = '0';
                    flag = true;
                    i++;
                }
                
            }
            
            if( flag == false ){
                break;
            }
            count++;
        }
        return count;
    }
};