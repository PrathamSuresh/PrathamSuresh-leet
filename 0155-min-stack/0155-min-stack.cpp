class MinStack {
    stack<int> st;
    stack<int> minst;

public:
    MinStack() {}

    void push(int value) {
        st.push(value);
        if (minst.empty()) {
            minst.push(value);
        } else {
            int min = minst.top();
            if (value <= min) {
                minst.push(value);
            }
        }
    }

    void pop() {
        if (minst.top() == st.top()) {
            minst.pop();
            st.pop();
        } else {
            st.pop();
        }
    }

    int top() { return st.top(); }

    int getMin() {
        if (minst.empty()) {
            return 0;
        } else {
            return minst.top();
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */