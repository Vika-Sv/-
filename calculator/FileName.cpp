#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1; 
    }
    if (c == '*' || c == '/') {
        return 2; 
    }
    return 0; 
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int performOperation(char operation, int operand1, int operand2) {
    if (operation == '+') return operand1 + operand2;
    if (operation == '-') return operand1 - operand2;
    if (operation == '*') return operand1 * operand2;
    if (operation == '/') {
        if (operand2 == 0) {
            cout << "Error: Division by zero!" << endl;
            exit(1);
        }
        return operand1 / operand2;
    }
    return 0;
}

string infixToPostfix(const string& expression) {
    stack<char> operators;
    string postfix = "";

    for (size_t i = 0; i < expression.length(); i++) {
        char current = expression[i];

        if (isspace(current)) continue;

        if (isdigit(current)) {
            while (i < expression.length() && isdigit(expression[i])) {
                postfix += expression[i];
                i++;
            }
            postfix += ' '; 
            i--; 
        }

        else if (isOperator(current)) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(current)) {
                postfix += operators.top();
                postfix += ' ';
                operators.pop();
            }
            operators.push(current);
        }
   
        else if (current == '(') {
            operators.push(current);
        }
     
        else if (current == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                postfix += ' ';
                operators.pop();
            }
            if (!operators.empty()) operators.pop(); 
        }
        else {
            cout << "Error: Invalid character '" << current << "'" << endl;
            exit(1);
        }
    }

    while (!operators.empty()) {
        if (operators.top() == '(') {
            cout << "Error: Mismatched parentheses" << endl;
            exit(1);
        }
        postfix += operators.top();
        postfix += ' ';
        operators.pop();
    }

    return postfix;
}

int evaluatePostfix(const string& expression) {
    stack<int> operands;

    for (size_t i = 0; i < expression.length(); i++) {
        char current = expression[i];

        if (isspace(current)) continue;

        if (isdigit(current)) {
            int number = 0;
            while (i < expression.length() && isdigit(expression[i])) {
                number = number * 10 + (expression[i] - '0');
                i++;
            }
            operands.push(number);
            i--; 
        }
        
        else if (isOperator(current)) {
            if (operands.size() < 2) {
                cout << "Error: Not enough operands" << endl;
                exit(1);
            }
            int operand2 = operands.top(); operands.pop();
            int operand1 = operands.top(); operands.pop();
            int result = performOperation(current, operand1, operand2);
            operands.push(result);
        }
    }

    if (operands.size() != 1) {
        cout << "Error: Invalid expression" << endl;
        exit(1);
    }

    return operands.top();
}

int main() {
    string infixExpression;
    cout << "Enter an infix expression: ";
    getline(cin, infixExpression);

    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Postfix expression: " << postfixExpression << endl;

    int result = evaluatePostfix(postfixExpression);
    cout << "Result: " << result << endl;

    return 0;
}
