#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    srand(time(nullptr));

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 50 + 1;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int num;
    cout << "Enter an integer: ";
    cin >> num;

    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == num) {
            found = true;
            cout << num << " is present in the array at index " << i << endl;
        }
    }

    if (!found) {
        cout << num << " is not present in the array." << endl;
    }

    return 0;
}