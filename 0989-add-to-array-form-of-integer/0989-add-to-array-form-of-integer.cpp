class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int n=num.size();
        vector<int> answer;
        int i=n, curr=k;
        while( --i>=0 || curr>0 ){
            if( i>=0 ){
                curr += num[i];
            }
            answer.push_back(curr%10);
            curr /= 10;
        }
        reverse( answer.begin() , answer.end() );
        return answer;
    }
};