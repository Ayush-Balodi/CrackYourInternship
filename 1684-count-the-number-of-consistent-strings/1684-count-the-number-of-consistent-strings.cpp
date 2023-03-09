class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int count=0;
        for( auto x:words ){
            bool flag=false;
             for( auto y:x ){
                 if( allowed.find(y) == string::npos ){
                     flag = true;
                     break;
                 }
             }
            if( flag ){
                count++;
            } 
        }
        return words.size()-count;
    }
};