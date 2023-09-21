class Solution {
public:
    bool checkIp4( string str ){
        int x=str.size();
        if( str[x-1] == '.'){ return false; }
        string word;
        stringstream ss(str);
        int count=0;
        
        while( getline(ss, word, '.') ){
            if(word==""){ return false; }
            cout << word << "-";
            int n=word.size();
            if(n>3){ return false; }
            for( int i=0 ; i<n ; i++ ){
                if(isdigit(word[i])){
                    if(i==0 and word[i]=='0' and i+1<n and  word[i+1]!='0'){
                        return false;
                    }
                    else if(i==0 and word[i]=='0' and i+1<n and  word[i+1]=='0'){
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            int t=stoi(word);
            if(t<0 or t>255){
                return false;
            }
            count++;
        }
        cout << count;
        return count==4 ? true : false;
    }
    
    bool checkIp6( string str ){
        
        int x=str.size();
        if( str[x-1] == ':'){ return false; }
        string word;
        stringstream ss(str);
        int count=0;
        
        while( getline(ss, word, ':') ){
            if(word==""){ return false; }
            int n=word.size();
            if(n>4){ return false; }
            for( int i=0 ; i<n ; i++ ){
                if(isalnum(word[i])){
                    if( !isdigit(word[i]) ){
                        if( !((word[i]>='a' and word[i]<='f') or (word[i]>='A' and word[i]<='F')) ){
                            return false;
                        }
                    }
                }
                else{
                    return false;
                }
            }
            count++;
        }
        
        return count==8 ? true : false;
    }
    
    string validIPAddress(string queryIP) {
        
        int n=queryIP.size();
        for( int i=0 ; i<n ; i++ ){
            if( queryIP[i] == '.' ){
                if(checkIp4(queryIP)){
                    return "IPv4";
                }
                else{
                    break;
                }
            }
            if( queryIP[i] == ':' ){
                if(checkIp6(queryIP)){
                    return "IPv6";
                }
                else{break;}
            }
        }
        return "Neither";
    }
};