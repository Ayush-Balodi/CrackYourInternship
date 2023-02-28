class Solution {
public:
    string sortSentence(string s) {
        vector<pair<int,string>> v;
        
        istringstream ss(s);
        string word;
        while( ss>>word ){
            string ch="";
            for( auto x:word ){
                if( x>='0' && x<='9' ){
                    v.push_back({x,ch});
                    break;
                } 
                ch += x;
            }
        }
        
        sort(v.begin() , v.end());
        string answer="";
        
        int n = v.size();
        for( int i=0; i<n ; i++ ){
            answer += v[i].second;
            if( i!=n-1 ){
                answer += ' ';
            }
        }
        return answer;
    }
};