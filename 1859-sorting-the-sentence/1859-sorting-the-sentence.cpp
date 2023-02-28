class Solution {
public:
    string sortSentence(string s) {
        vector<pair<int,string>> v;
        
        istringstream ss(s);
        string word;
        while( ss>>word ){
            int n=word.size();
            int i=word[n-1];
            word.pop_back();
            v.push_back({i,word});
        }
        
        sort(v.begin() , v.end());
        string answer="";
        
        for( auto x:v ){
            answer += x.second+" ";
        }
        answer.pop_back();
        return answer;
    }
};