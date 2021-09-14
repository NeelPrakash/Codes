#include <iostream>
#include <cmath>
using namespace std;

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (i < n) {
//     if (i % 7 == 0) {
//       break;
//     }
//     if (i % 2 == 0) {
//       i++;
//       continue;
//     }
//     cout <<i <<" ";
//     i++;
//   }
// }

//prime number
int main() {
  int n, i = 2;
  bool flag;
  cout <<"Enter a Number" <<endl;
  cin >>n;
  if (n > 1) {
    flag = false;
  } else {
    flag = true;
  }

  while (i <= (int) sqrt(n)) {
    if (n % i == 0) {
      flag = true;
      break;
    }
    i = i + 1;
  }
  if (flag) cout <<"Not Prime" <<endl;
  else cout <<"Prime Number" <<endl;
}