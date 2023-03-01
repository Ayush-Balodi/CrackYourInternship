class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map<char,int> freq;
        unordered_map<char,char> ans;
        char count='a';
        int n=key.length();
        for( int i=0 ; i<n ; i++ ){
            if(key[i]==' '){
                continue;
            }
            
            freq[key[i]]++;
            
            if( freq[key[i]] > 1 ){
                continue;
            }
            ans[key[i]] = count;
            count+=1;
        }
        n=message.length();
        for( int i=0 ; i<n ; i++ ){
            if( message[i] == ' ' ){
                message[i] = ' ';
                continue;
            }
            message[i] = ans[message[i]];
        }
        return message;
    }
};