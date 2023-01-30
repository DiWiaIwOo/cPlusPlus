#include <iostream>
using namespace std;

int main() {
  int choice1, choice2, choice3;

  cout << "ADVENTURE GAME" << endl;
  cout << "-" << endl;
  cout << "You find yourself in a dark room. There are two doors, one on the left and one on the right, " << endl;
  cout << "which one do you choose? (enter 1 for left or 2 for right " << endl;
  cin >> choice1;

  if(choice1 == 1) {
    cout << "You enter a room and a key is on the floor." << endl;
    cout << "Do you take the key or leave it? (enter 1 for take or 2 for leave " << endl;
    cin >> choice2;

    if(choice2 == 1) {
      cout << "You saw a chest on the floor in the room, " << endl;
      cout << "Do you open the chest? (enter 1 for yes 2 for no " << endl;
      cin >> choice3;

      if(choice3 == 1) {
        cout << "You found treasure, however, toxic chemicals spreaded inside the room when you opened the chest. " << endl;
        cout << "You died💀." << endl;
      } else if(choice3 == 2) {
        cout << "You walked away peacefully and unharmed. " << endl;
        cout << "You win for playing safe. " << endl;
      } else {
        cout << "bruh enter a valid input next time, you died. " << endl;
      }
    }
  } else if(choice2 == 2) {
    cout << "You slipped on a bananna and died. " << endl;
  } else {
    cout << "bruh enter a valid input next time, you died. " << endl;
  }
  return 0;
}