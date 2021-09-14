#include <iostream>
#include <cmath>
using namespace std;

// // factorial
// int factorial(int n) {
//   int fact_n = 1;
//   for (int i = 1; i <= n; i++) {
//     fact_n = fact_n * i;
//   }
//   return fact_n;
// }

// //check prime
// bool isPrime(int n) {
//   bool flag = false;
//   for (int i = 2; i <= int(sqrt(n)); i++) {
//     if (n % i == 0) {
//       flag = true;
//       break;
//     }
//   }
//   return !flag;
// }

// int main() {
//   int n;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;
//   cout <<n <<"! = " <<factorial(n) <<endl;

//   if (isPrime(n)) cout <<"Prime Number" <<endl;
//   else cout <<"Not a Prime Number" <<endl;
// }

// void FahToCel(int start, int end, int step) {
//   while (start <= end) {
//     float cel = (start - 32) * 5.0 / 9;
//     cout <<start <<"\t" <<cel <<endl;
//     start = start + step;
//   }
// }

// int main() {
//   int start, end, step;
//   cout <<"Enter start, end, step: " <<endl;
//   cin >>start >> end >> step;
//   FahToCel(start, end, step);
// }

//check fibonacci
// bool isFibonacci(int n) {
//   int a = 0, b = 1;
//   while (a <= n) {
//     if (a == n) return true;
//     int c = a + b;
//     a = b;
//     b = c;
//   }
//   return false;
// }

// int main() {
//   int n;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;
//   cout <<"Fibonacci member: " <<isFibonacci(n) <<endl;
// }

//Fibonacci series
void fibonacci_1_to_N(int n) {
  int a = 0, b = 1;
  for (int i = 1; i <= n; i++) {
    cout <<a <<" ";
    int c = a + b;
    a = b, b = c;
  }
}


bool checkMember(int n){
    int a = 0, b = 1;
    while (a <= n) {
        if (a == n) return true;
        int c = a + b;
        a = b, b = c;
    }
    return false;
}

int main() {
  int n;
  cout <<"Enter a Number: " <<endl;
  cin >>n;
  fibonacci_1_to_N(n);
  cout <<endl;
  cout <<checkMember(n) <<endl;
}