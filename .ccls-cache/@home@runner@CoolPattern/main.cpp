#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  for (int row = 0; row < num; row++) {

    // print space
    for (int col = 0; col < row; col++) {
      cout << " ";
    }

    // pritn star
    for (int col = 0; col < num - row; col++) {
      cout << "* ";
    }

    // print space
    for (int col = 0; col < row; col++) {
      cout << " ";
    }
    cout << endl;
  }
}