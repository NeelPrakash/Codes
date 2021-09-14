#include <iostream>
using namespace std;

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;
  
//   while (i <= n) {
//     int j = 1;
//     while (j <= n - i) {
//       cout <<" " <<" ";
//       j = j + 1;
//     }
//     int k = 1;
//     while (k <= i) {
//       cout <<"*" <<" ";
//       k = k + 1;
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
//     while (j <= n - i) {
//       cout <<" " <<" ";
//       j = j + 1;
//     }
//     int k = 1;
//     while (k <= i) {
//       cout <<k <<" ";
//       k = k + 1;
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
//     while (j <= n - i + 1) {
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
//     int j = 1, k = n - i + 1;
//     while (j <= k) {
//       cout <<k <<" ";
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
//     while (j <= n - i) {
//       cout <<" " <<" ";
//       j = j + 1;
//     }
//     int k = 1;
//     while (k <= i) {
//       cout <<k <<" ";
//       k = k + 1;
//     }
//     int l = i - 1;
//     while (l >= 1) {
//       cout <<l <<" ";
//        l = l - 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

//pattern - method 1
// int main() {
//   int n, i = 1, l = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (i <= n) {
//     int j = 1;
//     while (j <= n - i) {
//       cout <<" " <<" ";
//       j = j + 1;
//     }
//     int k = 1;
//     while (k <= l) {
//       cout <<'*' <<" ";
//       k = k + 1;
//     }
//     cout <<endl;
//     l = l + 2;
//     i = i + 1;
//   }

//method - 2
// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (i <= n) {
//     int j = 1;
//     while (j <= n - i) {
//       cout <<" " <<" ";
//       j = j + 1;
//     }
//     int k = 1;
//     while (k <= i) {
//       cout <<'*' <<" ";
//       k = k + 1;
//     }
//     int l = i - 1;
//     while (l >= 1) {
//       cout <<'*' <<" ";
//       l = l - 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

//new pattern
// int main() {
//   int n, i = 2, k = 2;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   if (n >= 1) cout <<1 <<endl;
//   while (i <= n) {
//     int j = 1, l = k;
//     while (j <= i - 1) {
//       cout <<l <<" ";
//       l = l - 1;
//       j = j + 1;
//     }
//     cout <<endl;
//     k = k + 2;
//     i = i + 1;
//   }
// }

// int main() {
//   int n, i = 1;
//   cout <<"Enter a Number: " <<endl;
//   cin >>n;

//   while (i <= n) {
//     int j = 1;
//     while (j <= n - i) {
//       cout <<" " <<" ";
//       j = j + 1;
//     }
//     int k = 1, m = i;
//     while (k <= i) {
//       cout <<m <<" ";
//       m = m + 1;
//       k = k + 1;
//     }
//     int l = i - 1, n = m - 2;
//     while (l >= 1) {
//       cout <<n <<" ";
//       n = n - 1;
//       l = l - 1;
//     }
//     cout <<endl;
//     i = i + 1;
//   }
// }

int main() {
  int N, n1, n2, i = 1, m = 1;
  cout <<"Enter a Number: " <<endl;
  cin >>N;  // N can be an odd no. only, if even no. is passed by the user then 1 is added to it.
  if (N > 0) {
    n1 = N / 2 + 1, n2 = N / 2;
  } else {
    n1 = 0, n2 = 0;
  }

  while (i <= n1) {
    int j = 1;
    while (j <= n1 - i) {
      cout <<" " <<" ";
      j = j + 1;
    }
    int k = 1;
    while (k <= i) {
      cout <<"*" <<" ";
      k = k + 1;
    }
    int l = i - 1;
    while (l >= 1) {
      cout <<"*" <<" ";
      l = l - 1;
    }
    cout <<endl;
    i = i + 1;
  }

  while (m <= n2) {
    int n = 1;
    while (n <= m) {
      cout <<" " <<" ";
      n = n + 1;
    }
    int o = 1;
    while (o <= n2 - m + 1) {
      cout <<"*" <<" ";
      o = o + 1;
    }
    int p = 1;
    while (p <= n2 - m) {
      cout <<"*" <<" ";
      p = p + 1;
    }
    cout <<endl;
    m = m + 1;
  }
}