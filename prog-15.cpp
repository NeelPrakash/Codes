#include <iostream>
using namespace std;

int main() {
  //type conversion
  int a = 65;
  float b = 2.5;
  char c = 'a';
  bool d = true;

  cout <<"a: " <<a <<" b: " <<b <<" c: " <<c <<" d: " <<d <<endl;

  cout <<"a - float type: " <<(float) a <<" " <<float(a) <<endl;
  cout <<"a - double type: " <<(double) a <<" " <<double(a) <<endl;
  cout <<"a - short type: " <<(short) a <<" " <<short(a) <<endl;
  cout <<"a - long type: " <<(long) a <<" " <<long(a) <<endl;
  cout <<"a - char type: " <<(char) a <<" " <<char(a) <<endl;
  cout <<"a - bool type: " <<(bool) a <<" " <<bool(a) <<endl;

  int e = -2;
  cout <<"e - signed type: " <<(signed) e <<" " <<signed(e) <<endl;
  cout <<"e - unsigned type: " <<(unsigned) e <<" " <<unsigned(e) <<endl;

  cout <<"c - float type: " <<float(c) <<endl;

  cout <<"6 / 4: " <<6 / 4 <<endl;
  cout <<"float(6) / 4: " <<float(6) / 4 <<", " <<(float) 6 / 4 <<endl;
  cout <<"float(6 / 4): " <<float(6 / 4) <<endl;

  int h = -1;
  cout <<"h: " <<h <<endl;
  cout <<"signed(h): " <<signed(h) <<endl;
  cout <<"unsigned(h): " <<unsigned(h) <<endl;
}