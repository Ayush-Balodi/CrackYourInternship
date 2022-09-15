/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/min-stack

    TC = O(n)
    Auxiliary space = O(n)
*/

class MinStack {
public:
    stack<int> st;
    map<int,int> m;
    
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        m[val]++;
        return;
    }
    
    void pop() {
        if( m[st.top()] > 1 ){
            m[st.top()]--;
        }
        else{
            m.erase(st.top());
        }
        st.pop();
        return;
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        
        auto it = m.begin();
        int minval = it->first;
        return minval;
    }
};

/*
    TC = O(1)
    Auxiliary space = O(1)
*/
class MinStack {
public:
    stack<pair<int,int>> st;
    int minval;
    
    MinStack() {
        
    }
    
    void push(int val) {
        
        pair<int,int> p = st.empty()?make_pair(val,val):make_pair(val, min(val,st.top().second));
        
        st.push(p);
        return;
    }
    
    void pop() {
        st.pop();
        return;
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};