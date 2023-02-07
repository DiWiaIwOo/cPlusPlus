#include <iostream>
#include <cmath>

using namespace std;

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 == 0) {
        cout << "Cannot divide by zero." << endl;
    return 0;
    }
    
return num1 / num2;
}

double exponent(double num1, double num2) {
    return pow(num1, num2);
}

int main() {
double num1, num2;
int choice;
bool running = true;

while(running) {
    cout << "Calculator Menu" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exponent" << endl;
    cout << "6. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter two numbers(num1 + num2): ";
            cin >> num1 >> num2;
            cout << "The answer is: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Enter two numbers(num1 - num2): ";
            cin >> num1 >> num2;
            cout << "The answer is: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Enter two numbers(num1 * num2): ";
            cin >> num1 >> num2;
            cout << "The answer is: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Enter two numbers(num1 / num2): ";
            cin >> num1 >> num2;
            cout << "The answer is: " << divide(num1, num2) << endl;
            break;
        case 5:
            cout << "Enter two numbers(num1 ^ num2): ";
            cin >> num1 >> num2;
            cout << "The answer is: " << exponent(num1, num2) << endl;
            break;
        case 6:
            running = false;
            break;
        default:
            cout << "Cannot operate." << endl;
        }
    }

    return 0;
}