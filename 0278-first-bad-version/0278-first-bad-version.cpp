// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans;
        for( int i=n ; i>=0 ; i-- ){
            if(isBadVersion(i) == false){
                ans = i+1;
                break;
            }
        }
        return ans;
    }
};