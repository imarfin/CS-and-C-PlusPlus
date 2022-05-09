#include <iostream>
#include <string>
#include <vector>
using namespace std;

// lecture - 11

int main() {

  string myString;

  cout << "Enter your name : ";

  getline(cin, myString);

  cout << "The size is " << myString.size() << endl;

  cout << myString << endl;

  for (int i = 0; i < myString.length(); i++) {

    cout << myString.at(i) << "-";
  }

  int index = 0;

  while (index < myString.length()) {

    cout << myString.at(index) << "-";

    index = index + 2;
  }

cout << name.length() << endl;

cout << name.at(name.size()-1) << endl;
}

// ex-37
int main() {
  
  string myString = "Cracking the coding interview!";
  
  for (int i = 0; i < myString.length(); i++) {

    cout << myString.at(i) << " ";
  
    }
}

ex-38 
int main() {
  
  string name;
 
  cout << "Enter your first and last name : " << endl;
  
  getline(cin, name);

  cout << "Name: " << name << endl;
  
  
}

// ex-39
int main() {
  
  string myString = "CS172 - Computer Science I!";

  // myString.at(0) = 'c';

  myString.at(myString.length() - 1) = '?';

  cout << myString;
 
  
}

What is the output of the following program?
ans: c

int main(){

  string myString = "computer science";
  vector<char> list;
  char letter;
  letter = 'c';
  for (int i = 0; i < myString.length() ; i++) {
    if(myString.at(i) == letter) {
      list.push_back(myString.at(i));
      
    }
  }
  cout << list.front() << endl;
  
}

What is the output of the following program?

ans - 3

int main () {

  string myString = "computer science";
  char letter;
  int x = 0;
  letter = 'c';

  for (int i = 0; i < myString.length(); i++)
    if (myString.at(i) == letter) {
      x++;
    }
  cout << x << endl;
}


What is the output of the program?
ans - 

int main() {

  string myString = "computer science";
  char letter;
  int spot;
  cout << "Enter a character to find: ";
  cin >> letter;
  spot = (int)myString.find(letter);

  if(spot == sting::npos){
    cout << "character not found";
  } else {
    cout << "character is found at positon" << spot <<endl;
  }
}


What is the output of the program?
ans: 0, 10, 14 
int main() {

string myString = "computer science";
char letter;
letter = 'c';
for (int i = 0; i < myString.length(); i++) {
  if( myString.at(i) == letter) {
  cout << i << endl;
    
    }
  }
  
}
