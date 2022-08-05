/*
    https://github.com/Ayush-Balodi/CrackYourInternship.git
    https://leetcode.com/problems/implement-queue-using-stacks

    TC = O(n) // to dequeue
    TC = O(1) // to enqueue
    SC = O(n) // as two stacks are used 
*/

class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;
public:
    
    MyQueue() {
        
    }
    
    void push(int x) {
        
        s1.push(x);
        return;
    }
    
    int pop() {
        
        if( s1.empty() and s2.empty() ){
            return -1;
        }
        if( s2.empty() ){
            while( !s1.empty() ){
                s2.push( s1.top() );
                s1.pop();
            } 
        }
        int topval = s2.top();
        s2.pop();
        
        return topval;
    }
    
    int peek() {
        
        if( s1.empty() and s2.empty() ){
            return -1;
        }
        
        if( s2.empty() ){
            while( !s1.empty() ){
                s2.push( s1.top() );
                s1.pop();
            } 
        }
        
        int topval = s2.top();
        return topval;
    }
    
    bool empty() {
        
        if( s1.empty() and s2.empty() ){
            return true;
        }
        else{
            return false;
        }
    }
};