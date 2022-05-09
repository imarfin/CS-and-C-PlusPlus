
#include <iostream>
using namespace std;

int main() {
cout << "\t\t\t\t\t\t\t\t\t\t**** Home Work - 2 - Sumitted By Shah Arfin *****"<< endl;
cout << "" <<endl;

  //declearing varriables
  double studentOne, studentTwo, studentThree, studentFour;
  double studentFive, studentSix, studentSeven, studentEight;

  // getting student score input and validating the input
    cout << "Please enter a score for student one: ";
    cin >> studentOne;
      if (studentOne<0 || studentOne>=150 || cin.good() == false){
        cout << " This is invalid score! Try again "<<endl;
        cin >> studentOne;
        return 0;
    } 

    cout << "Please enter a score for student two: ";
    cin >> studentTwo;
        if (studentTwo<0 || studentTwo>=150 || cin.good() == false){
          cout << " This is invalid score! Try again "<<endl;
          return 0;
      } 

    cout << "Please enter a score for student three: ";
    cin >> studentThree;
        if (studentOne<0 || studentThree>=150 || cin.good() == false){
          cout << " This is invalid score! Try again "<<endl;
          return 0;
      } 

    cout << "Please enter a score for student four: ";
    cin >> studentFour;
        if (studentFour<0 || studentFour>=150 || cin.good() == false){
          cout << " This is invalid score! Try again "<<endl;
          return 0;
      } 
    
    cout << "Please enter a score for student five: ";
    cin >> studentFive;
        if (studentOne<0 || studentOne>=150 || cin.good() == false){
          cout << " This is invalid score! Try again "<<endl;
          return 0;
      }
  
    cout << "Please enter a score for student six: ";
    cin >> studentSix;
        if (studentSix<0 || studentSix>=150 || cin.good() == false){
          cout << " This is invalid score! Try again "<<endl;
          return 0;
      } 

    cout << "Please enter a score for student seven: ";
    cin >> studentSeven;
        if (studentSeven<0 || studentSeven>=150 || cin.good() == false){
          cout << " This is invalid score! Try again "<<endl;
          return 0;
      } 

    cout << "Please enter a score for student eight: ";
    cin >> studentEight;
        if (studentEight<0 || studentEight>=150 || cin.good() == false){
          cout << " This is invalid score! Try again "<<endl;
          return 0;
      }

 
//caltulating student score percentages:
  
    studentOne = 140.50*2/3; 
    studentTwo = (studentOne/2.00)*2/3;   //Half of the score of studentOne
    studentThree = (studentOne - 20)*2/3; //20 points less than studentOne
    studentFour = (studentOne/3.00)*2/3; //One third of the score of studentOne
    studentFive = (studentFour + 100)*2/3; //100 more than studentFour
    studentSix = (studentFour + studentTwo)*2/3; //Scores of studentTwo and studentFour combined.
    studentSeven = (studentSix + 15)*2/3; //15 points more than studentSix
    studentEight = 150.00*2/3; //A perfect score of 150.00
        
     cout <<"Student one score percentage: " <<studentOne<<endl;
     cout <<"Student Two score percentage: " <<studentTwo<<endl;
     cout <<"Student Three score percentage: " <<studentThree<<endl;
     cout <<"Student Four score percentage: " <<studentFour<<endl;
     cout <<"Student Five score percentage: " <<studentFive<<endl;
     cout <<"Student Six score percentage: " <<studentSix<<endl;
     cout <<"Student Seven score percentage: " <<studentSeven<<endl;
     cout <<"Student Eight score percentage: " <<studentEight<<endl;     


// calculating letter grade based on studen score
   
  // char studentOneGrade, studentTwoGrade, studentThreeGrade, studentFourGrade;
  // char studentFiveGrade, studentSixGrade, studentSevenGrade, studentEightGrade;
  // A = 90.00 – 100.00
  // B = 80.00 – 89.99
  // C = 70.00 – 79.99
  // D = 60.00 – 69.99
  // F = 00.00 – 59.99

    //One
    cout << "Enter student one score for grade:  " <<endl;
    cin >> studentOne;
      if (studentOne > 90.00 || studentOne <=100.00){
        cout << 'A';
      } else if (studentOne> 80.00 || studentOne <=89.99){
        cout << 'B';
      } else if (studentOne> 70.00 || studentOne <=79.99) {
        cout << 'C';
      } else if (studentOne> 60.00 || studentOne <=69.99) {
        cout << 'D';
      } else if (studentOne> 00.00 || studentOne <=59.99){
        cout << 'F';
      }   

    // Two
    cout << "Enter student two score for grade:  " <<endl;
    cin >> studentTwo;
      if (studentTwo > 90.00 || studentTwo <=100.00){
        cout << 'A';
      } else if (studentTwo> 80.00 || studentTwo <=89.99){
        cout << 'B';
      } else if (studentTwo> 70.00 || studentTwo <=79.99) {
        cout << 'C';
      } else if (studentTwo> 60.00 || studentTwo <=69.99) {
        cout << 'D';
      } else if (studentTwo> 00.00 || studentTwo <=59.99){
        cout << 'F';
      }   

    //Three
    cout << "Enter student three score to get the grade:  " <<endl;
    cin >> studentThree;
      if (studentThree > 90.00 || studentThree <=100.00){
        cout << 'A';
      } else if (studentThree> 80.00 || studentThree <=89.99){
        cout << 'B';
      } else if (studentThree> 70.00 || studentThree <=79.99) {
        cout << 'C';
      } else if (studentThree> 60.00 || studentThree <=69.99) {
        cout << 'D';
      } else if (studentOne> 00.00 || studentThree <=59.99){
        cout << 'F';
      }   

    // Four
    cout << "Enter student Four score to get the grade:  " <<endl;
    cin >> studentFour;
    if (studentFour > 90.00 || studentFour <=100.00){
        cout << 'A';
      } else if (studentFour> 80.00 || studentFour <=89.99){
        cout << 'B';
      } else if (studentFour > 70.00 || studentFour <=79.99) {
        cout << 'C';
      } else if (studentFour > 60.00 || studentFour  <=69.99) {
        cout << 'D';
      } else if (studentFour > 00.00 || studentFour  <=59.99){
        cout << 'F';
      }   

    // Five
    cout << "Enter student Four score to get the grade:  " <<endl;
    cin >> studentFive;
    if (studentFive > 90.00 || studentFive <=100.00){
        cout << 'A';
      } else if (studentFive> 80.00 || studentFive <=89.99){
        cout << 'B';
      } else if (studentFive > 70.00 || studentFive <=79.99) {
        cout << 'C';
      } else if (studentFive> 60.00 || studentFive <=69.99) {
        cout << 'D';
      } else if (studentFive > 00.00 || studentFive  <=59.99){
        cout << 'F';
      }   
    
    // Six
    cout << "Enter student Four score to get the grade:  " <<endl;
    cin >> studentSix;
    if (studentSix> 90.00 || studentSix <=100.00){
        cout << 'A';
      } else if (studentSix > 80.00 || studentSix <=89.99){
        cout << 'B';
      } else if (studentSix > 70.00 || studentSix <=79.99) {
        cout << 'C';
      } else if (studentSix > 60.00 || studentSix <=69.99) {
        cout << 'D';
      } else if (studentSix > 00.00 || studentSix <=59.99){
        cout << 'F';
      }   
      
  
  // Seven
    cout << "Enter student Four score to get the grade:  " <<endl;
    cin >> studentSeven;
    if (studentSeven> 90.00 || studentSeven <=100.00){
        cout << 'A';
      } else if (studentSeven> 80.00 || studentSeven<=89.99){
        cout << 'B';
      } else if (studentSeven> 70.00 || studentSeven<=79.99) {
        cout << 'C';
      } else if (studentSeven> 60.00 || studentSeven<=69.99) {
        cout << 'D';
      } else if (studentSeven> 00.00 || studentSeven<=59.99){
        cout << 'F';
      }   

    // Eight
    cout << "Enter student Four score to get the grade:  " <<endl;
    cin >> studentEight;
    if (studentEight> 90.00 || studentEight<=100.00){
        cout << 'A';
      } else if (studentEight> 80.00 || studentEight<=89.99){
        cout << 'B';
      } else if (studentEight> 70.00 || studentEight<=79.99) {
        cout << 'C';
      } else if (studentEight> 60.00 || studentEight<=69.99) {
        cout << 'D';
      } else if (studentEight> 00.00 || studentEight<=59.99){
        cout << 'F';
      }   


// Sum of all student score:

  sum = studentOne + studentTwo + studentThree + studentFour + studentFive + studentSix + studentSeven + studentEight;

  
//output of the all results:
    cout << "Work submitted by Shah Arfin\n";
    cout << "*****************************************" <<endl;
    cout << "Student \t\t" << "Score \t" << "Percentage\t" << "Grade \t\n";
    cout << "*****************************************" <<endl;
    cout << "studentOne\t\t" << studentOne << "\t" << studentOne*2/3 << "\t\t" << letterGradeOne << endl;
    cout << "studentTwo\t\t" << studentTwo << "\t" << studentTwo*2/3 << "\t\t" << letterGradeTwo << endl;
    cout << "studentThree\t" << studentThree << "\t" << studentThree*2/3 << "\t\t"<< letterGradeThree << endl;
    cout << "studentFour\t\t" << studentFour << "\t" << studentFour*2/3 << "\t\t"<< letterGradeFour << endl;
    cout << "studentFive\t\t" << studentFive << "\t" << studentFive*2/3 << "\t\t"<< letterGradeFive << endl;
    cout << "studentSix\t\t" << studentSix << "\t" << studentSix*2/3 << "\t\t"<< letterGradeSix << endl;
    cout << "studentSeven\t" << studentSeven << "\t" << studentSeven*2/3 << "\t\t"<< letterGradeSeven << endl;
    cout << "studentEight\t" << studentEight << "\t\t" << studentEight*2/3 << "\t\t\t"<< letterGradeEight << endl;
    cout << "*****************************************" <<endl;
    cout << "Sum score of all students is " << sum << endl;
    cout << "Average score of all students is " << sum/8 << endl;
    return 0;
  
}
