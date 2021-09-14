#include <iostream>
#include <climits>
using namespace std;

//Reversed array
// int main() {
//   int n;
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   int arr[100];
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
//   for (int i = 0, j = n - 1; i < n / 2; i++, j--) {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//   }
//   cout <<"Reversed array: ";
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

//Swap alternate
// void printArray(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

// void swapAlternate(int arr[], int n) {
//   int i = 0;
//   while (i < n && n - i > 1) {
//     int temp = arr[i];
//     arr[i] = arr[i + 1];
//     arr[i + 1] = temp;
//     i = i + 2;
//   }
// }

// int main() {
//   int n;
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   int arr[100];
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
//   swapAlternate(arr, n);
//   printArray(arr, n);
// }

// // All unique
// void printArray(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

// bool inGroup(int arr[], int n, int ele) {
//   for (int i = 0; i < n; i++) {
//     if (arr[i] == ele) return true;
//   }
//   return false;
// }

// int main() {
//   int n, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
//   //check for uniqueness
//   int unique[100], group[100], k = 0, l = 0;
//   for (int i = 0; i < n; i++) {
//     int uniqueEle = arr[i];
//     bool isUnique = true, isGrouped = false;
//     if (!inGroup(group, l, uniqueEle)) {
//       for (int j = i + 1; j < n; j++) {
//         if (arr[j] == uniqueEle) {
//           isUnique = false;
//           break;
//         }
//       }
//     } else {
//       isUnique = false;
//       isGrouped = true;
//     }
//     if (isUnique) {
//       unique[k] = uniqueEle;
//       k = k + 1;
//     } else {
//       if (!isGrouped) {
//         group[l] = uniqueEle;
//         l = l + 1;
//       }
//     }
//   }
//   printArray(unique, k);
// }

//All nth occurance of array element
// void printArray(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

// bool nthOccuranceGroup(int arr[], int n, int ele) {
//   for (int i = 0; i < n; i++) {
//     if (arr[i] == ele) return true;
//   }
//   return false;
// }

// int main() {
//   int n, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
//   int occurance;
//   cout <<"Enter the occurance value: ";
//   cin >>occurance;
//   int nthGroup[100], otherGroup[100], k = 0, l = 0;
//   for (int i = 0; i < n; i++) {
//     int ele = arr[i], count = 1;
//     if (!(nthOccuranceGroup(nthGroup, k, ele) || nthOccuranceGroup(otherGroup, l, ele))) {
//       for (int j = i + 1; j < n; j++) {
//         if (arr[j] == ele) count = count + 1;
//       }
//     } else continue;
//     if (count == occurance) {
//       nthGroup[k] = ele;
//       k = k + 1;
//     } else {
//       otherGroup[l] = ele;
//       l = l + 1;
//     }
//   }
//   printArray(nthGroup, k);
// }

//Array intersection
// void inputArray(int arr[], int n) {
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

// void printArray(int arr[], int n) {
//   cout <<"Output array: ";
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

// bool groupCheck(int arr[], int n, int ele) {
//   for (int i = 0; i < n; i++) {
//     if (arr[i] == ele) return true;
//   }
//   return false;
// }

// int arrayIntersection(int intersect[], int arr_1[], int arr_2[], int n1, int n2) {
//   int otherGroup[100], k = 0, l = 0;
//   for (int i = 0; i < n1; i++) {
//     int ele = arr_1[i];
//     bool isIntersect = false;
//     if (!(groupCheck(intersect, k, ele) || groupCheck(otherGroup, l, ele))) {
//       for (int j = 0; j < n2; j++) {
//         if (arr_2[j] == ele) {
//           isIntersect = true;
//           break;
//         }
//       }
//     } else continue;
//     if (isIntersect) {
//       intersect[k] = ele;
//       k = k + 1;
//     } else {
//       otherGroup[l] = ele;
//       l = l + 1;
//     }
//   }
//   return k;
// }

// int main() {
//   int arr_1[100], arr_2[100], n1, n2;
//   cout <<"Enter the size of first array: ";
//   cin >>n1;
//   inputArray(arr_1, n1);
//   cout <<"Enter the size of second array: ";
//   cin >>n2;
//   inputArray(arr_2, n2);
//   int intersect[100], size;
//   if (n1 < n2) {
//     size = arrayIntersection(intersect, arr_1, arr_2, n1, n2);
//   } else {
//     size = arrayIntersection(intersect, arr_2, arr_1, n2, n1);
//   }
//   printArray(intersect, size);
// }

//Array intersection (another apporach)
// void printArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Output Array: ";
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

// void inputArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

// void intersect(int arr_1[], int arr_2[], int n1, int n2) {
//   for (int i = 0; i < n1; i++) {
//     int ele = arr_1[i];
//     bool isIntersect = false;
//     for (int j = 0; j < n2; j++) {
//       if (arr_2[j] == ele) {
//         isIntersect = true;
//         arr_2[j] = INT_MIN;
//         break;
//       }
//     }
//     if (isIntersect) cout <<ele <<" ";
//   }
// }

// int main() {
//   int n1, n2, arr_1[100], arr_2[100];
//   cout <<"Enter the size of first array: ";
//   cin >>n1;
//   inputArray(arr_1, n1);
//   cout <<"Enter the size of second array: ";
//   cin >>n2;
//   inputArray(arr_2, n2);
//   if (n1 < n2) {
//     intersect(arr_1, arr_2, n1, n2);
//   } else {
//     intersect(arr_2, arr_1, n2, n1);
//   }
// }

//Pair sum
// void inputArray(int arr[], int n) {
//   if ( n <= 0) return;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

// int main() {
//   int n, x, count = 0, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   cout <<"Enter a Number: ";
//   cin >>x;
//   for (int i = 0; i < n; i++) {
//     int firstEle = arr[i];
//     for (int j = i + 1; j < n; j++) {
//       if (firstEle + arr[j] == x) count = count + 1;
//     }
//   }
//   cout <<"Number of pairs whose sum is equal to " <<x <<" : " <<count <<endl;
// }

//Triplet sum
// void inputArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

// int main() {
//   int n, x, arr[100], count = 0;
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   cout <<"Enter a number: ";
//   cin >>x;
//   for (int i = 0; i < n; i++) {
//     int firstEle = arr[i];
//     for (int j = i + 1; j < n; j++) {
//       int secondEle = arr[j];
//       for (int k = j + 1; k < n; k++) {
//         if (firstEle + secondEle + arr[k] == x) count++;
//       }
//     }
//   }
//   cout <<"Count: " <<count <<endl;
// }

//Sort 0 1
// void inputArray(int arr[], int n) {
//   if (n <= 0) return;
//   cout <<"Enter array elements: ";
//   for (int i = 0; i < n; i++) {
//     cin >>arr[i];
//   }
// }

// void printArray(int arr[], int n) {
//   cout <<"Output array: ";
//   for (int i = 0; i < n; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
// }

// int main() { // failed in coding ninja test case with time limit exceed error.
//   int n, arr[100];
//   cout <<"Enter the size of the array: ";
//   cin >>n;
//   inputArray(arr, n);
//   for (int i = 0; i < n; i++) {
//     if (arr[i] != 0) {
//       for (int j = i + 1; j < n; j++) {
//         if (arr[j] == 0) {
//           int temp = arr[i];
//           arr[i] = arr[j];
//           arr[j] = temp;
//           break;
//         }
//       }
//     }
//   }
//   printArray(arr, n);
// }

//Sort 0 1 (another apporach)
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

int main() {
  int n, arr[100], i = 0, count = 0;
  cout <<"Enter the size of the array: ";
  cin >>n;
  inputArray(arr, n);
  while (i < n) {
    if (arr[i] == 0) {
      if (count > 0) {
        int temp = arr[i - count];
        arr[i - count] = arr[i];
        arr[i] = temp;
        i = i - count;
        count = 0;
      }
    } else count = count + 1;
    i = i + 1;
  }
  printArray(arr, n);
}
