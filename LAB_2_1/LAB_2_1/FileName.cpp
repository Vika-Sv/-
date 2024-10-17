#include <iostream> 
#include <algorithm> // ϳ��������� �������� ��� ����������� ���������, ������� ��� sort �� max_element

using namespace std; 

int main() {
    // Task 1
    {
        int arr[11]; 
        for (int i = 0; i < 11; i++) { 
            if (i % 2 == 0) { // ��������, �� ������ ������
                arr[i] = 2 * i - 44; // ���������� �������� ��� ������ �������
            }
            else { // ���� ������ ��������
                arr[i] = i - 3; 
            }
        }

        // ���������� ������ �� ��������� ���������� ������� sort

        sort(arr, arr + 11); // ���������� �������� ������ � ������� ���������

        // ��������� ������������� ������
        cout << "Sorted array (Task 1): "; 
        for (int i = 0; i < 11; ++i) cout << arr[i] << " "; // ��������� ��� �������� ������
        cout << endl; 
    }

    // Task 2
    {
        const int n = 10; 
        int arr1[n], arr2[n], arr3[n]; 

        for (int i = 0; i < n; ++i) { 
            arr1[i] = 2 * i + 40; // ���������� ������� ������
            arr2[i] = 52 - 2 * i; // ���������� ������� ������
            arr3[i] = arr1[i] + arr2[i]; // ���������� �������� ������ �� ���� ������ ����
        }

        // ����������� ������������� �������� � �������� �����

        int max_element_value = *max_element(arr3, arr3 + n); 

        // ��������� ������� ������
        cout << "First array (Task 2): "; 
        for (int i = 0; i < n; ++i) cout << arr1[i] << " "; // ��������� ��� �������� ������� ������
        cout << "Second array: "; 
        for (int i = 0; i < n; ++i) cout << arr2[i] << " "; // ��������� ��� �������� ������� ������
        cout << "Third array (sum): "; 
        for (int i = 0; i < n; ++i) cout << arr3[i] << " "; // ��������� ��� �������� �������� ������
        cout << "Max value in third array: " << max_element_value << endl; 
    }

    // Task 3
    {
        const int rows = 4, cols = 5; // ���������� �������� ��� ������� ����� � ��������
        int arr[rows][cols] = { // ���������� ��������� ������ � 4 ������� �� 5 ��������� � ������������
            {12, 54, 34, 12, 0},
            {23, -40, 41, -12, 0},
            {45, 63, 36, 36, 0},
            {0, 0, 0, 0, 0} 
        };
        int product[rows] = { 1, 1, 1, 1 }; 

        // ���������� ������� �������� �������� ������� �����

        for (int i = 0; i < rows; ++i) { // ���� �� ������
            bool has_positive = false; // ����� ��� �������� �������� ������� �������� � �����
            for (int j = 0; j < cols; ++j) { // ���� �� ��������
                if (arr[i][j] > 0) { // ��������, �� ������� �������
                    product[i] *= arr[i][j]; 
                    has_positive = true; 
                }
            }
            if (!has_positive) product[i] = 0; 
        }

        // ��������� ������� �������� �������� � ������� �����
        cout << "Product of positive elements in each row (Task 3): "; 
        for (int i = 0; i < rows; ++i) { // ���� ��� ��������� �������
            cout << "Row " << i + 1 << ": " << product[i] << endl; // ��������� ������� ��� ������� �����
        }
    }

    // Task 4
    {
        const int rows = 5, cols = 4; 
        double arr[rows][cols]; // ���������� ��������� ������ � 5 ������� �� 4 ���������
        double avg[cols] = { 0 }; // ���������� ������ ��� ������� �������, ������������ ������
        int positive_count[cols] = { 0 }; 

        cout << "Enter the elements of a two-dimensional array (5x4):" << endl; 
        for (int i = 0; i < rows; ++i) { // ���� �� ������
            for (int j = 0; j < cols; ++j) { // ���� �� ��������
                cin >> arr[i][j]; // ���������� �������� ������ � ���������
                avg[j] += arr[i][j]; // ��������� �������� �� ���������� ������� ��� ���������� ����������
                if (arr[i][j] > 0) positive_count[j]++; // ���� ������� �������, �������� �������� ��� �������
            }
        }

        // ���������� ���������� ������������� ��� ������� �������

        cout << "Average values for each column (Task 4): "; 
        for (int j = 0; j < cols; ++j) { // ���� �� ��������
            avg[j] /= rows; 
            cout << "Column " << j + 1 << ": " << avg[j] << endl; 
        }

        // ��������� ������� ������� �������� � ������� �������

        cout << "Positive element count in each column:"; 
        for (int j = 0; j < cols; ++j) { // ���� �� ��������
            cout << "Column " << j + 1 << ": " << positive_count[j] << endl; 
        }
    }

    return 0; 
}
