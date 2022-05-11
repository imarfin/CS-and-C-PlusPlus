#include <iostream>
#include <vector>
using namespace std;

int main() {

  int randomNumber = 0;
  int choice;
  srand(time(NULL));

  randomNumber = rand() % 50 + 1;
  cout << "Random NUmber: " << randomNumber << endl;

  cout << "********************************" <<endl;

  do {
    cout << "Enter a number between 01-99: " << endl;
    cin >> choice;

    if (choice > randomNumber) {
      cout << "Try again. make it lower!" << endl;
    } else if (choice < randomNumber) {
      cout << "Try again. make it higher!" << endl;
    } else {
      cout << "Congrats! you got it." << endl;
    }

  } while (choice != randomNumber);
}