// // #include <iostream>
// // using namespace std;

// // int main() {
// //   cout <<"5/9: " << 5/9 <<endl;
// //   cout <<"5*2.5: " << 5 * 2.5 <<endl;
// //   cout <<"5-2.5: " << 5 - 2.5 <<endl;
// //   cout <<"5+2.5: " << 5 + 2.5 <<endl;

// //   int a = 97;
// //   char b = 'a';
// //   cout <<"a: " <<a <<" b: " <<b <<endl;
// //   // cout <<"a==b: " <<a==b; // we cant use the relational operators directly into the cout statement.
// //   bool c = a == b;
// //   cout <<"c: " <<c;
// // }

// #include <iostream>
// using namespace std;

// int main() {
//   //*operators
//   // airthematic operators.
//   cout <<"2 + 5: " << 2 + 5 <<endl;
//   cout <<"2 + 3.5: " << 2 + 3.5 <<endl;
//   cout <<"2 - 5: " << 2 - 5 <<endl;
//   cout <<"2 - 1.5: " << 2 - 1.5 <<endl;
//   cout <<"2 * 3: " <<2 * 3 <<endl;
//   cout <<"2 * 3.5: " << 2 * 3.5 <<endl;
//   // cout <<2**4 <<endl; //!there is no operator like ** is present in c++ for computing the powers directly.

//   cout <<"5 / 9: " <<5 / 9 <<endl; //! result of dividing an integer by another integer always yields to an integer value.
//   cout <<"5 / 3.5: " <<5 / 3.5 <<endl;
//   cout <<"5.5 / 2.5: " <<5.5 / 2.5 <<endl;
//   // float x = 2.5 % 3.5; //! modulus operator works only with interger or char type values, for char type values ascii codes are considered.

//   // --relational operator
//   float a = 2.5;
//   float b = 3;
//   float c = 2.5;

//   // cout <<"a==b: " << a == b <<endl;
//   // cout <<a < b <<endl;
//   // cout <<a > b <<endl;
//   // cout <<a <= b <<endl;
//   // cout <<a >= b <<endl;
//   // cout <<a != b <<endl;

//   // boolean operators
//   bool p = 5 < 10  && 3 <= 2;
//   cout <<"And: " <<p <<endl;

//   bool q = 5 < 2 || 6 > 11;
//   cout <<"Or: " <<q <<endl;

//   bool r = !(5 > 11);
//   cout <<"Not: " <<r <<endl;
//   cout <<sizeof(r) <<endl;

//   // cout <<-3%-4 <<endl;

//   //moduls operator -- whenever modulus operators are used with negative numbers, the result will always take the sign of first operand.
//   cout <<"-3%2: " <<-3 % 2 <<endl; 
//   cout <<"3%-2: " <<3%-2 <<endl;   
//   cout <<"-3%-2: " <<-3%-2 <<endl; 
//   cout <<"-2%3: " <<-2%3 <<endl;
//   cout <<"-2%-3: " <<-2%-3 <<endl;

//   // relational operator
//   int d = 2.5 <= 2;
//   cout <<"d: " <<d <<endl;

//   // cout << 2.5 <= 3.5 <<endl;
//   cout << 2 < 3 <<endl;
// }

#include <iostream>
using namespace std;

int main() {
  //Airthematic operators
  cout <<"2 + 3 = " <<2 + 3 <<endl;
  cout <<"2 - 3 = " <<2 - 3 <<endl;
  cout <<"2 * 3 = " <<2 * 3 <<endl;
  cout <<"2 / 3 = " <<2 / 3 <<endl;
  cout <<"2 % 3 = " <<2 % 3 <<endl;

  //Relational operator
  // cout <<"2 < 3 = " <<2 < 3 <<endl;
  // cout <<"2 < 3 = " <<2 < 3;

  //!all of the uncommented line written below produces error.
  //Logical operators
  cout <<true && true;
  // cout <<true && true <<endl;
  // cout <<2 < 3 && 3 > 4 <<endl;
  // cout <<true || false <<endl;
  // cout <<endl;
  cout <<!true <<endl;
  // cout <<endl;
  cout <<!true ||false;
  // cout <<!true || false <<endl; //error

  //
  float o = 2;
  float h = 2.0000000001;
  //	float h = 2.00000000001;
  //	float h = 2.000000000001;
  //	float h = 2.0000000000001;
  //	float h = 2.00000000000001;
  //	float h = 2.000000000000001;
	float i = 2.0000000000000001;
	
	float j = o < h;
	float k = o < i;
	
	cout <<"j: " <<j <<" k: " <<k <<endl;
}