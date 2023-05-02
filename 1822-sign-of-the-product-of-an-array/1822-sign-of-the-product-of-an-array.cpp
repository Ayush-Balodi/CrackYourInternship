class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product=1;
        for(auto x:nums){
            if( x < 0 ){
                product*= -1;
            }
            else if( x > 0 ){
                product*= 1;
            }
            else{
                product *= 0;
                return 0;
            }
        }
        return (product>0) ? 1 : -1;
    }
};