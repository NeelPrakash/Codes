#include <iostream>
using namespace std;

int main() {
  int a, b;
  
  cout <<"Enter two numbers: " <<endl;
  cin >>a >>b;

  if (a == b) { //curly braces can be omitted if the if, else if or else block contains a single line inside of them.
    cout << "Hey these are equal" << endl;
  } else {
    cout << "Not equal" << endl;
  }
}