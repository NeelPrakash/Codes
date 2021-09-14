#include <iostream>
using namespace std;

//linear search
// int main() {
//   int n, x, arr[50], index[50];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
//   cout <<"Enter search value: ";
//   cin >>x;
//   int count = 0, k = 0;
//   for (int i = 0; i < n; i++) {
//     if (arr[i] == x) {
//       index[k] = i;
//       count = count + 1;
//       k = k + 1;
//     }
//   }
//   for (int i = 0; i < count; i++) {
//     cout <<index[i] <<" ";
//   }
//   if (count == 0) cout <<x <<" is not present within the array" <<endl;
// }

int main() {
  int n, arr[50];
  cout <<"Enter the size of the array: " <<endl;
  cin >>n;
  int i = 0, j = n - 1, k = 1;
  while (k <= n) {
    arr[i] = k;
    i++, k++;
    if (k > n) break;
    arr[j] = k;
    j--, k++;
  }
  for (int l = 0; l < n; l++) {
    cout <<arr[l] <<" ";
  }
}