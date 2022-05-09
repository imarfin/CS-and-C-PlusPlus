#include <iostream>>
#include <vector>
using namespace std;

// ex - 33
int main() {

  vector<int> myVec = {1, 2, 3, 4, 5};

  myVec.push_back(6);
  myVec.push_back(7);
  myVec.push_back(8);
  myVec.push_back(9);
  myVec.push_back(10);
}

// ex - 34
int main() {

  vector<int> myVec;

  for (int i = 1; i < 11; i++) {

    myVec.push_back(i);
  }

  cout << "size: " << myVec.size() << endl;

  for (int i = 0; i < myVec.size(); i++) {
    cout << myVec.at(i) << " ";
  }
}

// ex - 35

int main() {

  // vector<char> myVector;

  vector<char> myVector = {'H', 'e', 'l', 'l', 'o', ' ',
                           'W', 'o', 'r', 'l', 'd', '!'};

  cout << "First element is: " << myVector.front() << endl;
  cout << "Last element is: " << myVector.back() << endl;
  cout << "Last element is " << myVector[myVector.size() - 1] << endl;

  cout << "Second to last element is: " << myVector.at(myVector.size() - 2)
       << endl;
}
