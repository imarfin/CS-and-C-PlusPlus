#include <iostream>
using namespace std;

// Which of the following print out all elements of the array, separating each
// element with a space?

// int main () {

//   int myScore[] = {10, 55, 77, 23, 90};

//     for (int i = 0; i < 5 ; i++){

//         cout << myScore[i] << ' ';

//     }

//   return 0;
// }

// Which of the following increment the value of all elements of the array by
// one?

// int main() {

//     int myScore[] = {10, 55, 77, 23, 90};

//     for (int i = 0; i < 5 ; i++){

//         myScore[i]++;

//         cout << myScore[i] << endl;

//     }
//   return 0;
//}

// Which of the following change all the elements of the array to 5?

// int main() {

//   int myScore[] = {10, 55, 77, 23, 90};
//     for (int i = 0; i < 5 ; i++){
//         cout << myScore[i] + 5 << endl;
//     }
//   return 0;
// }

// // Which of the following find the smallest element of the array?
// int main() {

// int myScore[] = {10, 55, 77, 3, 90};

//     int smallest;

//     smallest = myScore[0];

//     for (int i = 0; i < 5 ; i++){

//         if (myScore[i] < smallest ){

//             smallest = myScore[i];

//         }

//     }

//     cout << smallest << endl;

//   return 0;
// }

// Exercise # 28 Create a program to print out each element, separating each
// number with a new line,  in the following array using a for loop. int
// myArray[] = {10,20,30,40,50};

//   int main() {

//     int myArray[] = {10,20,30,40,50};

//     for (int i = 0 ; i < 5 ; i++){
//         cout << myArray[i] << endl;
//     }

//     return 0;

// }

//   int main() {

//     int myArray[] = {10,20,30,40,50};

//     for (int i = 0 ; i < 5 ; i++){
//         cout << myArray[i] << endl;
//     }

//     return 0;

// }

// Exercise # 29 – Create a program to calculate the sum of all the elements in
// the following array using a for loop, then print it out to the console.

// int myArray[] = {7,3,9,10,2,1};
// int main() {

//     int sum = 0;

//     int myArray[] = {7,3,9,10,2,1};

//     for (int i = 0 ; i < 6 ; i++){

//       sum += myArray[i];

//       }

//   cout << "Sum of the array is: " << sum << endl;

//   return 0;

// }

// Exercise # 30 – Create a program to prompt the user for 6 integers. For each
// integer, store it in the following array. Then print out the first and last
// element of the array.

/*
int score[6];
 The output should look as shown:
Enter number : 1
Enter number : 2
Enter number : 3
Enter number : 4
Enter number : 5
Enter number : 6

Array : 1 2 3 4 5 6
*/

// int main() {

//   int score[6];

//   for (int i = 0; i < 6; i++) {

//     cout << "Enter number: ";

//     cin >> score[i];
//   }

//   cout << endl << "Array : ";

//   for (int i = 0; i < 6; i++) {

//     cout << score[i] << " ";
//   }

//   return 0;
// }

// Exercise # 31 – Create a program to print out the integers that are greater
// than 10 in the following array, separating each number with a new line.

// int myArray[] = {3,12,8,99,22,1,9,4,5,33};

// int main(int argc, const char *argv[]) {
  
//   int myArray[] = {3, 12, 8, 99, 22, 1, 9, 4, 5, 33};
  
//   for (int i = 0; i < 10; i++) {
    
//     if (myArray[i] > 10) {
    
//       cout << myArray[i] << endl;
    
//       }
//   }
  
//   return 0;
  
// }


// Exercise # 32 - Create a program in which an integer array named myArray is declared with a size of 10. Use a for loop to prompt the user to store a value in every index of the array. After the array is given values, output the values of the array to the screen using a for loop. Output each value of the array on its own line.


int main(){

  int myArray [10];
    
  cout << "Please Enter 10 integers: " << endl;
    
  for (int i = 0; i < 10; i++) {
        
    cin >> myArray[i];  
    
    }
    
  for (int j = 0; j < 10; j++) {
        
    cout <<  "You entered: " << myArray[j] << endl ; 
    
  }  
  cout << "Array : ";

    for (int i = 0; i < 10; i++) {

      cout << myArray[i] << " ";
  
  }  
    
  return 0;
    
}



