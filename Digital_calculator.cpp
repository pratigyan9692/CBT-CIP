#include<iostream>
#include<cmath>
using namespace std;
#include <iostream>
using namespace std;
void add();
void subtract();
void multiply();
void divide();
int main() {
    int choice;
    do{
        cout << "===== Digital Calculator =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                cout << "Exiting program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        cout << endl; 
    } while (choice != 5);

    return 0;
}
void add() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Result: " << num1 + num2 << endl;
}

void subtract() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Result: " << num1 - num2 << endl;
}

void multiply() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Result: " << num1 * num2 << endl;
}

void divide() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num2 != 0)
        cout << "Result: " << num1 / num2 << endl;
    else
        cout << "Error! Division by zero is not allowed."<<endl;
}
