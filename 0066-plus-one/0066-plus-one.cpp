class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n=digits.size(), curr=1, i=n;
        while( --i>=0 || curr>0 ){
            if(i>=0){
                curr += digits[i];
            }
            ans.push_back(curr%10);
            curr /= 10;
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};