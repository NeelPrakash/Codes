#include <iostream>
#include <climits>
using namespace std;

// int main() {
//   int n;
//   cout <<"Enter the size of the array: " <<endl;
//   cin >>n;
//   int arr[n];
//   bool arr_1[n];
//   float arr_2[n];
//   char arr_3[n];
//   double arr_4[n];

//   short arr_5[n];
//   long arr_6[n];
//   unsigned long long arr_7[n];

//   cout <<"Byte-size of the array (arr): " <<sizeof(arr) <<endl;
//   cout <<"Byte-size of array (arr_1): " <<sizeof(arr_1) <<endl;
//   cout <<"Byte-size of array (arr_2): " <<sizeof(arr_2) <<endl;
//   cout <<"Byte-size of array (arr_3): " <<sizeof(arr_3) <<endl;
//   cout <<"Byte-size of array (arr_4): " <<sizeof(arr_4) <<endl;
//   cout <<"Byte-size of array (arr_5): " <<sizeof(arr_5) <<endl;
//   cout <<"Byte-size of array (arr_6): " <<sizeof(arr_6) <<endl;
//   cout <<"Byte-size of array (arr_7): " <<sizeof(arr_7) <<endl;
//   cout <<endl;  
  // cout <<"Garbage values stored in the array: " <<endl;
  // for (int i = 0; i <= n - 1; i++) {
  //   cout <<arr[i] <<" ";
  // }
  // cout <<endl;
  // cout <<endl;
  // cout <<"Store values inside the array: " <<endl;
  // for (int i = 0; i <= n - 1; i++) {
  //   cin >>arr[i];
  // }

  // cout <<"Stored values: " <<endl;
  // for (int i = 0; i <= n - 1; i++) {
  //   cout <<arr[i] <<" ";
  // }
  // cout <<endl;
  // //c++ dont do array bound checking for us. (initially c++ was designed not to be slower than c and as c doesnt perform bound check hence implementing this feature in c++ cause speed reduction, therfore c++ also wont perform bound check)
//   cout <<arr[-1] <<endl;
//   cout <<arr[5] <<endl;
//   cout <<arr[6] <<endl;
// }

// whenver an array has to be passed to a function it is always treated as a pointer -- learn later (the code written below will not work)
// void printArray(int n, int arr) {
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
// }

// int main() {
//   int n;
//   cout <<"Enter the length of the array: " <<endl;
//   cin >>n;
//   int arr[100];
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
//   printArray(n, arr);
// }

//second largest in an array
// int main() {
//   int n;
//   cout <<"Enter the length of the array: " <<endl;
//   cin >>n;
//   int largest = INT_MIN, sLargest = INT_MIN, arr[100];

//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//     if (arr[i] > largest) {
//       sLargest = largest;
//       largest = arr[i];
//     } else if (arr[i] > sLargest && arr[i] < largest) {
//       sLargest = arr[i];
//     }
//   }
//   cout <<"Largest: " <<largest <<endl;
//   cout <<"Second largest: " <<sLargest <<endl;
// }

//array sum
int main() {
  int n;
  cout <<"Enter the length of the array: " <<endl;
  cin >>n;
  int sum = 0, arr[100];
  for (int i = 0; i < n; i++) {
    cin >>arr[i];
    sum = sum + arr[i];
  }
  cout <<"Sum: " <<sum <<endl;
}