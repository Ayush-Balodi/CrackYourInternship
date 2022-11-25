class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n=nums.size();
        stack<int> st;
        vector<int> ans;
        for( int i=n-1 ; i>=0 ; i-- ){
            st.push(nums[i]);
        }
        
        for( int i=n-1 ; i>=0 ; i-- ){
            
            if( nums[i] < st.top() ){
                ans.push_back(st.top());
            }
            else if( nums[i] >= st.top() ){
            
                while( !st.empty() && !(nums[i] < st.top()) ){
                    st.pop();
                }
                if( !st.empty() && nums[i] < st.top() ){
                    ans.push_back(st.top());
                } 
                else{
                    ans.push_back(-1);
                }
            }
            else if( st.empty() ){
                ans.push_back(-1);
            }
            st.push(nums[i]);
        }
        reverse( ans.begin(), ans.end() );
        return ans;
    }
};