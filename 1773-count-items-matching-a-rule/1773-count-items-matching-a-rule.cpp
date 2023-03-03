class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        for( auto x:items ){
            for( int i=0 ; i<3 ; i++){
                if( ruleKey == "type" and ruleValue == x[0] ){
                    count++;
                    break;
                }
                if( ruleKey == "color" and ruleValue == x[1] ){
                    count++;
                    break;
                }
                if( ruleKey == "name" and ruleValue == x[2] ){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};