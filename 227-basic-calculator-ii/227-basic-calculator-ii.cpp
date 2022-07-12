class Solution {
public:
    int calculate(string s) {
        int len = s.length();
        if (len == 0) return 0;
        char operation = '+';
        stack<int>stack;
        int currentNumber = 0;
        int lastNumber = 0;
        char currentChar;
        int result = 0;
        for (int i = 0; i < len; i++) {
            currentChar = s[i];
            if (isdigit(currentChar)) {
                currentNumber = currentNumber * 10 + (currentChar - '0');
            }
            if (!isdigit(currentChar) && !iswspace(currentChar) || i == len - 1) {
                if(operation == '+' || operation == '-') {
                    result += lastNumber;
                    lastNumber = (operation == '+') ? currentNumber : - currentNumber;
                }
                else if (operation == '*') {
                    lastNumber = lastNumber * currentNumber;
                } 
                else if (operation == '/') {
                    lastNumber = lastNumber / currentNumber;
                }
                currentNumber = 0;
                operation = currentChar;     
            }            
        }
        result += lastNumber;
        return result;
    }
};