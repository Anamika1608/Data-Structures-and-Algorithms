class MyStack {
private:
    queue<int>q;
public:
    
    void push(int x) {
        q.push(x);
        int s = q.size();
        for(int i=0;i<s-1;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int el = q.front();
        q.pop();
        return el;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};