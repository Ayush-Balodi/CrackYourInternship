class Solution {
public:
    string sortSentence(string s) {
        
        priority_queue<pair<int,string> , vector<pair<int,string>>, greater<pair<int,string>> > pq;
        istringstream ss(s);
        string word;
        while(ss>>word){
            int x=word.length(),m;
            m=word[x-1];
            word.pop_back();
            pq.push({m,word});
        }
        
        string ans="";
        while(!pq.empty()){
            ans+=pq.top().second;
            ans+=" ";
            pq.pop();
        }
        ans.pop_back();
        return ans;
    }
};