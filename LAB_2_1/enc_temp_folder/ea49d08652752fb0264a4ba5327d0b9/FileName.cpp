#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Task 1
    {
        int arr[11];
        for (int i = 0; i < 11; i++) { // перебираємо значення від 0 до 10 (11 не включно)
            if (i % 2 == 0) { // перевірка індекса на парність
                arr[i] = 2 * i - 44;
            }
            else { // перевірка індекса на непарність
                arr[i] = i - 3;
            }
        }

        // Сортування за допомогою стандартної функції
        sort(arr, arr + 11);

        // Виведення відсортованого масиву
        cout << "Sorted array (Task 1): ";
        for (int i = 0; i < 11; ++i) cout << arr[i] << " ";
        cout << endl;
    }

    // Task 2
    {
        const int n = 10;
        int arr1[n], arr2[n], arr3[n];

        for (int i = 0; i < n; ++i) {
            arr1[i] = 2 * i + 40;
            arr2[i] = 52 - 2 * i;
            arr3[i] = arr1[i] + arr2[i];
        }

        int max_element_value = *max_element(arr3, arr3 + n);

        cout << "\nFirst array (Task 2): ";
        for (int i = 0; i < n; ++i) cout << arr1[i] << " ";
        cout << "\nSecond array: ";
        for (int i = 0; i < n; ++i) cout << arr2[i] << " ";
        cout << "\nThird array (sum): ";
        for (int i = 0; i < n; ++i) cout << arr3[i] << " ";
        cout << "\nMax value in third array: " << max_element_value << endl;
    }

    // Task 3
    {
        const int rows = 4, cols = 5;
        int arr[rows][cols] = {
            {12, 54, 34, 12, 0},
            {23, -40, 41, -12, 0},
            {45, 63, 36, 36, 0},
            {0, 0, 0, 0, 0}
        };
        int product[rows] = { 1, 1, 1, 1 };

        // Обчислення добутку додатних елементів кожного рядка
        for (int i = 0; i < rows; ++i) {
            bool has_positive = false;
            for (int j = 0; j < cols; ++j) {
                if (arr[i][j] > 0) {
                    product[i] *= arr[i][j];
                    has_positive = true;
                }
            }
            if (!has_positive) product[i] = 0;
        }

        cout << "\nProduct of positive elements in each row (Task 3):\n";
        for (int i = 0; i < rows; ++i) {
            cout << "Row " << i + 1 << ": " << product[i] << endl;
        }
    }

    // Task 4
    {
        const int rows = 5, cols = 4;
        double arr[rows][cols];
        double avg[cols] = { 0 };
        int positive_count[cols] = { 0 };

        cout << "\nEnter the elements of a two-dimensional array (5x4):" << endl;
        for (int i = 0; i < rows; ++i) { // Доданий рядок для закриття блоку коду
            for (int j = 0; j < cols; ++j) {
                cin >> arr[i][j];
                avg[j] += arr[i][j]; // підсумовуємо значення для кожного стовпця
                if (arr[i][j] > 0) positive_count[j]++;
            }
        }

        // Обчислення середнього арифметичного для кожного стовпця
        cout << "\nAverage values for each column (Task 4):\n";
        for (int j = 0; j < cols; ++j) {
            avg[j] /= rows; // Ділимо суму на кількість рядків, щоб отримати середнє
            cout << "Column " << j + 1 << ": " << avg[j] << endl;
        }

        // Виведення кількості додатних елементів у кожному стовпці
        cout << "\nPositive element count in each column:\n";
        for (int j = 0; j < cols; ++j) {
            cout << "Column " << j + 1 << ": " << positive_count[j] << endl;
        }
    }

    return 0;
}
