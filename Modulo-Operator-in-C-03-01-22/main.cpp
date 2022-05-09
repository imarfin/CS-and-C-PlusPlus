#include <iostream>
using namespace std;

// in C++ "0" means false

int main() {
  // std::cout << "Hello World!\n";
  int x;
  cout << "enter a number: ";
  cin >> x;
  if (x % 2 == 0) {
    x = x + 1;
  } else {
    x = x + 2;
  }
  return 0;
}

// int main (){

//   int x;
//   x = 20;

//   cout << "Please enter your age: ";

//   cin>>x;

//   if(cin.good(cin = x)){
//   cout << "Than You" << endl;
//   cout << "You entered" << x << endl;
//   } else {
//   cout << "Your input is invalid" << endl;
//   cout << "Your input is invalid" << x <endl;

//   }

return 0;
}
