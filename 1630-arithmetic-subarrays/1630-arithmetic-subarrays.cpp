class Solution {
private:
    bool helper( vector<int> nums, int l, int r ){
        if(r-l+1<2){
            return false;
        }
        vector<int> temp(nums.begin()+l, nums.begin()+r+1);
        int n=temp.size();
        sort(temp.begin(), temp.end());
        int diff = temp[1]-temp[0];
        for( int i=0 ; i<n-1 ; i++ ){
            if( temp[i+1] - temp[i] != diff )
                return false;
        }
        return true;
    }
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=l.size();
        vector<bool> v;
        for( int i=0; i<n; i++ ){
            v.push_back(helper( nums, l[i], r[i] ));
        }
        return v;
    }
};