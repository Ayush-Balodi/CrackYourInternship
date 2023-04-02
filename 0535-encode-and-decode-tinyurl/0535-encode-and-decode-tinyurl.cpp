class Solution {
public:
    
    string code="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%0123456789";
    //unordered_map<string,string> mp1;
    unordered_map<string,string> mp2;
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        
        string encoded=convert();
        
        while( mp2.find(encoded) != mp2.end() ){
            encoded = convert();
        }
        
        mp2[encoded] = longUrl;
        return encoded;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        
        if(mp2.find(shortUrl) != mp2.end())
            return mp2[shortUrl];
        return "";
    }
    
    string convert(){
        string str="";
        for( int i=0 ; i<6 ; i++ ){
            str+=code[rand()%67];
        }
        return str;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));