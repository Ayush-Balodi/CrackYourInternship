class Solution {
public:    
    int maxVowels(string str, int k) {
        
        int n=str.size(), count=0;
        for( int i=0 ; i<n&&i<k ; i++ ){
            
            if( str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u' ){
                cout << str[i] << " " ;
                count+=1;
            }
        }
        
        int maxval = count;

        
        for( int i=1 ; i<n-k+1 ; i++ ){
            if( str[i-1]=='a' or str[i-1]=='e' or str[i-1]=='i' or str[i-1]=='o' or str[i-1]=='u' ){
                count-=1;
            } 
            if( str[i+k-1]=='a' or str[i+k-1]=='e' or str[i+k-1]=='i' or str[i+k-1]=='o' or str[i+k-1]=='u'){
                count+=1;
            }
            maxval = max( maxval, count );
        }
        return maxval;
    }
};