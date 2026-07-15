class Solution {
public:
    bool isValid(string s) {
        std::stack<char> brackets;
    
    for (char c : s) {
        // If it's an opening bracket, push it onto the stack
        if (c == '(' || c == '{' || c == '[') {
            brackets.push(c);
        } 
        // If it's a closing bracket, check for a valid match
        else {
            // Stack cannot be empty when a closing bracket appears
            if (brackets.empty()) return false;
            
            char top = brackets.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                brackets.pop(); // Valid match found, remove the open bracket
            } else {
                return false; // Mismatched bracket type
            }
        }
    }
    
    // If the stack is empty, all brackets were properly matched and closed
    return brackets.empty();
    }
};
