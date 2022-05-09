#include <iostream>
using namespace std;

int main() {

  int x = 0;
  int y = 0;
  int z = 0;

  cout << "Please enter a value for x: " << endl;
  cin >> x;
  cout << "Please enter a value for y: " << endl;
  cin >> y;
  cout << "Please enter a value for z: " << endl;
  cin >> z;

  cout << "Sum is: " << x + y + z << endl;
  cout << "Average is: " << ( x + y + z) / 3 << endl;


  
  return 0;
  }