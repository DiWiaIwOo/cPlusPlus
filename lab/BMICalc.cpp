#include <iostream>
using namespace std;

int main() {
    double height, weight;

    cout << "Your height in m: ";
    cin >> height;
    cout << "Your weight in kg: ";
    cin >> weight;

    double bmi = weight / (height * height);
    cout << "Your BMI is " << bmi << "\n";

    return 0;
}