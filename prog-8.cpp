// #include <iostream>
// using namespace std;

// int main() {
//   int a = 1;
//   signed int b = -1; // by default all int, float, double are of signed type.
//   unsigned int c = b;

//   cout <<"a: " <<a <<" b: " <<b <<" c: " <<c <<endl;

//   // char type variables can be of both signed as well as unsigned types, depands upon compiler to compiler.
//   char d = -5; // again how the negative numbers are treated behind the scenes in char type, we have no idea about it.
//   int e = d;
//   cout <<"d: " <<d <<" e: " <<e <<endl;

//   //long
//   long f = 1.5; // mingw considers both long and long int equivalent and size of both is 4 byte.
//   cout <<"f: " <<f <<" Byte-size : " <<sizeof(f) <<endl;

//   // -- the combination of long with double is only allowed.
//   // long float g = 2.5;
//   // long char h = 'a';
//   long double i = 2.5; // size of double is 8 byte and size of long double is 12 byte.
//   // long bool j = true;

//   cout <<"i: " <<i <<" Byte-size: " <<sizeof(i) <<endl;

//   // By default long are also of signed type.
//   long k = -1;
//   unsigned long l = k;
//   signed long m = l;
//   cout <<"k: " <<k <<" l: " <<l <<" m: " <<m <<endl;

//   //short
//   short n = 1;
//   cout <<"n: " <<n <<" Byte-size: " <<sizeof(n) <<endl;

//   short int o = 2;
//   cout <<"o: " <<o <<" Byte-size: " <<sizeof(o) <<endl;

//   // use of short is only allowed with int type, not even with double.
//   // short float p = 1.5;
//   // short char q = 'a';
//   // short bool r = true;
//   // short double s = 1.9;

//   // by default short are also of signed type.
//   short t = -1;
//   unsigned short u = t;
//   signed short v = u;

//   cout <<"t: " <<t <<" u: " <<u <<" v: " <<v <<endl;

//   // signed or unsigned keyword cant be combined with float/double type, they are by default of signed type.
//   // signed float w = -1.5;
//   // unsigned float x = w;
//   // signed double y = 1.5;
//   // unsigned double z = 2.5;
//   char x = -27;
//   cout <<"x: " <<x <<endl;
// }
// /*
// 00000000 00000000 00000000 00000001 -- biary representation of 1
// 11111111 11111111 11111111 11111111 -- binary representation of -1. if this representation is treated as an unsigned number then its equivalent to 4294967295.
// */

#include <iostream>
using namespace std;

int main() {
  int a = -1;
  signed int b = -1;
  unsigned int c = -1;

  cout <<"a: " <<a <<" b: " <<b <<" c: " <<c <<endl;
  cout <<"a byte-size: " <<sizeof(a) <<", b byte-size: " <<sizeof(b) <<", c byte-size: " <<sizeof(c) <<endl;

  //long
  long d = -1;
  long int e = -1;
  signed long f = -1;
  unsigned long g = -1;

  cout <<"d: " <<d <<", e: " <<e <<", f: " <<f <<", g: " <<g <<endl;
  cout <<"d byte-size: " <<sizeof(d) <<", e byte-size: " <<sizeof(e) <<", f byte-size: " <<sizeof(f) <<", g byte-size: " <<sizeof(g) <<endl;

  //long with float or double
  // long float h = -1.5;  //!combinatio of long and float are not allowed.
  long double h = -1.5;
  
  cout <<"h: " <<h <<endl;
  cout <<"h byte-size: " <<sizeof(h) <<endl;

  //!Combination of signed or unsigned modifiers with float or doubles are not allowed.
  // signed float i = -1.5;
  // unsigned float i = -2.5;
  // signed double i = -1.5;
  // unsigned double i = -2.5;

  // signed long double i = -2.5;
  // unsigned double i = -2.5;

  // *chaining of long type (max 2 times) with or without inn type is allowed.
  long long i = -1.5;
  cout <<"i: " <<i <<", i byte-size: " <<sizeof(i) <<endl;

  long long int j = -2.5;
  cout <<"j: " <<j <<", j byte-size: " <<sizeof(j) <<endl;

  // long long double k = 1.5; //!not allowed.

  //short
  short k = 1;
  cout <<"k: " <<k <<", k byte-size: " <<sizeof(k) <<endl;

  short int l = 2;
  cout <<"l: " <<l <<",  byte-size: " <<sizeof(l) <<endl;

  // short short m = 1; //!unlike long chaining of short is not allowed.

  //!use of short with float or double is also not allowed.
  // short float = 1.5;
  // short double = -1.5;

  signed short int m = -1;
  unsigned short int n = -1;

  cout <<"m: " <<m <<", m byte-size: " <<sizeof(m) <<endl;
  cout <<"n: " <<n <<", n byte-size: " <<sizeof(n) <<endl;

  //char
  // short char o = 'a' ;
  // long char o = 'a';

  signed char o = 96;
  unsigned char p = -96;

  cout <<"o: " <<o <<", o byte-size: " <<sizeof(o) <<endl;
  cout <<"p: " <<p <<", p byte-szie: " <<sizeof(p) <<endl;

  cout <<(2.000001 == 2.000000) <<endl;
  cout <<(2.0000011 == 2.0000011) <<endl;
  cout <<(2 < 2.0000001) <<endl;
  cout <<(2 < 2.00000001) <<endl;

  //*upto 15 places after decimal points are considered in calculations.
  cout <<"less: " <<(2 < 2.000000000000001) <<endl;
  cout <<"less-1: " <<(2 < 2.0000000000000001) <<endl;

  float q = (2 < 2.000000000000001);
  float r = (2 < 2.0000000000000001);

  cout <<"q: " <<q <<", r: " <<r <<endl;

  float s = 2;
  float t = 2.000000000000001;
  float u = 2.000001;
  float v = 2.0000001;

  cout <<"less - 2: " <<(s < t) <<endl;
  cout <<"less - 3: " <<(s < u) <<endl;
  cout <<"less - 4: " <<(s < v) <<endl;
}