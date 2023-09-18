class MinStack {
    typedef long long int LL;
public:
    stack<LL> st;
    LL minval;
    MinStack() {
    }
    
    void push(int val) {
        
        if(st.empty()){
            
            st.push(val);
            minval=val;
        }
        else if( val>=minval ){
            st.push(val);
        }
        else{
            //minval=val;
            st.push(2LL*val-minval);
            minval=val;
        }
        return;
    }
    
    void pop() {
        if(st.top()<minval){
            minval = 2LL*minval-st.top();
        }
        st.pop();
    }
    
    int top() {
        if(st.top()<minval){
            return minval;
        }
        return st.top();
    }
    
    int getMin() {
        return minval;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */