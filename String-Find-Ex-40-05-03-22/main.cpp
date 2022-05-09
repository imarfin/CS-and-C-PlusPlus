#include <iostream>
#include <string>
using namespace std;



//ex-40

int main() {

  string myString;
  
  myString = "CS172-Computer ScienceI!";
  
  cout << myString.find('e') << endl;

  for (int i = 0; i < myString.length(); i++) {
    if(myString.at(i) == 'e') {
      cout << i << endl;
    }
  }
}