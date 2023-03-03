#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    const int ARRAY_SIZE = 1000;
    int arr[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 90 + 10;
    }

    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << arr[i] << " ";
        if ((i + 1) % 20 == 0) {
            cout << endl;
        }
    }

    return 0;
}