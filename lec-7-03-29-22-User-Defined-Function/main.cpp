#include <iostream>
using namespace std;




// void printout(int x, int y)

int main(){
    int a = 5;
    int b = 10;
    printout(a, b);

    return 0;
}

{
  void printout(int x, int y) {
    
  }

    cout << x <<" "<<" "<<" "<<y; 
}

// excersice: 23
void printStar(int size) {
  
  for (int i = size; i >=1; i--) {
    for(int j = 1; j<=i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

int main () {

  printStar(10);
  
  return 0;
}

// excersice: 24
bool isEven(int number){
  return number%2==0;
}

// int main() {
//   int x = 15;

//   cout << x << " is ";
//     if(isEven(x)) {
//       cout << "an even number";
//     } else {
//       cout << "an odd number";
//     }
//   return 0;
// }

  
//   if (number%2==0){
//     cout << number + " an even number";
//     return true
//   } else {
//     cout << number + " an odd number";
//   }
//     return 0;
  
// }


// int main () {
//   evenOddNumber(10);

// }



// excersice 25

float perimeter(float width, float length){ 
  float perimeter = 2 * width + 2 * length;
  return perimeter;
}
float area(float width, float length){
  return width * length;
}

int main() {
    float rectW;
    float rectL;

    rectW = 5.8;
    rectL = 4.0;

  cout << "The perimeter of the rectangle is " << perimeter(rectW, rectL) << endl;

  cout << "The area of the rectangle is " << area(rectW, rectL) << endl;

    return 0;

}


