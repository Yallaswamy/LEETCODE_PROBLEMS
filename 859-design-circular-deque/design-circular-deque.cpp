class MyCircularDeque {
public:
    int size;
    deque<int>dq;
    MyCircularDeque(int k) {
        size = k;
    }
    
    bool insertFront(int value) {
        if(dq.size()==size) return 0;
        dq.push_front(value);
        return 1;
    }
    
    bool insertLast(int value) {
        if(dq.size()==size) return 0;
        dq.push_back(value);
        return 1;
    }
    
    bool deleteFront() {
        if(dq.empty()) return 0;
        dq.pop_front();
        return 1;
    }
    
    bool deleteLast() {
        if(dq.empty()) return 0;
        dq.pop_back();
        return 1;
    }
    
    int getFront() {
        if(dq.empty()) return -1;
        return dq.front();
    }
    
    int getRear() {
        if(dq.empty()) return -1;
        return dq.back();
    }
    
    bool isEmpty() {
        return dq.empty();
    }
    
    bool isFull() {
        return dq.size()==size;
    }
};