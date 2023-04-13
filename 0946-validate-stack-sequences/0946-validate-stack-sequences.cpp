class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n=pushed.size();
        stack<int> st;
        int k=0;
        for(int i=0; i<n; i++){
            st.push(pushed[i]);
            while(!st.empty() and st.top() == popped[k]){
                st.pop();
                k++;
            }
        }
        return st.empty() ? true: false;
    }
};