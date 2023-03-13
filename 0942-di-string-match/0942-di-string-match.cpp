class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length(), left=0, right=n;
        vector<int> answer(n+1, 0);
        for( int i=0; i<n ; i++ ){
            answer[i] = s[i] == 'I' ? left++ : right--;  
        }
        answer[n] = left;
        return answer;
    }
};