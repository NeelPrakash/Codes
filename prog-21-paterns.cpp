#include <iostream>
using namespace std;

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (i <= n) {
//     int j = 1;
//     while (j <= n) {
//       cout <<"*" <<" ";
//       j = j + 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while(i <= n) {
//     int j = 1;
//     while (j <= i) {
//       cout <<j <<" ";
//       j = j + 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;
//   while (i <= n) {
//     int j = 1;
//     while (j <= n) {
//       cout <<n <<" ";
//       j = j + 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (i <= n) {
//     int j = 1, k = n;
//     while (j <= n) {
//       cout <<k <<" ";
//       k = k - 1;
//       j = j + 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;
//   while (i <= n) {
//     int j = 1, k = i;
//     while (j <= i) {
//       cout <<k <<" ";
//       k = k + 1;
//       j = j + 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

// int main() {
//   int n , i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;
//   while (i <= n) {
//     int j = 1;
//     while (j <= i) {
//       cout <<"*" <<" ";
//       j = j + 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while(i <= n) {
//     int j = 1;
//     while (j <= i) {
//       cout <<i <<" ";
//       j = j + 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   } 
// }

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (i <= n) {
//     int j = 1, k = i;
//     while (j <= i) {
//       cout <<k <<" ";
//       k = k - 1;
//       j = j + 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (i <= n) {
//     int j = 1;
//     char ch = 'A' + i - 1;
//     while (j <= n) {
//       cout <<ch <<" ";
//       ch = ch + 1;
//       j = j + 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (i <= n) {
//     int j = 1;
//     char ch = 'A' + i - 1;
//     while (j <= i) {
//       cout <<ch <<" ";
//       j = j + 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (i <= n) {
//     int j = 1;
//     char ch = 'A' + i - 1;
//     while (j <= i) {
//       cout <<ch <<" ";
//       ch = ch + 1;
//       j = j + 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

int main() {
  int n, i = 1;
  cout <<"Enter a Number: " <<endl;
  cin >>n;

  while (i <= n) {
    int j = 1;
    char ch = 'A' + n - i;
    while (j <= i) {
      cout <<ch <<" ";
      ch = ch + 1;
      j = j + 1;
    }
    cout <<endl;
    i = i + 1;
  }
}