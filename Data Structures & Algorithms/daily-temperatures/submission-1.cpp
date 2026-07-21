class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0); // Initialize with 0s by default
        stack<int> st;            // Stack to store indices

        for (int i = 0; i < n; i++) {
            // While stack is not empty and current temp is warmer than stack top temp
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prevIndex = st.top();
                st.pop();
                result[prevIndex] = i - prevIndex; // Calculate day difference
            }
            // Push current index onto stack
            st.push(i);
        }

        return result;
    }
};
