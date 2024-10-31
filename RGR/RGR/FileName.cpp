#include <iostream>
#include <string>
using namespace std;


bool isValidString(const string& str) {
  
    if (str.empty() || str[0] != '+') {
        return false; 
    }

    int i = 1; 
    bool hasDigits = false; 
    bool hasLettersOrSymbols = false; 

    while (i < str.size() && str[i] >= '0' && str[i] <= '9') {
        hasDigits = true; 
        i++; 
    }

    if (!hasDigits) {
        return false;
    }

    while (i < str.size()) {
        if (str[i] >= 'A' && str[i] <= 'K') {
            hasLettersOrSymbols = true; 
            i++;
        }
        else if (str[i] == '^' || str[i] == '&') {
            hasLettersOrSymbols = true; 
            i++;
        }
        else {
            return false;
        }
    }

    return hasDigits && hasLettersOrSymbols;
}

int main() {
    setlocale(LC_ALL, "uk-UA");
    string input;
    cout << "Введіть рядок: ";
    cin >> input;

    if (isValidString(input)) {
        cout << "Рядок належить до мови L(V)." << endl;
    }
    else {
        cout << "Помилка: рядок не відповідає правилам мови L(V)." << endl;
    }

    return 0;
}
