#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void credits();
char randchar();
void counter(int start, int stop);
int abso(int value);

int main() {
    srand(time(0));
    
    cout << "Watch as we demonstrate functions.\n\n";
    
    cout << "I'm going to get a random character from A-Z\n";
    char c = randchar();
    cout << "The character is: " << c << endl;

    cout << "\nNow let's count from -10 to 10\n";
    int begin = -10, end = 10;
    counter(begin, end);
    cout << "\nHow was that?\n";

    cout << "\nNow we take the absolute value of a number.\n";
    int x = -10, y = 99;
    y = abso(x);
    cout << "|" << x << "| = " << y << endl;

    cout << "\nThat's all. This program has been brought to you by:\n";
    credits();

    return 0;
}

void credits() {
    cout << endl;
    cout << "programmed by Graham Mitchell" << endl;
    cout << "modified by [Evan Lin]" << endl;
    cout << "This code is distributed under the terms of the standard BSD license. ";
    cout << "Do with it as you wish." << endl;
}

char randchar() {
    int numval;
    char charval;

    numval = rand() % 26;
    charval = 'A' + numval;

    return charval;
}

void counter(int start, int stop) {
    int ctr = start;
    while (ctr <= stop)
    {
        cout << ctr << " ";
        ctr = ctr + 1;
    }
}

int abso(int value) {
    int absval;

    if (value < 0)
        absval = -value;
    else
        absval = value;

    return absval;
}