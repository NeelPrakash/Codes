#include <iostream>
#include <cmath>
using namespace std;

//farenheit to celsius conversion table
int main() {
  float start, end, step;

  cout <<"Enter the start, end, step size of the conversion table: " <<endl;
  cin >>start >>end >>step;

  while (start <= end) {
    float celsius = (start - 32) * 5.0 / 9;
    cout <<start <<"\t" <<celsius <<endl;
    start += step;
  }
}
//sum of even numbers
// int main() {
//   int n, sum = 0, i = 2;
  // cout <<"Enter a Number: " <<endl;
  // cin >>n;

  // while (i <= n) {
  //   if (i % 2 == 0) {
  //     sum = sum + i;
//     }
//     i = i + 1;
//   }
//   cout <<"Sum: " <<sum <<endl;
// }

//sum of prime numbers
// int main() {
//   int n, sum = 0, i = 2;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (i <= n) {
//     int j = 2;
//     bool flag = false;
//     while (j <= (int) sqrt(i)) {
//       if (i % j == 0) {
//         flag = true;
//         break;
//       }
//       j = j + 1;
//     }
//     if (!flag) sum = sum + i;
//     i = i + 1;
//   }
//   cout <<"Sum: " <<sum <<endl;
// }