#include <iostream>
using namespace std;

// int main() {
//   int n, binNum = 0, power = 0;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (n != 0) {
//     int rem = n % 2, powered = 1;
//     for (int i = 1; i <= power; i++) {
//       powered = powered * 10;
//     }
//     binNum = binNum + rem * powered;
//     power = power + 1;
//     n = n / 2;
//   }
//   cout <<"Binary Number: " <<binNum <<endl;
// }

//square root -- integral part only
// int main() {
//   int n, i = 1, sqi = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;
//   while (sqi < n) {
//     i = i + 1;
//     sqi = i * i;
//   }
//   if (sqi == n) {
//     cout <<"Square root: " <<i <<endl;
//   } else {
//     cout <<"Integral part of square root: " <<i - 1 <<endl;
//   }
// }

int main() {
  int n, a, b;
  cout <<"Enter the Number of numbers: " <<endl;
  cin >>n;
  if (n != 0) {
    cout <<"Enter the sequence: " <<endl;
    cin >>a;
    bool isDec = true, valid = true;
    for (int i = 1; i < n; i++) {
      cin >>b;
      if (a == b) {
        valid = false;
        break;
      } else if (b > a) {
        isDec = false;
      } else {
        if (!isDec) {
          valid = false;
          break;
        }
      }
      a = b;
    }
    if (valid) cout <<"true" <<endl;
    else cout <<"flase" <<endl;
  } else {
    cout <<"Sequence atleast contain one number inside of it" <<endl;
  }
}