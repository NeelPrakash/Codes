#include <iostream>
#include <cmath>
using namespace std;

// int main() {
//   int basicSalary, gradeAscii;
//   float hra, da, allow, pf;
//   char grade;

//   cout <<"Enter your basic salary and grade: " <<endl;
//   cin >>basicSalary >>grade;

//   gradeAscii = grade;
//   hra = basicSalary * 0.2;
//   da = basicSalary * 0.5;

//   if (gradeAscii == 65) allow = 1700;
//   else if (gradeAscii == 66) allow = 1500;
//   else allow = 1300;

//   pf = basicSalary * 0.11;
//   float totalSalary = round(basicSalary + hra + da + allow - pf);

//   cout <<"totalSalary: " <<totalSalary <<endl;
// }

// sum of even and odd digits present inside a number
// int main() {
//   int n, evenSum = 0, oddSum = 0;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (n > 0) {
//     int lastDigit = n % 10;
//     n = n / 10;
//     if (lastDigit % 2 == 0) evenSum += lastDigit;
//     else oddSum += lastDigit;
//   }
//   cout <<"Even Sum: " <<evenSum <<endl;
//   cout <<"Odd Sum: " <<oddSum <<endl;
// }

int main() {
  int x, n;
  cout <<"Enter a Number and its power value: " <<endl;
  cin >>x >>n;
  float power;

  if (n > 0) {
    power = x;
    while (n > 1) {
      power = power * x;
      n = n - 1;
    }
  } else if (n < 0) {
    power = 1.0 / x;
    while (n < -1) {
      power = power * 1.0 / x;
      n = n + 1;
    }
  } else {
    power = 1;
  }
  cout <<"Power: " <<power <<endl;
}