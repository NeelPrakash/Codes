#include <iostream>
using namespace std;

int main() {
  cout <<"Some Random Text" <<endl;
  int a, b, c, d, e, f;
  a = 15 & 30;
  b = 15 | 30;
  c = ~15;
  d = 15 ^ 30;
  e = 15 << 1;
  f = 15 >> 1;
  cout <<"Some More Random Text" <<endl;
  int g = 1, h = 1, i = 1, j = 1, k = 1;
  int l = 15, m = 15, n = 15, o = 15, p = 15;
  g += g;
  h -= h;
  i *= i;
  j /= j;
  k %= k;
  cout <<"Some More More Random Text" <<endl;
  cout <<"g: " <<g <<", h: " <<h <<", i: " <<i <<", j: " <<j <<", k: " <<k <<endl;
  l &= l;
  m |= m;
  n ^=n;
  o <<=2;
  p >>=2;
  cout <<"15 & 15: " <<(15 & 15) <<", 15 | 15: " <<(15 | 15) <<", 15 ^ 15: " <<(15 ^ 15) <<", 15 << 2: " <<(15 << 2) <<", 15 >> 2: " <<(15 >> 2) <<endl;
  cout <<"l: " <<l <<", m: " <<m <<", n: " <<n <<", o: " <<o <<", p: " <<p <<endl;

  int q = 15;
  // q ~=q; //! not allowed

  //bitwise operators works with int type only.
  // float r = 1.5;
  // float s = 2.5;
  // cout <<(~r) <<endl;
  // cout <<(r ^ s) <<endl;
  
  cout <<(~15) <<endl;
  cout <<(~-15) <<endl;

  short t = 32767;
  cout <<"t: " <<t <<endl;
  cout <<"t << 1: " <<(t << 1) <<endl;
}