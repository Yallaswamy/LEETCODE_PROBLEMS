class MyQueue {
public:
queue<int>q;
    MyQueue() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(!q.empty()){
            int x1=q.front();
            q.pop();
            return x1;
        }
        return 0;
    }
    
    int peek() {
        if(!q.empty()){
            return q.front();
        }
        return 0;
    }
    
    bool empty() {
        return q.empty();
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