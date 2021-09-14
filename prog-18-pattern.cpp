#include <iostream>
using namespace std;

// int main() {
//   int n, i = 1, k = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (i <= n) {
//     int j = 1;
//     while (j <= i) {
//       cout <<k <<" ";
//       j = j + 1;
//       k = k + 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

int main() {
  int n, i = 1, k = 1;
  cout <<"Enter a Number: " <<endl;
  cin >>n;

  while (i <= n) {
    int l = i;
    while (n - l != 0)  {
      cout <<" " <<" ";
      l = l + 1;
    }
    int j = 1;
    while (j <= i) {
      cout <<k <<" ";
      j = j + 1;
      k = k + 1;
    }
    cout <<endl;
    i = i + 1;
  }
}
