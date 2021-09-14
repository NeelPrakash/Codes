#include <iostream>
using namespace std;

// void inputArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

//Binary search
// int binarySearch(int arr[], int n, int x) {
//   int start = 0, end = n - 1;
//   while (start <= end) {
//     int mid = (start + end) / 2;
//     if (arr[mid] == x) return mid;
//     else if (arr[mid] > x) end = mid - 1;
//     else start = mid + 1;
//   }
//   return -1;
// }

// int main() {
//   int n, x, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   cout <<"Enter the search value: ";
//   cin >>x;
//   cout <<binarySearch_1(arr, n, x) <<endl;
//   if (value != -1) cout <<x <<" is present at " <<value <<" index within the array." <<endl;
//   else cout <<x <<" is not present within the given array." <<endl;
// }

//Selection sort
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

// void selectionSort(int arr[], int n) {
//   for (int i = 0; i < n - 1; i++) {
//     int minIndex = i;
//     for (int j = i + 1; j < n; j++) {
//       if (arr[j] < arr[minIndex]) minIndex = j;
//     }
//     if (i == minIndex) continue;
//     int temp = arr[i];
//     arr[i] = arr[minIndex];
//     arr[minIndex] = temp;
//   }
// }

// int main() {
//   int n, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   selectionSort(arr, n);
//   printArray(arr, n);
// }

//Bubble sort
// void inputArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

// void printArray(int arr[], int n) {
//   if (n <= 0) return;
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

// void bubbleSort(int arr[], int n) {
//   for (int i = 0; i < n - 1; i++) {
//     for (int j = 0; j < n - (i + 1); j++) {
//       if (arr[j] > arr[j + 1]) {
//         int temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//       }
//     }
//   }
// }

// int main() {
//   int n, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   bubbleSort(arr, n);
//   printArray(arr, n);
// }

//Insertion sort
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

// void insertionSort(int arr[], int n) {
//   for (int i = 1; i < n; i++) {
//     int shiftIndex = i;
//     for (int j = i - 1; j >= 0; j--) {
//       if (arr[j] > arr[i]) shiftIndex = j;
//       else break;
//     }
//     if (i == shiftIndex) continue;
//     int temp = arr[i];
//     for (int k = i; k - shiftIndex > 0; k--) {
//       arr[k] = arr[k - 1];
//     }
//     arr[shiftIndex] = temp;
//   }
// }

// int main() {
//   int n, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   insertionSort(arr, n);
//   printArray(arr, n);
// }

//Insertion sort -- another apporach
// void insertionSort(int arr[], int n) {
//   for (int i = 1; i < n; i++) {
//     int j, current = arr[i];
//     for (j = i - 1; j >= 0; j--) {
//       if (arr[j] > current) {
//         arr[j + 1] = arr[j];
//       } else break;
//     }
//     arr[j + 1] = current;
//   }
// }

// int main() {
//   int n, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   insertionSort(arr, n);
//   printArray(arr, n);
// }

//Merge two sorted array
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

// int mergeArray(int arr[], int arr_1[], int arr_2[], int n1, int n2) {
//   int j = 0, k = 0;
//   for (int i = 0; i < n1; i++) {
//     for (j; j < n2; j++) {
//       if (arr_2[j] <= arr_1[i]) {
//         arr[k] = arr_2[j];
//         k = k + 1;
//       } else break;
//     }
//     arr[k] = arr_1[i];
//     k = k + 1;
//   }
//   while (j < n2) {
//     arr[k] = arr_2[j];
//     j++, k++;
//   }
//   return k;
// }
// int main() {
//   int n1, n2, arr[200], arr_1[100], arr_2[100];
//   cout <<"Enter the size of the first array: ";
//   cin >>n1;
//   inputArray(arr_1, n1);
//   cout <<"Enter the size of the second array: ";
//   cin >>n2;
//   inputArray(arr_2, n2);
//   int k = mergeArray(arr, arr_1, arr_2, n1, n2);
//   printArray(arr, k);
// }

//Merge two unsorted array
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

int merge(int arr[], int arr_1[], int arr_2[], int n1, int n2) {
  int k = 0;
  for (int i = 0; i < n1; i++) {
    arr[k] = arr_1[i];
    k = k + 1;
  }
  for (int j = 0; j < n2; j++) {
    arr[k] = arr_2[j];
    k = k + 1;
  }
  return k;
}
void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int j, current = arr[i];
    for (j = i - 1; j >= 0; j--) {
      if (arr[j] > current) {
        arr[j + 1] = arr[j];
      } else break;
    }
    arr[j + 1] = current;
  }
}

int main() {
  int n1, n2, arr[200], arr_1[100], arr_2[100];
  cout <<"Enter the size of the first array: ";
  cin >>n1;
  inputArray(arr_1, n1);
  cout <<"Enter the size of the second array: ";
  cin >>n2;
  inputArray(arr_2, n2);
  int k = merge(arr, arr_1, arr_2, n1, n2);
  insertionSort(arr, k);
  printArray(arr, k);
}