#include <iostream>
using namespace std;

int main() {
  int principal = 10000;
  float rate = 0.8;
  int time = 5;

  float simpleIntrest = (principal * rate * time) / 100;
  cout <<"Simple intrest: " <<simpleIntrest <<endl;

  // the exact value for an uninitiallized variable depands upon the compiler - not reliable.
  int g;
  float h;
  double i;
  char j;
  bool k;

  cout <<"g: " <<g <<" h: " <<h <<" i :" <<i <<" j: " <<j <<" k: " <<k <<endl;
}