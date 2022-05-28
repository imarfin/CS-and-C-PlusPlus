#include <iostream>
#include <vector>
using namespace std;

// ---> 05/17/2022 Class

int main() {

  int randomNumber = 0;
  int choice;
  char retry;
  srand(time(NULL));

  randomNumber = rand() % 50 + 1;
  cout << "Random NUmber: " << randomNumber << endl;

  cout << "********************************" << endl;

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

  } while (choice != randomNumber && choice > 0);

   cout << endl;
  cout << "Would you like to play again?" << endl
       << "Y-(for yes) or  N - (No)" << endl;
  cin >> retry;
  if (retry == 'Y') {
    cout << endl << endl;
    return main();
  } else {
    return 0;
  }
}


  

  //  cout << "Enter a number of players (1-3):";
  // cin >> x;
  // while (cin.good() == false || x < 1 || x > 3) {
  //   cout << "Incorrect player numbers" << endl;
  //   cin.clear();
  //   cin.ignore(10000, '\n');
  //   cout << "Enter a number of players (1-3):";
  //   cin >> x;
  // }

  // for (int i = 0; i <= 10; i++) {
  //   int z = i;
  //   cout << "Player No " << z % x+1 << endl;
  //   cout << "Guess (a-z): ";
  //   char y;
  //   cin >> y;
  //   if (cin.good() == false || y < 'a' || y > 'z') {
  //     cout << "That's incorrect input. Try again!" << endl;
  //     i=i-1;
  //     cin.clear();
  //     cin.ignore(10000, '\n');
  //   } else {
  //     // cout << "Player No " << z % x << endl;
  //   }
  // }
//   cout << endl;
//   cout << "Would you like to play again?" << endl
//        << "Y-(for yes) or  N - (No)" << endl;
//   cin >> retry;
//   if (retry == 'Y') {
//     cout << endl << endl;
//     return main();
//   } else {
//     return 0;
//   }
// }

