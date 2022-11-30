class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        
        stack<int> st;
        int n=ast.size();
        
        for( int i=0 ; i<n ; i++ ){
            
            // we are pushing the positive numbers into the stack
            if( st.empty() or ast[i] > 0 ){
                st.push(ast[i]);
            }
            else{
                while( !st.empty() and st.top()>0 and st.top()<fabs(ast[i]) ){
                    st.pop();
                }
                if( !st.empty() and st.top()==abs(ast[i]) ){
                    st.pop();
                }
                else{
                    if( st.empty() or st.top()<0 ){
                        st.push(ast[i]);
                    }
                }
            }
        }
        
        n=st.size();
        vector<int> ans(n,0);
        for( int i=n-1 ; i>=0 ; i-- ){
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};