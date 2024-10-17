#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "uk-UA");
    // Значення для перевірки
    int op1 = -57; // Перший операнд для порівняння
    int op2 = -57; // другий операнд для порівняння
    int add1 = 82; // Перший операнд для додавання
    int add2 = 46; // Другий операнд для додавання

    // Порівняння
    cout << "Порівняння:" << endl;
    if (op1 == op2) {
        cout << "Операнди рівні: " << op1 << " == " << op2 << endl;
    }
    else {
        cout << "Операнди не рівні: " << op1 << " != " << op2 << endl;
    }

    // Додавання
    cout << "Додавання:" << endl;
    cout << add1 << " + " << add2 << " = " << (add1 + add2) << endl;

    // Цикл інкрементації
    cout << "Цикл:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Ітерація " << i << ": " << add1 << endl;
        add1++;
    }

    // Порівняння після циклу
    cout << "Порівняння після циклу:" << endl;
    if (add1 > add2) {
        cout << add1 << " більше ніж " << add2 << endl;
    }
    else if (add1 < add2) {
        cout << add1 << " менше ніж " << add2 << endl;
    }
    else {
        cout << add1 << " дорівнює " << add2 << endl;
    }

    // Побітові операції
    cout << "Побітові операції:" << endl;
    cout << "Побітове AND: " << (op1 & op2) << endl;
    cout << "Побітове OR: " << (op1 | op2) << endl;
    cout << "Зсув вліво: " << (add1 << 2) << endl;
    cout << "Зсув вправо: " << (add2 >> 1) << endl;

    return 0;
}
