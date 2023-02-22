#include <iostream>
#include <cmath>

using namespace std;

double area_circle(int radius);
int area_rectangle(int length, int width);
int area_square(int side);
double area_triangle(int base, int height);

double area_circle(int radius) {
    return M_PI * radius * radius;
}

int area_rectangle(int length, int width) {
    return length * width;
}

int area_square(int side) {
    return side * side;
}

double area_triangle(int base, int height) {
    return 0.5 * base * height;
}

int main() {
  int choice;
  while (true) {
    cout << "Select a shape to calculate area: " << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Square" << endl;
    cout << "4. Triangle" << endl;
    cout << "5. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 5) {
        break;
    }
    switch (choice) {
        case 1: {
          int radius;
          cout << "Enter the radius of the circle: ";
          cin >> radius;
          double area = area_circle(radius);
          cout << "Area of the circle is: " << area << endl;
          break;
        }
        case 2: {
          int length, width;
          cout << "Enter the length and width of the rectangle: ";
          cin >> length >> width;
          int area = area_rectangle(length, width);
          cout << "Area of the rectangle is: " << area << endl;
          break;
        }
        case 3: {
          int side;
          cout << "Enter the side of the square: ";
          cin >> side;
          int area = area_square(side);
          cout << "Area of the square is: " << area << endl;
          break;
        }
        case 4: {
          int base, height;
          cout << "Enter the base and height of the triangle: ";
          cin >> base >> height;
          double area = area_triangle(base, height);
          cout << "Area of the triangle is: " << area << endl;
          break;
        }
        default:
          cout << "Invalid choice. Please try again." << endl;
    }
  }
  return 0;
}