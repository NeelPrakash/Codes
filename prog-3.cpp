#include <iostream>
using namespace std;

int main() {
  int a = 1;
  // int a = 1.5;     // if we try to store a floating point no inside a int type variable then only integer part of that variable will be stored, decimal part is discarded.
  // int a = false;  // true is considered as 1 and flase is considered as zero.
  // int a = 'a';   // if we try to store a character isnide int type varibale then its ascii code gets stored isnide it.
  // int a = "a";  // error: invalid conversion from 'const char*' to 'int'

  int b = 2;
  int c  = a + b;

  cout <<"Sum of " <<a <<" and " <<b <<" is: " <<c <<endl;

  float d = 1.5;
  int e = 2;
  float f = d + e;
  double g = f + 1000;
  cout <<"Sum of " <<d <<" and " <<e <<" is: " <<f <<endl;
  cout <<"g: " <<g <<endl;

  // storing int inside float;
  float h = 1;
  cout <<"h: " <<h <<endl;

  //char
  // char i = "a"; // content which has to be stored isnide char must be present inside single quote otherwise an error will be thrown on us.
  char i = 'a';
  // cout <<'i: ' <<i <<endl;
  cout <<"i: " <<i <<endl;

  char j = true;
  cout <<"j: " <<j <<endl; // a smile emoje will be printed on the output screen.

  char k = false; // nothing will be printed.
  cout <<"k: " <<k <<endl;

  char l = 125; //converted to }
  cout <<"l: " <<l <<endl;

  char m = 125.5; // conerted to }
  cout <<"m: " <<m <<endl;
  cout <<true <<endl; // 1 is the output

  //bool
  bool n = true;
  cout <<"n: " <<n <<endl;

  // bool o = 1.5; // inside a bool type variable, anything other than 0 is treated a 1 -- true.
  bool o = 1;
  cout <<"o: " <<o <<endl;

  bool p = 'c';  // truthy value.
  cout <<"p: " <<p <<endl;

  cout <<"sizeof() function -- " <<"int: " <<sizeof(a) <<" float: " <<sizeof(d) 
  <<" double: "<<sizeof(g) <<" char: " <<sizeof(i) <<" bool: " <<sizeof(n) <<endl;

  cout <<'ab' <<endl; // the value of 'ab' is 24930, exact reson
}