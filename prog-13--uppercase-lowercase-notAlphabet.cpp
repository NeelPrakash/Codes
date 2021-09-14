#include <iostream>
using namespace std;

// int main() {
//   char a;
//   cout <<"Enter a Character" <<endl;
//   cin >>a;
//   int b = a;

//   if (65 <= b <= 90) {  // wrong way of specifying condition, conditions should be like (65 <= b && b <= 90)
//     if (65 <= b) {
//       cout <<65 <<" is less than or equal to " <<b <<endl;
//     }
//     if (b <= 90) {
//       cout <<b <<" is less than or equal to " <<90 <<endl;
//     }
//     cout <<"Uppercase" <<endl;
//     cout <<1 <<endl;
//   }
//   if (97 <= b <= 122) {
//     cout <<"Lowercase" <<endl;
//     cout <<0 <<endl;
//   }
// }

// int main() {
  // if (97 <= 90 <= 85) {
  //   cout <<"Case 1" <<endl;
  // }
  // if (85 <= 90 <=25) {
  //   cout <<"Case 2" <<endl;
  // }
  // if (20 <= 30 <= 40) {
  //   cout <<"Case 3" <<endl;
  // }
  // if (30 <= 40 <= 20) {
  //   cout <<"Case 4" <<endl;
  // }
  // int a = 97 <= 90 <= 85;
  // bool b = 97 <= 90 <= 85;

  // int c = 20 >= 50 <= 10;
  // bool d = 20 >= 50 <= 10;

  // cout <<"a: " <<a <<" b: " <<b <<endl;
  // cout <<"c: " <<c <<" d: " <<d <<endl;
// }

int main() {
  char a;

  cout <<"Enter a character: " <<endl;
  cin >>a;

  int b = a;

  if (65 <= b && b <= 90) {
    cout <<"Uppercase" <<endl;
  } else if (97 <= b && b <= 122) {
    cout <<"Lowercase" <<endl;
  } else if (0 <= 5 <= -1) {
    cout <<"abc" <<endl;
  }
  else {
    cout <<"Not an Alphabet" <<endl;
  }
  
  int c = 1 <= 0 <= -1;
  cout <<"c: " <<c <<endl;

  int d = 97 <= 90 <= 85;
  cout <<"d: " <<d <<endl;

  float k = 0 <= 5 <-1;
  cout <<"k: " <<k;
}

int main() {
  if (97 <= 90 <= 85) { //evaluates to 1
    cout <<"Case 1" <<endl;
  }
  if (85 <= 90 <=25) { //evaluates to 1
    cout <<"Case 2" <<endl;
  }
  if (20 <= 30 <= 40) { //evaluates to 1
    cout <<"Case 3" <<endl;
  }
  if (30 <= 40 <= 20) { //evaluates to 0
    cout <<"Case 4" <<endl;
  }
  if (0 <= 5 <= -1) {
    cout <<"Case 5" <<endl;
  }
}