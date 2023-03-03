class Solution {
public:
    bool areNumbersAscending(string s) {
        int n=s.length();
        vector<int> nums;
        for( int i=0 ; i<n ; i++ ){
            string temp="";
            if(!isalpha(s[i]) and s[i] != ' '){
                temp+=s[i];
                if(i+1<n and s[i+1]!=' ' and !isalpha(s[i+1])){
                    temp+=s[i+1];
                    i++;
                }
                nums.push_back(stoi(temp));
            }
            temp.clear();
        }
        // if(s[n-2] == ' ' and !isalpha(s[n-1])){
        //     nums.push_back(s[n-1]-'0');
        // }
        n=nums.size();
        for( int i=0 ; i<n-1 ; i++ ){
            cout << nums[i] << " " << nums[i+1];
            if(nums[i] >= nums[i+1]){
                return false;
            }
        }
        return true;
    }
};