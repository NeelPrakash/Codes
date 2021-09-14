#include <iostream>
using namespace std;

// int main() {
//   int n, c;
//   cout <<"Enter a Number and the Choice -- 0 = sum, 1 = product: " <<endl;
//   cin >>n >>c;

//   int sum = 0, product = 1;
//   if (c == 0) {
//     for (int i = 1; i <= n; i++) {
//       sum = sum + i;
//     }
//     cout <<"Sum: " <<sum <<endl;
//   } else if (c == 1) {
//     for (int i = 1; i <= n; i ++) {
//       product = product * i;
//     }
//     cout <<"Product: " <<product <<endl;
//   } else {
//     cout <<-1 <<endl;
//   }
// }

//ap series
int main() {
  int n, i = 1, count = 1;
  cout <<"Enter a Number: " <<endl;
  cin >>n;

  while (count <= n) {
    int apTerm = 3 * i + 2;
    if (apTerm % 4 != 0) {
      cout <<apTerm <<" ";
      count = count + 1;
    }
    i = i + 1;
  }
}

