#include <iostream>
#include <cmath>
using namespace std;

// int main() {
//   int n = 5;

  //first variation
  // for (int i = 1; i <= n; i++) {
  //   cout <<i <<" ";
  // }

  //second variation
  // int i = 1;
  // for ( ; i <= n; ) {
  //   cout <<i <<" ";
  //   i = i + 1;
  // }

  //third variation
  // for ( ; ; ) {  //infinite loop
  //   cout <<"ABCD" <<" ";
  // }

  //fourth variation
  // for (int i = 1, j = 1; i <= n; i++, j++) {
  //   cout <<i <<" " <<j <<"  ";
  // }

  //fifth variation
  // for (int i = 1, j = 3; i <= n, j <= n; i++, j++) { //here both condition i and j are evaluated but based upon how the comma operator works only last conditional statement is used as a condition for the for loop.
  //   cout <<i <<" " <<j <<"  ";
  // }

  // int i = 1, j = 3;
  // while (i <= n, j <= n) {
  //   cout <<i <<" " <<j <<"  ";
  //   i = i + 1;
  //   j = j + 1;
  // }
// }

//check prime
// int main() {
//   int n;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;
//   bool flag;
  
//   if (n > 1) flag = false;
//   else flag = true;

//   for (int i = 2; i <= int(sqrt(n)); i++) {
//     if (n % 2 == 0) {
//       flag = true;
//       break;
//     }
//   }
//   if (!flag) cout <<"Prime Number" <<endl;
//   else cout <<"Not a Prime Number" <<endl;
// }

//Nth fibonacci number  -- while loop imlementation
// int main() {
//   int n, a = 1, b = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >> n;
//   if (n <= 0) a = 0, b = 0;
//   int count = 2, c;

//   while (count <= n) {
//     c = a + b;
//     a = b;
//     b = c;
//     count += 1;
//   }
//   cout <<"Corresponding fibonacci number: " <<a <<endl;
// }

// int main() {
//   int n, c, a = 1, b = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >> n;
//   if (n <= 0) a = 0, b = 0;

//   for (int count = 2; count <= n; count++) {
//     c = a + b;
//     a = b;
//     b = c;
//   }
//   cout <<"Corresponding fibonacci number: " <<a <<endl;
// }

// int main() {
//   int i = 1;
//   while (i <= 10) {
//     if (i == 7) {
//       cout <<"Before Continue" <<endl;
//       continue;
//       cout <<"After Continue" <<endl; //never printed.
//     }
//     cout <<i <<" ";
//     i++;
//   }
// }
