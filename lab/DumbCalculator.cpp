#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;
    
    cout << "What is your first number? ";
    cin >> num1;
    cout << "What is your second number? ";
    cin >> num2;
    cout << "What is your third number? ";
    cin >> num3;

    double average = (num1 + num2 + num3) / 2;
    cout << "( " << num1 << " + " << num2 << " + " << num3 << " ) / 2 is... " << average << endl;

    return 0;
}