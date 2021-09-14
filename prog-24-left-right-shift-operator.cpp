#include <iostream>
using namespace std;

int main() {
  short a = 15;
  cout <<"a: " <<a <<", byte-size: " <<sizeof(a) <<endl;

  short b = 32767;
  cout <<"b: " <<b <<endl;

  int i = 1, j = 1;
  while (i <= 16) {
    cout <<j <<" ";
    j = j * 2;
    i = i + 1;
  }
  cout <<endl;

  short d = 32767;
  cout <<"d: " <<d <<endl; //32767
  d = d << 1;
  cout <<"d << 1: " <<d <<endl; //-2

  short e = 16383;
  cout <<"e: " <<e <<endl; //16383
  e = e << 1;
  cout <<"e << 1: " <<e <<endl; //32766

  short f = 32767;
  cout <<"f: " <<f <<endl;
  f = f >> 1;
  cout <<"f << 1: " <<f <<endl; //16383

  short g = -32768;
  g = g << 1;
  cout <<"g << 1: " <<g <<endl; //0

  short m = -5;
  short n = -6;
  cout <<"h & i: " <<(m & n) <<endl; // -6

  short o = -5;
  o = o << 1;
  cout <<"o: " <<o <<endl; //-10

  short p = 5;
  p = p >> 1;
  cout <<"p: " <<p <<endl; // 2

  short q = -5;
  q = q >> 1;
  cout <<"q: " <<q <<endl; // -3
}