#include<iostream>
using namespace std;

int main() {
    cout <<"I will now count my chickens. \n";

    cout <<"Hens " << (25 + 30 / 6) << "\n";
    cout << "Roosters " << (100 - 25 * 3 % 4) << "\n";
    cout << "Now I will count the eggs:" << "\n";
    cout << 3 + 2 + 1 - 5 + 4 % 2 - 1 / 4 + 6 << "\n";
    cout << "Is it true that 3 + 2 < 5 - 7?" << "\n";
    cout << (3 + 2 < 5 - 7) << "\n";
    cout << "What is 3 + 2? " << (3 + 2) << "\n";
    cout << "What is 5 - 7? " << (5 - 7) << "\n";
    cout << "Oh, that's why it's false." << "\n";
    cout << "How about some more." << "\n";
    cout << "Is it greater? " << (5 > -2) << "\n";
    cout << "Is it greater or equal? " << (5 >= -2) << "\n";
    cout << "Is it less or equal? " << (5 <= -2) << "\n";

    return 0;
}