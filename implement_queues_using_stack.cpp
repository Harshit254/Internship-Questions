class MyQueue {
public:
    stack<int>s;
    stack<int>t;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s.empty())
        {
            int p=s.top();
            s.pop();
            t.push(p);
        }
        t.push(x);
        while(!t.empty())
        {
            int a=t.top();
            t.pop();
            s.push(a);
        }
    }
    
    int pop() {
        int b=s.top();
        s.pop();
        return b;
        
    }
    
    int peek() {
        int c=s.top();
        return c;
    }
    
    bool empty() {
        return s.empty();
    }
};
