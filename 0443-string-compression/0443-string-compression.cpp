class Solution {
public:
    int compress(vector<char>& chars) {
        
        vector<char> ch;
        int n=chars.size(), count=1;
        ch.push_back( chars[0] );
        for( int i=1 ; i<n ; i++ ){
            if( chars[i-1] == chars[i] ){
                count+=1;
            }
            else{
                if( count!=1 ){
                    if( count > 9 ){
                        string temp = to_string(count);
                        for( auto x:temp ){
                            ch.push_back(x);
                        }
                    }
                    else{
                        ch.push_back(count+'0');
                    }
                }
                ch.push_back(chars[i]);
                count=1;
            }
        }
        if( count != 1 ){
            if( count > 9 ){
                string temp = to_string(count);
                for( auto x:temp ){
                    ch.push_back(x);
                }
            }
            else{
                ch.push_back(count+'0');
            }
        }
        
        chars.resize(ch.size());
        for( int i=0 ; i<ch.size(); i++ ){
            chars[i] = ch[i];
        }
        return ch.size();
    }
};