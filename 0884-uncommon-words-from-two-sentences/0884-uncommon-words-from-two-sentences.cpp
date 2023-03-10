class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        
        vector<string> ans;
        unordered_map<string,int> m;
        istringstream ss(A+" "+B);
        while( ss >> A ){ m[A]++; }
        for( auto [s,x]:m ){
            if(x==1){ans.push_back(s);}
        }
        return ans;
    }
};

/*
Why not try to append two strings and they iterator through stringstream and count words which come only once.
*/