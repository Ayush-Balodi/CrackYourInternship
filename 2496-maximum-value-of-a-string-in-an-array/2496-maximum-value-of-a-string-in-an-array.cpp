class Solution {
public:
    int maximumValue(vector<string>& strs) {
        
        vector<int> v;
        for( auto x:strs ){
            int c1=0,c2=0,c3=0;
            for( auto num:x ){
                
                if(isalpha(num)){
                    c1++;
                }
                if( isdigit(num) ){
                    c2++;
                }
                if( iswalnum(num) ){
                    c3++;
                }
            }
            int n=x.size();
            if( c1==n && c2==0 ){
                v.push_back(n);
                continue;
            }
            if( c2==n && c1==0 ){
                v.push_back(stoi(x));
                continue;
            }
            if( c3==n ){
                v.push_back(n);
            }
        }
        
        return *max_element(begin(v), end(v));
    }
};