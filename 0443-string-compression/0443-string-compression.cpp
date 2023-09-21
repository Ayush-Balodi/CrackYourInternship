class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n=chars.size(), count=1;
        vector<char> ch;
        for( int i=1 ; i<n ; i++ ){
            
            if(chars[i] != chars[i-1]){
                if( count==1 ){ ch.push_back(chars[i-1]); continue; }
                ch.push_back(chars[i-1]);
                string temp=to_string(count);
                for( auto x:temp ){
                    ch.push_back(x);
                }
                count=1;
            }
            else{
                count++;
            }
        }
        if(count!=1){
            ch.push_back(chars[n-1]);
            string temp=to_string(count);
            for( auto x:temp ){
                ch.push_back(x);
            }
        }
        else{
            ch.push_back(chars[n-1]);
        }
        n=ch.size();
        chars.resize(n);
        for( int i=0 ; i<n ; i++ ){
            chars[i] = ch[i];
        }
        return n;
    }
};