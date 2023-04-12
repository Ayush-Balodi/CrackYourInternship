class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        int one=1, two=2, next=0;
        for(int i=3 ; i<=n ; i++){
            next = one+two;
            one = two;
            two = next;
        }
        return next;
    }
};