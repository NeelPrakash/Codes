// #include <iostream>
// using namespace std;

// int main() {
//   int a;
//   int b;

//   cout <<"a: " <<a <<" b: " <<b <<endl;

//   cin >>a;
//   cin >>b;

//   cout <<"a: " <<a <<" b: " <<b <<endl;
// }

// Add two numbers
// #include <iostream>
// using namespace std;

// int main() {
//   float a, b;

//   cout <<"Enter two Numbers: " <<endl;
//   cin >>a >>b;

//   float c = a + b;
//   cout <<"Sum: " <<c <<endl;
// }

// Calculate percentage
#include <iostream>
using namespace std;

int main() {
  float marksObtained, totalMarks, percentage;

  cout <<"Enter the total Marks obtained by you" <<endl;
  cin >>marksObtained;
  cout <<"Enter the Max Marks that can be obtained" <<endl;
  cin >>totalMarks;

  percentage = (marksObtained / totalMarks) * 100;
  cout <<"Percentage: " <<percentage  <<"%" <<endl;

  int h = 'y';
  cout <<h <<endl;

  int k = 1;
  char x = k;
  cout <<"x: " <<x <<endl;

  char m = '1';
  int z = m;
  cout <<"m: " <<m <<" z: " <<z <<endl;
}