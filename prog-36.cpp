#include <iostream>
#include <climits>
using namespace std;

//Push all values less than x to the end of the array such that the relative order of the array elements must be maintained.
// void inputArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

// void printArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Output array: ";
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

// void pushElements(int arr[], int n, int x) {
//   int k = 0;
//   for (int i = 0; i < n - k; i++) {
//     if (arr[i] < x) {
//       int j, current = arr[i];
//       for (j = i + 1; j < n; j++) {
//         arr[j - 1] = arr[j];
//       }
//       arr[j - 1] = current;
//       i = i - 1;
//       k = k + 1;
//     }
//   }
// }

// int main() {
//   int n, x, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   cout <<"Enter a number: ";
//   cin >>x;
//   pushElements(arr, n, x);
//   printArray(arr, n);
// }

//Push zeros to end
// void inputArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

// void printArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Output array: ";
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

// void pushZerosToEnd(int arr[], int n) {
//   int k = 0, count = 0;
//   for (int i = 0; i < n; i++) {
//     if (arr[i] != 0) {
//       arr[k] = arr[i];
//       k = k + 1;
//     } else {
//       count = count + 1;
//     }
//   }
//   for (int j = n - count; j < n; j++) {
//     arr[j] = 0;
//   }
// }

// //Better apporach
// void pushZerosToEnd_1(int arr[], int n) {
//   int k = 0;
//   for (int i = 0; i < n; i++) {
//     if (arr[i] != 0) {
//       int temp = arr[k];
//       arr[k] = arr[i];
//       arr[i] = temp;
//       k = k + 1;
//     }
//   }
// }
// int main() {
//   int n, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   // pushZerosToEnd(arr, n);
//   pushZerosToEnd_1(arr, n);
//   printArray(arr, n);
// }

//Rotate array
// void inputArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Enter the array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

// void printArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Output array: ";
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

//Rotate left -- linear time complexity
// void rotateArray(int arr[], int n, int x) {
//   x = x % n;
//   if (x <= 0) return;
//   int temp[n - 1], l = 0;
//   for (int i = 0; i < x; i++) {
//     temp[l] = arr[i];
//     l = l + 1;
//   }
//   l = 0;
//   for (int j = x; j < n; j++) {
//     arr[l] = arr[j];
//     l = l + 1;
//   }
//   l = 0;
//   for (int k = n - x; k < n; k++) {
//     arr[k] = temp[l];
//     l = l + 1;
//   }
// }

// int main() {
//   int n, x, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   cout <<"Enter the rotate count: ";
//   cin >>x;
//   rotateArray(arr, n, x);
//   printArray(arr, n);
// }

//Rotate left and Rotate right -- quardatic time complexity
// void rotateLeft(int arr[], int n, int x) {
//   x = x % n;
//   if (x <= 0) return;
//   for (int i = 0; i < x; i++) {
//     int current = arr[0];
//     for (int j = 1; j < n; j++) {
//       arr[j - 1] = arr[j];
//     }
//     arr[n - 1] = current;
//   }
// }

// void rotateRight(int arr[], int n, int x) {
//   x = x % n;
//   if (x <= 0) return;
//   for (int i = 0; i < x; i++) {
//     int current = arr[n - 1], newEle = arr[0];
//     for (int j = 0; j < n - 1; j++) {
//       int temp = arr[j + 1];
//       arr[j + 1] = newEle;
//       newEle = temp;
//     }
//     arr[0] = current;
//   }
// }

// int main() {
//   int n, x, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   cout <<"Enter the rotate count: ";
//   cin >>x;
//   rotateLeft(arr, n, x);
//   printArray(arr, n);
//   rotateRight(arr, n, x);
//   printArray(arr, n);
// }

//Second largest
// void inputArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

// void printArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Output array: ";
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

// int secondLargest(int arr[], int n) {
//   int largest = INT_MIN, secondLargest = INT_MIN;
//   for (int i = 0; i < n; i++) {
//     if (arr[i] > largest) {
//       secondLargest = largest;
//       largest = arr[i];
//     } else if (arr[i] > secondLargest && arr[i] < largest) {
//       secondLargest = arr[i];
//     }
//   }
//   return secondLargest;
// }

// int main() {
//   int n,val, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   val = secondLargest(arr, n);
//   cout <<"Second largest: " <<val <<endl;
// }

//Rotate count
// void inputArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

// int leftRotateCount(int arr[], int n) {
//   int sInd = n - 1;
//   for (int i = n - 2; i >= 0; i--) {
//     if (arr[i] <= arr[sInd]) {
//       sInd = i;
//     } else break;
//   }
//   if (sInd <= 0) return -1;
//   else return n - sInd;
// }

// int rightRotateCount(int arr[], int n) {
//   int lInd = 0;
//   for (int i = 1; i < n; i++) {
//     if (arr[i] >= arr[lInd]) {
//       lInd = i;
//     } else break;
//   }
//   if (lInd == n - 1) return -1;
//   else return lInd + 1;
// }

// int main() {
//   int n, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   int val = leftRotateCount(arr, n);
//   cout <<"Left rotate count: " <<val <<endl;
//   // int val_1 = rightRotateCount(arr, n);
//   // cout <<"Right rotate count: " <<val_1 <<endl;
// }

//Sort 012
// void inputArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

// void printArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Output array: ";
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

// void sort012(int arr[], int n) {
//   int zeros = 0, ones = 0, twos = 0;
//   for (int i = 0; i < n; i++) {
//     if (arr[i] == 0) zeros++;
//     else if (arr[i] == 1) ones++;
//     else twos++;
//   }
//   int index = 0, n1 = zeros;
//   for (index; index < n1; index++) {
//     arr[index] = 0;
//   }
//   n1 = index + ones;
//   for (index; index < n1; index++) {
//     arr[index] = 1;
//   }
//   n1 = index + twos;
//   for (index; index < n1; index++) {
//     arr[index] = 2;
//   }
// }

// int main() {
//   int n, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   sort012(arr, n);
//   printArray(arr, n);
// }

//Sum of two arrays
void inputArray(int arr[], int n) {
  if (n <= 0) return;
  cout <<"Enter array elements: ";
  for (int i = 0; i < n; i++) {
    cin >>arr[i];
  }
}

void printArray(int arr[], int n) {
  if (n <= 0) return;
  cout <<"Output array: ";
  for (int i = 0; i < n; i++) {
    cout <<arr[i] <<" ";
  }
  cout <<endl;
}

void sumOfTwoArrays(int arr[], int arr1[], int arr2[], int n1, int n2) {
  int j = n1 - 1; int k = n2 - 1, carry = 0;
  for (int i = n1; i > 0; i--) {
    int val1 = arr1[j], val2 = 0;
    if (k >= 0) val2 = arr2[k];
    int val = val1 + val2 + carry;
    arr[i] = val % 10;
    j--, k--, carry = val / 10;
  }
  arr[0] = carry;
}

int main() {
  int n, n1, n2, arr[101], arr1[100], arr2[100];
  cout <<"Enter the size of first array: ";
  cin >>n1;
  inputArray(arr1, n1);
  cout <<"Enter the size of the second array: ";
  cin >>n2;
  inputArray(arr2, n2);
  if (n1 >= n2) {
    sumOfTwoArrays(arr, arr1, arr2, n1, n2);
    n = n1 + 1;
  } else {
    sumOfTwoArrays(arr, arr2, arr1, n2, n1);
    n = n2 + 1;
  }
  printArray(arr, n);
}