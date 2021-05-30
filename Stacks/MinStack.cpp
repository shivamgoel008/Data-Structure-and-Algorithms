class MinStack {
public:
    /** initialize your data structure here. */
    stack<int>primary;
        stack<int>minstack;
    MinStack() {
        while(primary.size()>0){
        primary.pop();
        minstack.pop();
    }
        
    }
    
    void push(int val) {
        primary.push(val);
        if(minstack.empty())
            minstack.push(val);
        else{ 
            if(minstack.top()<val){
                minstack.push(minstack.top());
            }
            else 
                minstack.push(val);
        }
    }
    
    void pop() {
        primary.pop();
        minstack.pop();
    }
    
    int top() {
        return primary.top();
    }
    
    int getMin() {
        return minstack.top();
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