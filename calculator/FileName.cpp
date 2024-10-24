#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

// Функція для визначення пріоритету оператора
int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1; // Пріоритет додавання і віднімання
    }
    if (c == '*' || c == '/') {
        return 2; // Пріоритет множення і ділення
    }
    return 0; // Якщо це не оператор
}

// Функція для перевірки, чи є символ оператором
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Функція для виконання операції
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

// Функція для конвертації інфіксного виразу в постфіксну форму
string infixToPostfix(const string& expression) {
    stack<char> operators;
    string postfix = "";

    for (size_t i = 0; i < expression.length(); i++) {
        char current = expression[i];

        // Ігноруємо пробіли
        if (isspace(current)) continue;

        // Якщо це число (або кілька цифр), додаємо його до постфіксного виразу
        if (isdigit(current)) {
            while (i < expression.length() && isdigit(expression[i])) {
                postfix += expression[i];
                i++;
            }
            postfix += ' '; // Пробіл для відокремлення чисел
            i--; // Зменшуємо лічильник, бо цикл збільшить його ще раз
        }
        // Якщо це оператор
        else if (isOperator(current)) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(current)) {
                postfix += operators.top();
                postfix += ' ';
                operators.pop();
            }
            operators.push(current);
        }
        // Якщо це відкриваюча дужка
        else if (current == '(') {
            operators.push(current);
        }
        // Якщо це закриваюча дужка
        else if (current == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                postfix += ' ';
                operators.pop();
            }
            if (!operators.empty()) operators.pop(); // Видаляємо '('
        }
        else {
            cout << "Error: Invalid character '" << current << "'" << endl;
            exit(1);
        }
    }

    // Додаємо всі залишкові оператори в постфікс
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

// Функція для обчислення постфіксного виразу
int evaluatePostfix(const string& expression) {
    stack<int> operands;

    for (size_t i = 0; i < expression.length(); i++) {
        char current = expression[i];

        // Ігноруємо пробіли
        if (isspace(current)) continue;

        // Якщо це число, додаємо його до стека
        if (isdigit(current)) {
            int number = 0;
            while (i < expression.length() && isdigit(expression[i])) {
                number = number * 10 + (expression[i] - '0');
                i++;
            }
            operands.push(number);
            i--; // Повертаємо лічильник, оскільки зовнішній цикл його збільшить
        }
        // Якщо це оператор
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
