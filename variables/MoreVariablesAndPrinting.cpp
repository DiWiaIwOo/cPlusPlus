#include <iostream>
using namespace std;

int main() {
    string myName, myEyes, myTeeth, myHair;
    int myAge, myHeight, myWeight;

    myName = "Evan Lin";
    myAge = 15;
    myHeight = 176;
    myWeight = 52;
    myEyes = "black";
    myTeeth = "white";
    myHair = "black";

    cout << "Let's talk about " + myName + ". \n";
    cout << "He's " << myWeight << " kgs. \n";
    cout << "He's " << myHeight << "cms tall. \n";
    cout << "He's got " + myEyes + " eyes and " + myHair + " hair. \n";
    cout << "His teeth are usually " + myTeeth + " depending on the coffee. \n";

    cout << "If I add " << myAge << ", " << myHeight << ", and " << myWeight << ", I get " << (myAge + myHeight + myWeight) << ". \n";
}