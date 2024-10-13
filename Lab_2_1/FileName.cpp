// Version: 11
// Task 1 

#include <iostream>

int main() {

    int arr[11];
    for (int i = 0; i < 11; i++)

    {
        if (i % 2 == 0)

        {
            arr[i] = 2 * i - 44;

        }

        else 

        {

            arr[i] = i - 3;

        }

    }
    int size = 11;

    for (int i = 0; i < size - 1; i++)

    {

        for (int j = 0; j < size - i - 1; j++)

        {

            if (arr[j] > arr[j + 1])

            {

            int temp = arr[j];

            arr[j] = arr[j + 1];

            arr[j + 1] = temp;

            }

        }

    }
   return 0;
}


// Task 2


#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;


int main() {
    const int n = 10;
    int arr1[n], arr2[n], arr3[n];

    
    for (int i = 0; i < n; ++i) {
        arr1[i] = 2 * i + 40;   // Перший масив
        arr2[i] = 52 - 2 * i;   // Другий масив
    }

    
    for (int i = 0; i < n; ++i) {
        arr3[i] = arr1[i] + arr2[i]; 
    }

    
    int max_element_value = *max_element(arr3, arr3 + n);

    
    cout << "First array ";
    for (int i = 0; i < n; ++i) {
        cout << arr1[i] << " ";
   }
    cout << endl;

    cout << "Second array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "Third array (sum): ";
    for (int i = 0; i < n; ++i) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    // Виведення максимального елемента
    cout << "Max array " << max_element_value << endl;

    return 0;
}



//Task 3


                  
#include <iostream>
using namespace std;

int main() {
    const int rows = 4, cols = 5;
    int arr[rows][cols], product[rows];

    
    cout << "Enter the array elements (4x5):" << endl;
    for (int i = 0; i < rows; ++i) {
        product[i] = 1;  
        bool has_positive = false; 
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];  
            if (arr[i][j] > 0) {
                product[i] *= arr[i][j];  
                has_positive = true; 
            }
        }
        if (!has_positive) product[i] = 0;  
    }

    
    cout << "\nThe product of the positive elements of each row:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << "Line" << i + 1 << ": " << product[i] << endl;
    }

#include <iostream>
#include <vector>

    using namespace std;

    int main() {
        const int rows = 5, cols = 4;
        double arr[rows][cols]; 

       
        cout << "Enter the elements of a two-dimensional array (5x4):" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> arr[i][j];  
            }
        }

        
        double avg[cols] = { 0 };
        int positive_count[cols] = { 0 };  

   
        for (int j = 0; j < cols; ++j) {
            double sum = 0;
            for (int i = 0; i < rows; ++i) {
                if (arr[i][j] > 0) {
                    sum += arr[i][j];  
                    positive_count[j]++;  
                }
            }
            if (positive_count[j] > 0) {
                avg[j] = sum / positive_count[j];
            }
        }

        
        cout << "\nTwo-dimensional array (5x4):" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }

        
        cout << "\nArithmetic average of positive elements of each column:" << endl;
        for (int j = 0; j < cols; ++j) {
            cout << "Column " << j + 1 << ": " << avg[j] << endl;
        }

    return 0;
}


