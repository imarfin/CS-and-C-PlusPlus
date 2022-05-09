/*
Shah Arfin
homework#3
CS-172
*/

#include <iomanip>
#include <iostream>
using namespace std;

/*
(1) Create a function to prompt a user for input. Within that function, it
should validate if the score entered is a valid number (using cin.good() or
cin.fail()) and falls between 0-150 or not.
(2) Create another function to determine a letter for each score (in
percentage). Then call thefunction instead of writing several if…else statements
in the main().
(3) What would you need to do if we were to
accept any number of students? As you can see, the number of students is now
fixed at eight. Explain if this can be done or not, why or why not?
*/

// function declaration
double promptInput(int studentNo);
char getLetterGrade(double percentScore);

int main() {

  // Declaration of eight variables of double datatype
  double studentOne, studentTwo, studentThree, studentFour, studentFive,
      studentSix, studentSeven, studentEight;

  // Declaration of eight variables of char datatype
  char letterGradeOne, letterGradeTwo, letterGradeThree, letterGradeFour,
      letterGradeFive, letterGradeSix, letterGradeSeven, letterGradeEight;

  // Percentage of Score
  double percentScoreOne, percentScoreTwo, percentScoreThree, percentScoreFour,
      percentScoreFive, percentScoreSix, percentScoreSeven, percentScoreEight;

  cout << "Please enter a score for student1: " << endl;
  cin >> studentOne;

  promptInput(studentOne);
  cout << "Student1 score is: " << promptInput(studentOne) << endl;

  getLetterGrade(studentOne);
  cout << "Student1 Grade is: " << getLetterGrade(studentOne) << endl;

  return 0;
}

double promptInput(int studentNo) {

  double studentOne, studentTwo, studentThree, studentFour, studentFive,
      studentSix, studentSeven, studentEight;

  char letterGradeOne, letterGradeTwo, letterGradeThree, letterGradeFour,
      letterGradeFive, letterGradeSix, letterGradeSeven, letterGradeEight;

  double percentScoreOne, percentScoreTwo, percentScoreThree, percentScoreFour,
      percentScoreFive, percentScoreSix, percentScoreSeven, percentScoreEight;

  while (cin.good() == false || studentNo < 0 || studentNo > 150) {
    cout << "That's incorrect input. Try again!";
    cin.clear();
    cin.ignore(10000, '\n');
  }
  return 0;
}

char getLetterGrade(double percentScore) {

  double studentOne, studentTwo, studentThree, studentFour, studentFive,
      studentSix, studentSeven, studentEight;

  char letterGradeOne, letterGradeTwo, letterGradeThree, letterGradeFour,
      letterGradeFive, letterGradeSix, letterGradeSeven, letterGradeEight;

  double percentScoreOne, percentScoreTwo, percentScoreThree, percentScoreFour,
      percentScoreFive, percentScoreSix, percentScoreSeven, percentScoreEight;

  // Calculate the score in percentage for each student
  percentScoreOne = studentOne * 2 / 3;
  percentScoreTwo = studentTwo * 2 / 3;
  percentScoreThree = studentThree * 2 / 3;
  percentScoreFour = studentFour * 2 / 3;
  percentScoreFive = studentFive * 2 / 3;
  percentScoreSix = studentSix * 2 / 3;
  percentScoreSeven = studentSeven * 2 / 3;
  percentScoreEight = studentEight * 2 / 3;

  // Determine the letter grade for each student
  if (percentScoreOne > 89.99) {
    letterGradeOne = 'A';
  } else if (percentScoreOne > 79.99) {
    letterGradeOne = 'B';
  } else if (percentScoreOne > 69.99) {
    letterGradeOne = 'C';
  } else if (percentScoreOne > 59.99) {
    letterGradeOne = 'D';
  } else {
    letterGradeOne = 'F';
  }

  if (percentScoreTwo > 89.99) {
    letterGradeTwo = 'A';
  } else if (percentScoreTwo > 79.99) {
    letterGradeTwo = 'B';
  } else if (percentScoreTwo > 69.99) {
    letterGradeTwo = 'C';
  } else if (percentScoreTwo > 59.99) {
    letterGradeTwo = 'D';
  } else {
    letterGradeTwo = 'F';
  }

  if (percentScoreThree > 89.99) {
    letterGradeThree = 'A';
  } else if (percentScoreThree > 79.99) {
    letterGradeThree = 'B';
  } else if (percentScoreThree > 69.99) {
    letterGradeThree = 'C';
  } else if (percentScoreThree > 59.99) {
    letterGradeThree = 'D';
  } else {
    letterGradeThree = 'F';
  }

  if (percentScoreFour > 89.99) {
    letterGradeFour = 'A';
  } else if (percentScoreFour > 79.99) {
    letterGradeFour = 'B';
  } else if (percentScoreFour > 69.99) {
    letterGradeFour = 'C';
  } else if (percentScoreFour > 59.99) {
    letterGradeFour = 'D';
  } else {
    letterGradeFour = 'F';
  }

  if (percentScoreFive > 89.99) {
    letterGradeFive = 'A';
  } else if (percentScoreFive > 79.99) {
    letterGradeFive = 'B';
  } else if (percentScoreFive > 69.99) {
    letterGradeFive = 'C';
  } else if (percentScoreFive > 59.99) {
    letterGradeFive = 'D';
  } else {
    letterGradeFive = 'F';
  }

  if (percentScoreSix > 89.99) {
    letterGradeSix = 'A';
  } else if (percentScoreSix > 79.99) {
    letterGradeSix = 'B';
  } else if (percentScoreSix > 69.99) {
    letterGradeSix = 'C';
  } else if (percentScoreSix > 59.99) {
    letterGradeSix = 'D';
  } else {
    letterGradeSix = 'F';
  }

  if (percentScoreSeven > 89.99) {
    letterGradeSeven = 'A';
  } else if (percentScoreSeven > 79.99) {
    letterGradeSeven = 'B';
  } else if (percentScoreSeven > 69.99) {
    letterGradeSeven = 'C';
  } else if (percentScoreSeven > 59.99) {
    letterGradeSeven = 'D';
  } else {
    letterGradeSeven = 'F';
  }

  if (percentScoreEight > 89.99) {
    letterGradeEight = 'A';
  } else if (percentScoreEight > 79.99) {
    letterGradeEight = 'B';
  } else if (percentScoreEight > 69.99) {
    letterGradeEight = 'C';
  } else if (percentScoreEight > 59.99) {
    letterGradeEight = 'D';
  } else {
    letterGradeEight = 'F';
  }

  return 0;

  /*
  (3) What would you need to do if we were to accept any number of students? As
  you can see, the number of students is now fixed at eight. Explain if this can
  be done or not, why or why not?


  Anaswer:

    In this homework we have declared the yate and and spacified the varriables
  for eight students. However, To Accept any number of students we need to
  declare a same data type array.

    Arrays are used to store multiple values in a single variable, instead of
  declaring separate variables for each value.

    To declare an array, define the variable type, specify the name of the array
  followed by square brackets and specify the number of elements it should
  store:

  for example:

  int studentsNo[100];

  */
}