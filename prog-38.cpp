#include <iostream>
using namespace std;

//String Length
// int stringLength(char arr[]) {
//   int count = 0;
//   while (arr[count] != '\0') {
//     count = count + 1;
//   }
//   return count;
// }

// int main() {
//   char arr[100];
//   cout <<"Enter a string: ";
//   cin >>arr;
//   int length = stringLength(arr);
//   cout <<"Total no. of characters present inside the string: " <<length <<endl;
// }

//Check Palindrome
// int stringLength(char arr[]) {
//   int count = 0;
//   while (arr[count] != '\0') {
//     count = count + 1;
//   }
//   return count;
// }

// bool checkPalindrome(char arr[], int n) {
//   bool isPalindrome = true;
//   int i = 0, j = n - 1;
//   while (i < j) {
//     if (arr[i] != arr[j]) {
//       isPalindrome = false;
//       break;
//     }
//     i++, j--;
//   }
//   return isPalindrome;
// }

// int main() {
//   char arr[100];
//   cout <<"Enter a string: ";
//   cin >>arr;
//   int n = stringLength(arr);
//   bool isPalindrome = checkPalindrome(arr, n);
//   if (isPalindrome) cout <<"Palindrome: " <<"true" <<endl;
//   else cout <<"Palindrome: " <<"false" <<endl;
// }

//Reverse array
// int stringLength(char arr[]) {
//   int count = 0;
//   while (arr[count] != '\0') {
//     count = count + 1;
//   }
//   return count;
// }

// void reverse(char arr[], int n) {
//   int i = 0, j = n - 1;
//   while (i < j) {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//     i++, j--;
//   }
// }

// int main() {
//   char arr[100];
//   cout <<"Enter a string: ";
//   cin >>arr;
//   int n = stringLength(arr);
//   reverse(arr, n);
//   cout <<"Reversed string: " <<arr <<endl;
// }

//Replace character
// void replaceChar(char arr[], char c1, char c2) {
//   for (int i = 0; arr[i] != '\0'; i++) {
//     if (arr[i] == c1) {
//       arr[i] = c2;
//     }
//   }
// }

// int main() {
//   char arr[100], c1, c2;
//   cout <<"Enter a string: ";
//   cin >>arr;
//   cout <<"Enter a character and the character with which it has to be replaced: ";
//   cin >>c1 >>c2;
//   replaceChar(arr, c1, c2);
//   cout <<"String after replacement: " <<arr <<endl;
// }

//trimSpace
// int stringLength(char arr[]) {
//   int count = 0;
//   while (arr[count] != '\0') {
//     count = count + 1;
//   }
//   return count;
// }

// void trimSpaces(char arr[], int n) {
//   int j = 0;
//   for (int i = 0; i < n; i++) {
//     if (arr[i] != ' ' && arr[i] != 9) {
//       arr[j] = arr[i];
//       j = j + 1;
//     }
//   }
//   arr[j] = '\0';
// }

// int main() {
//   char arr[100];
//   cout <<"Enter a string: ";
//   cin.getline(arr, 100);
//   int len = stringLength(arr);
//   trimSpaces(arr, len);
//   // cout <<"Trimmed string: " <<arr <<endl;
//   cout <<"Trimmed string:--" <<arr <<"--" <<endl;
// }

//Reverse string wordwise
//Apporach - 1
// int stringLength(char arr[]) {
//   int count = 0;
//   while (arr[count] != '\0') {
//     count = count + 1;
//   }
//   return count;
// }

// void reverseStringWordwise(char arr1[], char arr[], int n) {
//   arr1[n] = '\0';
//   int k = n - 1;
//   for (int i = 0; i <= n; i++) {
//     if (arr[i] == ' ' || arr[i] == '\0') {
//       for (int j = i - 1; j >= 0 && arr[j] != ' '; j--) {
//         arr1[k] = arr[j];
//         k = k - 1;
//       }
//       if (arr[i] != '\0') {
//         arr1[k] = ' ';
//         k = k - 1;
//       }
//     }
//   }
// }

// int main() {
//   char arr[100], arr1[99];
//   cout <<"Enter a string: ";
//   cin.getline(arr, 100);
//   int len = stringLength(arr);
//   reverseStringWordwise(arr1, arr, len);
//   cout <<"Wordwise reversed string: " <<arr1 <<endl;
// }

//Apporach - 2
// int stringLength(char arr[]) {
//   int count = 0;
//   while (arr[count] != '\0') {
//     count = count + 1;
//   }
//   return count;
// }

// void reverse(char arr[], int i, int j) {
//   while (i < j) {
//     char temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//     i++, j--;
//   }
// }

// void reverseStringWordwise(char arr[], int n) {
//   int i = 0;
//   for (int j = 0; j <= n; j++) {
//     if (arr[j] == ' ' || arr[j] == '\0') {
//       reverse(arr, i, j - 1);
//       i = j + 1;
//     }
//   }
// }

// int main() {
//   char arr[100];
//   cout <<"Enter a string: ";
//   cin.getline(arr, 100);
//   int n = stringLength(arr);
//   reverse(arr, 0, n - 1);
//   reverseStringWordwise(arr, n);
//   cout <<"Wordwise reversed string: " <<arr <<endl;
// }

//Strings -- inbuilt functions
// int main() {

  //strcmp
  // char arr[100], arr1[100];
  // cout <<"Enter first string: ";
  // // cin.getline(arr, 100);
  // cin >>arr;
  // cout <<"Enter second string: ";
  // // cin.getine(arr1, 100);
  // cin >>arr1;
  // cout <<"String comparision: " <<strcmp(arr, arr1) <<endl;

  //strcmp function works only with character arrays
  // char a = 'a';
  // char b = 'b';
  // int c = 1;
  // int d = 2;
  // int e[100] = { 1, 2, 3 };
  // int f[100] = { 1, 2, 3 };
  // cout <<"Char comparision: " <<strcmp(a, b) <<endl;
  // cout <<"int comparision: " <<strcmp(c, d) <<endl;
  // cout <<"int array comparision: " <<strcmp(e, f) <<endl;

  //strlen
  // char arr[100];
  // int a = 1;
  // int arr1[100] = { 1, 2, 3 };
  // cout <<"Enter a string: ";
  // cin.getline(arr, 100);

  //strlen function also works with character arrays only.
  // cout <<"Length: " <<strlen(arr) <<endl;
  // cout <<"int Length: " <<strlen(a) <<endl;
  // cout <<"int array Length: " <<strlen(arr1) <<endl;
  // cout <<strlen("abcd") <<endl;
  // cout <<strcmp("abcd", "abcd") <<endl;

  //strcpy -- automatically append null charcater at the ened.
  // char arr[100] = "abcde";
  // char arr1[100] = { 'a', 'b', 'c', 'd', 'e', '\0' };
  // cout <<"String comparision: " <<strcmp(arr, arr1) <<endl;
  // cout <<"Before copying: " <<endl;;
  // cout <<"arr: " <<arr <<endl;
  // cout <<"arr1: " <<arr1 <<endl;
  // cout <<"After copying: " <<endl;
  // cout <<"arr: " <<arr <<endl;
  // cout <<"arr1: " <<arr1 <<endl; 

  //strncpy
  // char arr[100] = "abcd";
  // char arr1[100] = "hello";
  // cout <<"Before copying: " <<endl;
  // cout <<"arr: " <<arr <<endl;
  // cout <<"arr1: " <<arr1 <<endl;
  // strncpy(arr, arr1, 3);
  // cout <<"After copying: " <<endl;
  // cout <<"arr: " <<arr <<endl;
  // cout <<"arr1: " <<arr1 <<endl;
  
  //strncpy function doesnot automatically appends null character at the end, null charcater is appended only if the no. of elements to be append is greater than the length of the string to be copied (in this case null character is appended at all remaining indexes).
  //   char arr[100] = "abcd";
  //   char arr1[100] = "xy";
  //   cout <<"Before copying: " <<endl;
  //   cout <<"arr: " <<arr <<endl;
  //   cout <<"arr1: " <<arr1 <<endl;
  //   strncpy(arr, arr1, 3);
  //   cout <<"After copying: " <<endl;
  //   cout <<"arr: " <<arr <<endl;
  //   cout <<"arr1: " <<arr1 <<endl;

// }

//Print all substrings
void printStr(char arr[], int i, int j) {
  for (i; i <= j; i++) {
    cout <<arr[i] <<" ";
  }
  cout <<endl;
}


void printSubstrings(char arr[]) {
  for (int i = 0; arr[i] != '\0'; i++) {
    for (int j = i; arr[j] != '\0'; j++) {
      printStr(arr, i, j);
    }
  }
}

int main() {
  char arr[100];
  cout <<"Enter a string: ";
  cin >>arr;
  cout <<"All possible substrings: " <<endl;
  printSubstrings(arr);
}