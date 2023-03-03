#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("evan_ilovecoding.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough! No. No.";

  // Close the file
  MyFile.close();
}