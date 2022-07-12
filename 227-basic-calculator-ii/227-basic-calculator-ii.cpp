class Solution {
public:
    int calculate(string s) {
        int len = s.length();
        if (len == 0) return 0;
        char operation = '+';
        stack<int>stack;
        int currentNumber = 0;
        char currentChar;
        for (int i = 0; i < len; i++) {
            currentChar = s[i];
            if (isdigit(currentChar)) {
                currentNumber = currentNumber * 10 + (currentChar - '0');
            }
            if (!isdigit(currentChar) && !iswspace(currentChar) || i == len - 1) {
                if(operation == '+') {
                    stack.push(currentNumber);
                }
                else if (operation == '-') {
                    stack.push(-currentNumber);
                }
                else if (operation == '*') {
                    int stackTop = stack.top();
                    stack.pop();
                    stack.push(stackTop  * currentNumber);
                } 
                else if (operation == '/') {
                    int stackTop = stack.top();
                    stack.pop();
                    stack.push(stackTop / currentNumber);
                }
                currentNumber = 0;
                operation = currentChar;
                
            }            
        }
        int result = 0;
        while (!stack.empty()) {
            result += stack.top();
            stack.pop();
        }
        return result;
    }
};