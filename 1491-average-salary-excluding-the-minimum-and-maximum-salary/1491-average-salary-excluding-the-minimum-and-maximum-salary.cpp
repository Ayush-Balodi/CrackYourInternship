class Solution {
public:
    double average(vector<int>& salary) {
        int maxval = INT_MIN, minval = INT_MAX;
        int sum=0;
        for(auto x:salary){
            if( maxval < x ){
                maxval = x;
            }
            if( minval > x ){
                minval =x;
            }
            sum+=x;
        }
        int n=salary.size();
        return (double)(sum-minval-maxval)/(n-2);
    }
};