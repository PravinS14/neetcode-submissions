class MinStack {
public:
    std::stack<std::pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        int current_val = st.empty() ? val : min(val, st.top().second);
        st.push({val, current_val});
    }
    
    void pop() {
        return st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
