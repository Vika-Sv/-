//task 1
#include <iostream>
using namespace std;

int main() {
    
    int a = 10, b = 20;
    if (a > b) {
        cout << "a більше за b" << endl;
    }
    else if (a == b) {
        cout << "a дорівнює b" << endl;
    }
    else {
        cout << "a менше за b" << endl;
    }

    
    int day = 3;
    switch (day) {
    case 1:
        cout << "Понеділок" << endl;
        break;
    case 2:
        cout << "Вівторок" << endl;
        break;
    case 3:
        cout << "Середа" << endl;
        break;
    case 4:
        cout << "Четвер" << endl;
        break;
    case 5:
        cout << "П'ятниця" << endl;
        break;
    case 6:
        cout << "Субота" << endl;
        break;
    case 7:
        cout << "Неділя" << endl;
        break;
    default:
        cout << "Неправильний день" << endl;
    }

   
    cout << "Цикл for:" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << "i = " << i << endl;
    }

    
    cout << "Цикл while:" << endl;
    int counter = 1;
    while (counter <= 5) {
        cout << "counter = " << counter << endl;
        counter++;
    }

    
    cout << "Цикл do-while:" << endl;
    int number = 1;
    do {
        cout << "number = " << number << endl;
        number++;
    } while (number <= 5);

    return 0;
}
 

// Task 2 


#include <iostream>
using namespace std;

int main() {
    int number;


    cout << "Enter number: ";
    cin >> number;


    if (number % 2 == 0) {
        cout << "Number " << number << " even" << endl;
    }
    else {
        cout << "Number " << number << " not even" << endl;
    }

    switch (number % 2) {
    case 0:
        cout << "Number " << number << " even ( switch)." << endl;
        break;
    case 1:
    case -1:  
        cout << "Number " << number << " not even ( switch)." << endl;
        break;
    default:
        cout << "Unknown error" << endl;
    }

    
    cout << "Checking numbers from 1 to 10 through a for loop:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            cout << "Number " << i << " even" << endl;
        }
        else {
            cout << "Number " << i << " not even" << endl;
        }
    }

    
    int counter = 1;
    cout << "Checking the numbers from 1 to 5 through a while loop:" << endl;
    while (counter <= 5) {
        if (counter % 2 == 0) {
            cout << "Number" << counter << " even" << endl;
        }
        else {
            cout << "Number" << counter << " not even" << endl;
        }
        counter++;
    }

    return 0;
}

//Task 3

#include <iostream>
using namespace std;

int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        
        count += num & 1;
       
        num >>= 1;
    }
    return count;
}

int main() {
    int number;
    cout << "Enter number ";
    cin >> number;

    int setBits = countSetBits(number);
    cout << "The number of unit bits in the number " << number << ": " << setBits << endl;

    return 0;
}

//Task 4

#include <iostream>
using namespace std;

bool isBitSet(int num, int position) {
    
    return (num & (1 << position)) != 0;
}

int main() {
    int number, pos;

    
    cout << "Enter number: ";
    cin >> number;
    cout << "Enter the bit position to check (starting at 0): ";
    cin >> pos;

   
    if (isBitSet(number, pos)) {
        cout << "Bit in position " << pos << " installed (1)." << endl;
    }
    else {
        cout << "Bit in position " << pos << " not installed (0)." << endl;
    }

    return 0;
}
