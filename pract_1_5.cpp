#include <iostream>
#include <vector> // Додано для використання std::vector
using namespace std;

int main() {
    setlocale(LC_ALL, "uk-UA");
    int n, P;

    cout << "Введіть кількість елементів у послідовності: ";
    cin >> n;

    if (n <= 0) { // Перевірка на коректність введення
        cout << "Кількість елементів повинна бути додатньою." << endl;
        return 1; // Завершення програми
    }

    vector<int> A(n); // Використання вектора

    cout << "Введіть елементи послідовності: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Введіть значення P: ";
    cin >> P;

    // Шукаємо перший індекс входження P
    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (A[i] == P) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        cout << "Перший індекс входження P: " << foundIndex << endl;
    }
    else {
        cout << "Елемент P не знайдено." << endl;
    }

    // Пошук найменшого додатного елемента
    int minPositive = -1;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0) {
            if (minPositive == -1 || A[i] < minPositive) {
                minPositive = A[i];
            }
        }
    }

    if (minPositive != -1) {
        cout << "Найменший додатний елемент: " << minPositive << endl;
    }
    else {
        cout << "Додатніх елементів немає." << endl;
    }
    
    // Пошук найбільшого і найменшого елементів та обмін місцями
    int minVal = A[0], maxVal = A[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (A[i] < minVal) {
            minVal = A[i];
            minIndex = i;
        }
        if (A[i] > maxVal) {
            maxVal = A[i];
            maxIndex = i;
        }
    }

    // Міняємо місцями максимальний і мінімальний елементи
    int temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;

    // Виводимо оновлену послідовність
    cout << "Послідовність після обміну найбільшого і найменшого елементів: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
