
#include <iostream>
using namespace std;

int main() {
  
  double weight;
  double height;
  double BMI;

  cout << "Please Enter your weight in Pounds :\n";
  cin >> weight;
  cout << "Please Enter your Height in Inches :\n";
  cin >> height;

  BMI = (weight * 703) / (height * height);

  std::cout << "Your BMI is : " << BMI << endl;

  return 0;
}