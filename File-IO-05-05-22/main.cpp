
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ifstream inFile;
  
  string line;
  
  inFile.open("example.txt");
  
  if (inFile.is_open()) {
   
    inFile >> line;
    
    cout << line << endl;
  
    } else {
    
    cout << "Failed to the file! Please Try again";
  }
  
  inFile.close();
  
  return 0;
}

// int main() {

//  ifstream inFile;

//  string x = "test";

// ofstream outFile;

// cout << "x is " << x << endl;

// inFile.open("example.txt");

// if (inFile.is_open()){

//  getline(inFile,x);

//  cout << "x is " << x << endl;

//  getline(inFile,x);

//  cout << "x is " << x << endl;

//  getline(inFile,x);

//  cout << "x is " << x << endl;

//  getline(inFile,x);

//  cout << "x is " << x << endl;

// } else {

//  cout << "Sorry! There's something wrong!!" << endl;

// }

// inFile.close();

// outFile.open("example3.txt");

// outFile.close();

// }

// int main() {

//  ifstream inFile;

//  string x = "test";

//  // ofstream outFile;

//  cout << "x is " << x << endl;

//  inFile.open("firstString.txt");

//  if (inFile.is_open()){

//   getline(inFile,x);

//   cout << "x is " << x << endl;

//   getline(inFile,x);

//   cout << "x is " << x << endl;

//   getline(inFile,x);

//   cout << "x is " << x << endl;

//   getline(inFile,x);

//   cout << "x is " << x << endl;

//  } else {

//   cout << "Sorry! There's something wrong!!" << endl;

//  }

//  inFile.close();

//  // outFile.open("example3.txt");

//  // outFile.close();

// }

// int main() {

//   int number = 5;

// }