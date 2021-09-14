#include <iostream>
using namespace std;

int Func_1(int a, int b) {
  return a + b;
}

char Func_2(char a) {
  return a + 5;
}

Func_3(float c, int d, char e) { //omitting the output datatype is considered as a bad practice however if we do so then the output datatype is assumed to be of int type.
  return c + d + e;
}

//Even if a function doesnot contain a return statement inside of it, programme execution is still passed to the calling function after the execution of last line of the function called.
int Func_4() { // if the output datatype of the function is anything except void then function is supposed to contain a return keyword inside of it followed by some value, forgetting the return statement here is considered as a serious bug and in that case it totally depands upon the compiler what will be the return value of the function (for vs code return value is: 1878006336 and for dev c++ it is 4745728)
  cout <<"Some Random Text" <<endl;
  // return; // return keyowrd without a value is not allowed.
}

void Func_5(int x, int y) { // void type functions ar not supposed to contain a return statement inside of them, use of return statement is completely optional here. it is just used to make the programmer intension clear (good practice) however it can't contain a value after it, that is not allowed.
  cout <<"void type" <<endl;
  // return 0; error: return-statement with a value, in function returning 'void'
  return;
}

int Func_6(int j, int k) {
  int l = j + k;
  cout <<"j: " <<j <<" k: " <<k <<" l: " <<l <<endl;
  return l;
}

double Func_7(float a, float b) {
  // cout <<random <<endl; //varibales defined inside main are not acessible by other functions called inside main function.
  return a - b;
}

//inside the main function use of return keyword and expression after it is completely optional, if something is returned from the main function the it totally depand upon the compiler how the value will be handellled.
int main() {
  int random = 456;
  cout <<"Function Call..." <<endl;
  cout <<"Sum: " <<Func_1(2, 3.5) <<endl; //result is always of int type.
  cout <<"Character: " <<Func_2('A') <<endl;
  // cout <<"Character: " <<Func_2(65) <<endl;
  cout <<"Sum_1: " <<Func_3(3, 5, 'a') <<endl; // 3 + 5 + 97 (ascii code for a)
  cout <<"Func_4(): " <<Func_4() <<endl;
  // cout <<Func_5(2, 3) <<endl; // use of functions with void as the output datatype as an expression is not allowed.
  cout <<"6 + 11: " <<Func_6(6, 11) <<endl;
  // cout <<"j: " <<j <<" k: " <<k <<" l: " <<l <<endl;

  // cout <<"Substraction: " <<Func_7(b = 3, a = 2) <<endl;
}