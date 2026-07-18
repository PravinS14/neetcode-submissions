class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operan;
        for(auto & c: tokens){
            if (std::isdigit(c[0]) || (c.size() > 1 && c[0] == '-')) {
                operan.push(std::stoi(c));
            }
            else if (c == "+"){
                signed int x,y,z;
                if(!operan.empty()){
                    x = operan.top();
                    operan.pop();
                    y = operan.top();
                    operan.pop();
                    z = y+x;
                    operan.push(z);
                }
            }
            else if (c == "-"){
                signed int x,y,z;
                if(!operan.empty()){
                    x = operan.top();
                    operan.pop();
                    y = operan.top();
                    operan.pop();
                    z = y-x;
                    operan.push(z);
                }
            }
            else if (c == "*"){
                signed int x,y,z;
                if(!operan.empty()){
                    x = operan.top();
                    operan.pop();
                    y = operan.top();
                    operan.pop();
                    z = y*x;
                    operan.push(z);
                }
            }
            else if (c == "/"){
                signed int x,y,z;
                if(!operan.empty()){
                    x = operan.top();
                    operan.pop();
                    y = operan.top();
                    operan.pop();
                    z = y/x;
                    operan.push(z);
                }
            }
        }
    return operan.top();    
    }
};
