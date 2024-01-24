class Solution {
public:
    
    vector<string> mp{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    vector<string> helper(vector<string> ans, char digit){
       
        vector<string> subans;
        int num=digit-'0';
        string temp = mp[num];
        for( auto i:ans ){
            for( auto j:temp ){
                subans.push_back(i+j);
            }
        }
        return subans;
    }
    
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        ans.push_back("");
        
        for( auto i:digits ){
            ans = helper(ans,i);
        }
        if( ans.size() == 1 ){ return {}; }
        return ans;
    }
};