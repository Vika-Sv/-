#include <iostream> 
#include <algorithm> // Підключення бібліотеки для стандартних алгоритмів, зокрема для sort та max_element

using namespace std; 

int main() {
    // Task 1
    {
        int arr[11]; 
        for (int i = 0; i < 11; i++) { 
            if (i % 2 == 0) { // Перевірка, чи індекс парний
                arr[i] = 2 * i - 44; // Визначення значення для парних індексів
            }
            else { // Якщо індекс непарний
                arr[i] = i - 3; 
            }
        }

        // Сортування масиву за допомогою стандартної функції sort

        sort(arr, arr + 11); // Сортування елементів масиву в порядку зростання

        // Виведення відсортованого масиву
        cout << "Sorted array (Task 1): "; 
        for (int i = 0; i < 11; ++i) cout << arr[i] << " "; // Виведення всіх елементів масиву
        cout << endl; 
    }

    // Task 2
    {
        const int n = 10; 
        int arr1[n], arr2[n], arr3[n]; 

        for (int i = 0; i < n; ++i) { 
            arr1[i] = 2 * i + 40; // Заповнення першого масиву
            arr2[i] = 52 - 2 * i; // Заповнення другого масиву
            arr3[i] = arr1[i] + arr2[i]; // Заповнення третього масиву як сума перших двох
        }

        // Знаходження максимального значення в третьому масиві

        int max_element_value = *max_element(arr3, arr3 + n); 

        // Виведення значень масивів
        cout << "First array (Task 2): "; 
        for (int i = 0; i < n; ++i) cout << arr1[i] << " "; // Виведення всіх елементів першого масиву
        cout << "Second array: "; 
        for (int i = 0; i < n; ++i) cout << arr2[i] << " "; // Виведення всіх елементів другого масиву
        cout << "Third array (sum): "; 
        for (int i = 0; i < n; ++i) cout << arr3[i] << " "; // Виведення всіх елементів третього масиву
        cout << "Max value in third array: " << max_element_value << endl; 
    }

    // Task 3
    {
        const int rows = 4, cols = 5; // Оголошення констант для кількості рядків і стовпців
        int arr[rows][cols] = { // Оголошення двомірного масиву з 4 рядками та 5 стовпцями з ініціалізацією
            {12, 54, 34, 12, 0},
            {23, -40, 41, -12, 0},
            {45, 63, 36, 36, 0},
            {0, 0, 0, 0, 0} 
        };
        int product[rows] = { 1, 1, 1, 1 }; 

        // Обчислення добутку додатних елементів кожного рядка

        for (int i = 0; i < rows; ++i) { // Цикл по рядках
            bool has_positive = false; // Змінна для перевірки наявності додатніх елементів у рядку
            for (int j = 0; j < cols; ++j) { // Цикл по стовпцях
                if (arr[i][j] > 0) { // Перевірка, чи елемент додатній
                    product[i] *= arr[i][j]; 
                    has_positive = true; 
                }
            }
            if (!has_positive) product[i] = 0; 
        }

        // Виведення добутків додатних елементів у кожному рядку
        cout << "Product of positive elements in each row (Task 3): "; 
        for (int i = 0; i < rows; ++i) { // Цикл для виведення добутків
            cout << "Row " << i + 1 << ": " << product[i] << endl; // Виведення добутку для кожного рядка
        }
    }

    // Task 4
    {
        const int rows = 5, cols = 4; 
        double arr[rows][cols]; // Оголошення двомірного масиву з 5 рядками та 4 стовпцями
        double avg[cols] = { 0 }; // Оголошення масиву для середніх значень, ініціалізоване нулями
        int positive_count[cols] = { 0 }; 

        cout << "Enter the elements of a two-dimensional array (5x4):" << endl; 
        for (int i = 0; i < rows; ++i) { // Цикл по рядках
            for (int j = 0; j < cols; ++j) { // Цикл по стовпцях
                cin >> arr[i][j]; // Зчитування елемента масиву з клавіатури
                avg[j] += arr[i][j]; // Додавання значення до відповідного стовпця для обчислення середнього
                if (arr[i][j] > 0) positive_count[j]++; // Якщо елемент додатній, збільшити лічильник для стовпця
            }
        }

        // Обчислення середнього арифметичного для кожного стовпця

        cout << "Average values for each column (Task 4): "; 
        for (int j = 0; j < cols; ++j) { // Цикл по стовпцях
            avg[j] /= rows; 
            cout << "Column " << j + 1 << ": " << avg[j] << endl; 
        }

        // Виведення кількості додатніх елементів у кожному стовпці

        cout << "Positive element count in each column:"; 
        for (int j = 0; j < cols; ++j) { // Цикл по стовпцях
            cout << "Column " << j + 1 << ": " << positive_count[j] << endl; 
        }
    }

    return 0; 
}
