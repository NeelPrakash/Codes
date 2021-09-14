#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  
  cout <<"Enter a Number: " <<endl;
  cin >>n;

  while (n != 0) {
    cout <<n <<" ";
    n = n - 1;
  }

  // cout <<(1++) <<(--1) <<endl; // increment and decrement operators cant be directly used on the values.
}