#include <iostream>
#include <cmath>
using namespace std;

// int main() {
//   int n;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   for (int i = 2; i <= n; i++) {
//     int j = 2;
//     bool flag = false;
//     while (j <= int(sqrt(i))) {
//       if (i % j == 0) {
//         flag = true;
//         break;
//       }
//       j = j + 1;
//     }
//     if (!flag) {
//       cout <<i <<" ";
//     }
//   }
// }

// int main() {
//   int a = 1;
//   float b = 1.5;
//   char c = 'A';
//   bool d = true;

//   short e = 2;
//   long f = 3;
//   double g = 2.5;

//   cout <<"a-int: " <<a <<", b-float: " <<b <<", c-char: " <<c <<", d-bool: " <<d <<", e-short" <<e <<", f-long: " <<f <<", g-double: " <<g <<endl;

//   {
//     int h = 4;
//     float i = 4.5;
//     char j = 'B';
//     bool k = false;

//     short l = 5;
//     long m = 6;
//     double n = 5.5;
//   }
//   // cout <<"h: " <<h <<", i: " <<i <<", j: " <<j <<", k: " <<k <<", l: " <<l <<", m: " <<m <<", n: " <<n <<endl;

//   if (false) {
//     int o = 1;
//     char p = 'C';
//   } else {
//     float q = 2.05;
//     bool r = true;
//   }
//   // cout <<"o : " <<o <<", p: " <<p <<endl;
//   // cout <<"q: " <<q <<", r: " <<r <<endl;

//   if (true) int s = 1;
//   else float t = 1.5;
//   // cout <<"s: " <<s <<", t: " <<t <<endl;

//   int u = 1;
//   while (u <= 5) {
//     int v = 6;
//     char w = 'D';
//     u = u + 1;
//   }
//   // cout <<"v: " <<v <<", w: " <<w <<endl;

//   // while (a < 5) int x = 1;
//   // cout <<"x: " <<x <<endl;

//   for (int y = 1 ; y <= 5; y++) {
//     int z = 2;
//     cout <<"y: " <<y <<", z: " <<z <<endl;
//   }
//   // cout <<"y: " <<y <<", z: " <<z <<endl;

//   int a1 = 1;
//   for (a1; a1 <= 5; a1++) int a2 = 2;
//   // cout <<"a2: " <<a2 <<endl;
//   a1 = 1;
//   while (a1 <= 2) {
//     int b1 = 2;
//     int b2 = 3;
//     while (b1 <= a1) {
//       int b2 = 7;
//       cout <<"b2: " <<b2 <<endl;
//       int b3 = 4;
//       cout <<"b3: " <<b3 <<endl;
//       b1 = b1 + 1;
//     }
//     cout <<"b1: " <<b1 <<endl;
//     cout <<"b2: " <<b2 <<endl;
//     a1 = a1 + 1;
//   }
//   if (true) {
//    int g1 = 1; 
//    char g2 = 'A';
//    cout <<"g1: " <<g1 <<endl;
//    cout <<"g2: " <<g2 <<endl;
//   } else {
//     int g1 = 2;
//     int g3 = 3;
//     cout <<"g1: " <<g1 <<endl;
//     // cout <<"g2: " <<g2 <<endl;
//     cout <<"g3: " <<g3 <<endl;
//   }

//   for (float h1 = 1; h1 <= 3; h1++) { //works well
//     cout <<"h1: " <<h1 <<endl;
//   }
// }

// int main() {
//   //cin
//   char c;
//   cout <<"cin" <<endl; //cin  will ignore whitespace, newline and enter while accepting the input from the user.
//   cin >>c;
//   int count = 1;
//   while (c != '$') {
//     cin >>c;
//     count = count + 1;
//   }
//   cout <<"count: " <<count <<endl;

//   //cin.get
//   char d;
//   cout <<"cin.get()" <<endl; //cin.get() will not ignore whitespace, newline and tab while accepting the input from the user.
//   d = cin.get();
//   int count_1 = 1;
//   while (d != '$') {
//     d = cin.get();
//     count_1 = count_1 + 1;
//   }
//   cout <<"count_1: " <<count_1 <<endl;
// }

//character count
int main() {
  char ch = cin.get();
  int alphaCount = 0, digiCount = 0, whitespaceCount = 0;

  while (ch != '$') {
    if (97 <= ch && ch <= 122) {
      alphaCount += 1;
    } else if (48 <= ch && ch <= 57) {
      digiCount += 1;
    } else if (ch == 32 || ch == 9 || ch == 10) {
      whitespaceCount += 1;
    }
    ch = cin.get();
  }
  cout <<"Alphabet: " <<alphaCount <<", digits: " <<digiCount <<", whitespace: " <<whitespaceCount <<endl;
}