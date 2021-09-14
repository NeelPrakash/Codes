#include <iostream>
using namespace std;

//greater-less-equal
// int main() {
//   int a, b;

  // cout <<"Enter two Numbers: " <<endl;
  // cin >>a >>b;

  // if (a == b) {
  //   cout <<"Hey these are equal" <<endl;
  // } else if (a > b) {
  //   cout <<a <<" is greater than " <<b <<endl;
  // } else {
  //   cout <<a <<" is less than " <<b <<endl;
//   }
// }

//even or odd
int main() {
  int a;

  cout <<"Enter a Number: " <<endl;
  cin >>a;

  if (a % 2 == 0) cout <<"Even" <<endl;
  else cout <<"Odd" <<endl;
}

// int main() {
    //unlike js, following piece of code will not work.
//   if (true || some) { //error some is not defined
//     cout <<"Lets see" <<endl;
//   }
// }