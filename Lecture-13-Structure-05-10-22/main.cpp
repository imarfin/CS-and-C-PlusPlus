#include <iostream>
#include <vector>
using namespace std;

// Exercise # 44

struct Rectangle {
  float width;
  float length;
};

int main() {

  Rectangle myRectangle;
  myRectangle.width = 9.99;
  myRectangle.length = 10.99;

  cout << "x is: " << myRectangle.width << " & "
       << "y is: " << myRectangle.length << endl;
};

// Ex - 45
struct employee{

    int emplID;
    string firstname;
    string lastname;

};

int main() {

  employee aEmp;

  aEmp.firstname = "John";
  aEmp.lastname = "Doe";

  cout << aEmp.firstname << " " << aEmp.lastname << endl;

    return 0;

}

// Ex - 46
struct song {

  string song;
  string title;
  string artist;
  int year;
  string producer;
};

int main() {

  song song1, song2, song3, temp;
  vector<song> mySongs;

  song1.title = "Girls Like You";
  song1.artist = "Maroon 5";
  song1.year = 2017;
  song1.producer = "Jason Evigan";

  song2.title = "SICKO MODE";
  song2.artist = "Travis Scott";
  song2.year = 2018;
  song2.producer = "Tay Keith";

  song3.title = "7 Rings";
  song3.artist = "Ariana Grande";
  song3.year = 2019;
  song3.producer = "Tommy Brown";

  mySongs.push_back(song1);
  mySongs.push_back(song2);

  for (int i = 0; i < mySongs.size(); i++) {
    temp = mySongs.at(i);
    // cout << temp.title + " " + temp.artist + " " << temp.year << endl;
    cout << mySongs.at(i).title << " " << mySongs.at(i).artist << " "
         << mySongs.at(i).year << " " << mySongs.at(i).producer << endl;
  }
  return 0;
}

struct point {
  double x;
  double y;
};

struct Student {
  double score;
  char grade;
  string name;
  string id;
};

int main() {
  point blank;
  point origin;
  blank.x = 5.4;
  blank.y = 10.9;
  origin.x = 0.0;
  origin.y = 0.0;

  cout << "x is: " << blank.x << " & "
       << "y is: " << blank.y << endl;
}
