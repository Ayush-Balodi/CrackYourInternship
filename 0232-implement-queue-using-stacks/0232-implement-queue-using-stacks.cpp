class MyQueue {
private:
    stack<int> st1,st2;
public:
    MyQueue() {
        
    }
    void push(int x) {
        st1.push(x);
        return;
    }
    
    int pop() {
        if( st1.empty() and st2.empty() ){
            return -1;
        }
        if( st2.empty() ){
            while( !st1.empty() ){
                st2.push(st1.top());
                st1.pop();
            }
        }
        int p = st2.top();
        st2.pop();
        return p;
    }
    
    int peek() {
        if( st1.empty() and st2.empty() ){
            return -1;
        }
        
        if( st2.empty() ){
            while( !st1.empty() ){
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.top();
    }
    
    bool empty() {
        return st1.empty() and st2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */