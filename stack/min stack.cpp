class MinStack {
public:
    vector<int> v;
    MinStack() {
        vector<int> v;
    }
    
    void push(int x) {
         v.push_back(x);
    }
    
    void pop() {
        v.erase(v.begin()+v.size()-1);
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return *min_element(v.begin(), v.end());
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
