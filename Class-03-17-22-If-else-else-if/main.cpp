#include <iostream>
using namespace std;

int main() {

  int x;
  cout << "Please enter a number (0-100): ";
  cin >> x;
  if (x <= 60) {
    cout << "Your score: " << x << " Your result: fail";
  } else if (x >= 60 || x <= 69) {
    cout << "Your score: " << x << " Your result: Needs work" << endl;
  } else if (x >= 70 || x <= 79) {
    cout << "Your score: " << x << " Your result: Needs Work" << endl;
  } else if (x >= 80 || x <= 89) {
    cout << "Your score: " << x << " Your result: Satisfactory" << endl;
  } else if (x >= 90 || x <= 100) {
    cout << "Your score: " << x << " Your result: Excellent" << endl;
  } else {
    cout << "Invalid Input";
  }

  return 0;
}