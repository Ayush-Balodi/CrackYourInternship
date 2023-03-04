class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        
        unordered_map<string,int> mp;
        for( auto x:dictionary ){ mp[x]++; }
        
        istringstream ss(sentence);
        string word, ans="";
        while( ss >> word ){
            bool flag=false;
            int n=word.length();
            string temp="";
            for( int i=0; i<n ; i++ ){
                temp += word[i];
                if( mp.count(temp) ){
                    flag=true;
                    ans+=temp+' ';
                    break;
                }
            }
            if(flag ==false ){
                ans+=temp+' ';
            }
        }
        ans.pop_back();
        return ans;
    }
};