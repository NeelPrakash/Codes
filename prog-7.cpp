#include <iostream>
using namespace std;

int main() {
  int a = 1990;
  char b = a; // binary representation of 1990 is 11111000110 which cleary requries two bytes of storage space but when we try to store it into a char type (1 byte long)  only 1st byte of the given data (11000110 == 198) is stored in it which is equivalent to 198, since in c++ only character ranging from 32-126 are printage charcater hence how 198 is handled by compiler, we have no idea about it.
  int c = b;

  cout <<"a: " <<a <<" b: " <<b <<" c: " <<c <<endl;

  //float -- if we try to store floating point numbers inside char type then only its interger part is considered.
  float d = 99.59, e;
  b = d;
  e = b;

  cout <<"d: " <<d <<" b: " <<b <<" e: " <<e <<endl;

  //double
  double f = 99.59, g;
  b = f;
  g = b;

  cout <<"f: " <<f <<" b: " <<b <<" g: " <<g <<endl;

  //bool -- true is equivalent to 1 and false is 0. most of the values except 0 are considered as truthy one.
  bool h = true, i; 
  i = a;

  cout <<"h: " <<h <<" a: " <<a <<" i: " <<i <<endl;

  i = 0;
  cout <<"i: " <<i <<endl;

  i = 'c';
  cout <<"i: " <<i <<endl;

  i = "string";
  cout <<"i: " <<i <<endl;

  int k = 'a';
  cout <<k <<endl;

  k = -2;
  cout <<k <<endl;
}