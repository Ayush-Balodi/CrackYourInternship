class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n1=nums1.size() , n2=nums2.size();
        stack<int> st;
        map<int,int> mp;
        
        for( int i=n2-1 ; i>=0 ; i-- ){

            if(st.empty()){
                mp[nums2[i]] = -1; 
            }
            else if( nums2[i] < st.top() ){
                mp[nums2[i]] = st.top();
            }
            else{
                while( !st.empty() && !(nums2[i] < st.top()) ){
                    st.pop();
                }
                if( !st.empty() && nums2[i] < st.top() ){
                    mp[nums2[i]] = st.top();
                }
                else if( st.empty() ){
                    mp[nums2[i]] = -1;
                }
            }
            st.push(nums2[i]);
        }
        
        for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << " " << it->second << endl;
}
        vector<int> v;
        for( int i=0 ; i<n1 ; i++ ){
            v.push_back(mp[nums1[i]]);
        }
        return v;
    }
};