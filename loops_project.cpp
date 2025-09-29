#include <iostream>
#include <string>
using namespace std;

// Function declarations
void factorialCalculator();
void numberPyramid();
void sumEvenOdd();
void reverseString();

int main() {
    int choice;

    do {
        cout << "\n========= Interactive Utility Program =========\n";
        cout << "1. Factorial Calculator\n";
        cout << "2. Number Pyramid\n";
        cout << "3. Sum of Even or Odd Numbers\n";
        cout << "4. Reverse a String\n";
        cout << "5. Exit\n";
        cout << "==============================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: factorialCalculator(); break;
            case 2: numberPyramid(); break;
            case 3: sumEvenOdd(); break;
            case 4: reverseString(); break;
            case 5: cout << "Goodbye! Thanks for using the program.\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}

// Factorial Calculator (while loop)
void factorialCalculator() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 1;
    long long factorial = 1;

    while (i <= n) {
        factorial *= i;
        i++;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;
}

// Number Pyramid (for loop + nested loops)
void numberPyramid() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // print numbers
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
}

// Sum of Even or Odd Numbers (do-while loop)
void sumEvenOdd() {
    int choice, n;
    cout << "Choose (1 = Even, 2 = Odd): ";
    cin >> choice;
    cout << "Enter an upper limit: ";
    cin >> n;

    int sum = 0;
    int i = 1;

    do {
        if (choice == 1 && i % 2 == 0) sum += i;
        if (choice == 2 && i % 2 != 0) sum += i;
        i++;
    } while (i <= n);

    if (choice == 1)
        cout << "Sum of even numbers up to " << n << " is: " << sum << endl;
    else
        cout << "Sum of odd numbers up to " << n << " is: " << sum << endl;
}

// Reverse a String (while loop)
void reverseString() {
    string str;
    cout << "Enter a string: ";
    cin.ignore(); // clear buffer
    getline(cin, str);

    int i = str.length() - 1;

    cout << "Reversed string: ";
    while (i >= 0) {
        cout << str[i];
        i--;
    }
    cout << endl;
}