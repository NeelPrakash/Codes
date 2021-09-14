#include <iostream>
using namespace std;

// int main() {
//   int m, n;
//   cout <<"Enter the no. of rows and cols required: ";
//   cin >>m >>n;
//   int arr[100][100];
//   // char arr1[100][100]; // allowed, just like int type arrays, char type can also be of 2d type but now we have to use loops for taking input and printing its output onto the screen. cin cout works normally as they work with int type array.
//   cout <<"Enter the elements: " <<endl;
//   for (int i = 0; i < m; i++) {
//     for (int j = 0; j < n; j++) {
//       cin >>arr[i][j];
//     }
//   }
//   cout <<"Output array: " <<endl;
//   for (int i = 0; i < m; i++) {
//     for (int j = 0; j < n; j++) {
//       cout <<"arr[" <<i <<"]" <<"[" <<j <<"]: " <<arr[i][j] <<", ";
//     }
//     cout <<endl;
//   }
//   // cin >>arr1; // wrong.
//   // cout <<"arr1: " <<arr <<endl;

//   // cout <<"................." <<endl;
//   // cout <<"arr: " <<arr <<endl;
//   // cout <<"arr[0]: " <<arr[0] <<endl;
//   // cout <<"arr[0][0]: " <<arr[0][0] <<endl;
//   // // cout <<"arr[][0]: " <<arr[][0] <<endl; // not allowed

//   // cout <<"................." <<endl;
//   // int arr[][] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//   // cout <<sizeof(arr1) <<endl;
// }

//rowwise and colwise print
// int main() {
//   int m, n;
//   cout <<"Enter the no. of rows and cols required: ";
//   cin >>m >>n;
//   int arr[100][100];
//   cout <<"Enter array elements: " <<endl;
//   for (int i = 0; i < m; i++) {
//     for (int j = 0; j < n; j++) {
//       cin >>arr[i][j];
//     }
//   }

//   cout <<"Rowwise print: " <<endl;
//   for (int i = 0; i < m; i++) {
//     for (int j = 0; j < n; j++) {
//       cout <<arr[i][j] <<" ";
//     }
//     cout <<endl;
//   }

//   cout <<"Colwise print: " <<endl;
//   for (int j = 0; j < n; j++) {
//     for (int i = 0; i < m; i++) {
//       cout <<arr[i][j] <<" ";
//     }
//     cout <<endl;
//   }
// }

//colwise sum
// int main() {
//   int m, n, arr[100][100];
//   cout <<"Enter the no. of rows and cols required: ";
//   cin >>m >>n;
//   cout <<"Enter array elements: " <<endl;
//   for (int i = 0; i < m; i++) {
//     for (int j = 0; j < n; j++) {
//       cin >>arr[i][j];
//     }
//   }
//   cout <<"Colwise sum: " <<endl;
//   for (int j = 0; j < n; j++) {
//     int sum = 0;
//     for (int i = 0; i < m; i++) {
//       sum = sum + arr[i][j];
//     }
//     cout <<sum <<" ";
//   }
//   cout <<endl;
// }

int main() {
  int i = 51;
  cout <<"i: " <<i <<", &i: " <<&i <<endl;
  int *pi = &i;
  cout <<"pi: " <<pi <<", *pi: " <<*pi <<endl;

  char a = 'a';
  cout <<"a: " <<a <<", &a: " <<&a <<endl;
  char *pa = &a;
  cout <<"pa: " <<pa <<", *pa: " <<*pa <<endl;

  char b = 'X';
  cout <<"b: " <<b <<", &b: " <<&b <<endl;
  char *pb = &b;
  cout <<"pb: " <<pb <<", *pb: " <<*pb <<endl;
}