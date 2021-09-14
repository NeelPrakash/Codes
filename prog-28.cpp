#include <iostream>
#include <cmath>
using namespace std;

// int main() {
//   int n;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;
//   int num = n, count = 0;
//   while (num != 0) {
//     num = num / 10;
//     count = count + 1;
//   }
//   int power = count - 1, rev = 0;
//   num = n;
//   cout <<"num: " <<num <<", power: " <<power <<endl;
//   while (num != 0) {
//     int rem = num % 10;
//     cout <<"rev--: " <<rev <<endl;
//     cout <<"rev + rem * 10^power--: " <<rem * pow(10, power) <<endl;
//     rev = rev + rem * pow(10, power); // due to some bug in the vs code the value of rev is not what it is supposed to be, the exact same code works well in dev c++ and coding ninjas online ide. test case = 1908100
//     num = num / 10;
//     power = power - 1;
//     cout <<"rem: " <<rem <<", rev: " <<rev <<", num: " <<num <<", power: " <<power <<endl;
//   }
//   cout <<"Reverse: " <<rev <<endl;
// }

//improvement
// int main() {
//   int n, rev = 0;
  // cout <<"Enter a Number: " <<endl;
  // cin >>n;
  // while (n != 0) {
  //   int rem = n % 10;
//     rev = rev * 10 + rem;
//     n = n / 10;
//   }
//   cout <<"Reverse: " <<rev <<endl;
// }

//dec to binary -- n can be both int (1010) or floating point number (1010.010) as well.
// this code is not working as expected due to some lack in precision while storing the number -- using long double type even wont work -- ask.
int main() {
  // double n, dec = 0;
  // cout <<"Enter a Number: " <<endl;
  // cin >>n;
  double n = 1011.010101, dec = 0; // must use double, float type is unable to handle 1011.0101 number with required precision.
  int intPart = int(n), dec1 = 0, power = 0;
  while (intPart != 0) {
    int rem = intPart % 10;
    dec1 = dec1 + rem * pow(2, power);
    power = power + 1;
    intPart = intPart / 10;
  }
  float dec2 = 0, floatPart = n - int(n);
  float x = int(n);
  power = -1;
  while (floatPart != 0) {
    dec2 = dec2 + int(floatPart * 10) * pow(2, power);
    power = power - 1;
    floatPart = floatPart * 10 - int(floatPart * 10);
  }
  dec = dec1 + dec2;
  cout <<"Decimal: " <<dec <<endl;
}