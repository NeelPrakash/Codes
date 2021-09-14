#include <iostream>
using namespace std;

// int main() {
//   char arr[100];
//   cout <<"Enter your name: ";
//   cin >>arr;
//   cout <<arr <<endl;
//   cout <<"arr[4]:--" <<arr[4] <<"--" <<endl;
//   arr[3] = '\0';
//   cout <<"arr - 1: " <<arr <<endl;
//   arr[3] = 'l';
//   arr[4] = 'x';
//   cout <<"arr - 2: " <<arr <<endl;
// }


// int main() {
  // char arr[10];
  // cout <<"arr: " <<arr <<endl;
  // if (arr[0] == '\0') cout <<"Some Random Text" <<endl; // exactly what is stored at the 0th index of the char array before initialization depands upon the compiler.
  
//   char arr1[10];
//   cout <<"Enter a string: ";
//   cin >>arr1;
//   cout <<"arr1: --" <<arr1 <<"--" <<endl;
//   if (arr1[0] == '\0') cout <<"Some Random text" <<endl;
//   else cout <<"Totally random" <<endl;
// }

// int main() {
//   char arr[100];
//   cout <<"Enter a string: ";
//   cin >>arr;
//   int length = stringLength(arr);
//   cout <<"Total number of charcaters present inside the string: " <<length <<endl;
// }

//Passing charcater array to the function
// void printInfo(char arr[]) {
//   cout <<"Byte size: --" <<sizeof(arr) <<endl;
// }

// int main() {
  // char arr[5] = { 'a', 'b', 'c' };
  // cout <<"arr: " <<arr <<endl;
  // for (int i = 0; i < 5; i++) {
  //   cout <<arr[i] <<" ";
  // }
  // cout <<endl;

  //
//   char arr[100];
//   cout <<"Enter a string: ";
//   cin >>arr;
//   bool status = false;
//   for (int i = 0; arr[i] != '\0'; i++) {
//     if (arr[i] == 'A') {
//       cout <<endl;
//       cout <<"A found" <<endl;
//       status = true;
//       break;
//     } else cout <<arr[i] <<" ";
//   }
//   cout <<endl;
//   if (!status) cout <<"A not found" <<endl;

//   //Passing character array to the function
//   char arr1[100];
//   cout <<"Enter one more string: ";
//   cin >>arr1;
//   cout <<"byte size: " <<sizeof(arr1) <<endl;
//   printInfo(arr1); // here also just the address of the 0th memory location is passed into the printInfo function which occupies 4 byte of space.
// }

// //looping over the string
// int main() {
//   char arr[100];
//   cout <<"Enter your name: ";
//   cin >>arr;
//   cout <<"Yours name: " <<arr <<endl;
  
//   cout <<"For loop: ";
//   for (int i = 0; arr[i] != '\0'; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<endl;
//   cout <<"Experiment: " <<endl;
//   for (int i = 0; i < 7; i++) {
//     cout <<arr[i] <<" ";
//   }
//   cout <<"--" <<endl;

//   cout <<"While loop: ";
//   int index = 0;
//   while (arr[index] != '\0') {
//     cout <<arr[index] <<" ";
//     index = index + 1;
//   }
//   cout <<endl;

//   // take input into a character array with the help of loops is also possible however not required.
//   char age[10];
//   cout <<"Enter yours age: ";
//   for (int i = 0; i < 3; i++) {
//     cin >>age[i];
//   }
//   for (int j = 0; j < 3; j++) {
//     cout <<age[j] <<" ";
//   }
//   cout <<endl;
//   cout <<"Yours Name:--" <<age <<endl;

//   cout <<"More Experiment: " <<endl;
//   char arr2[5] = { 'a', 'b', 'c' };
//   for (int i = 0; i < 7; i++) {
//     cout <<arr2[i] <<" ";
//   }
//   cout <<"--" <<endl;
//   cout <<"a";
//   // Printing the null character -- ignored not printed at all.
//   cout <<'\0'; 
//   cout <<"b";

// }

//comparision of special charcters also works well.
// int main() {
//   char arr[] = {'!', '_', '$', '-', '~', '@' };
//   char arr1[] = { '!', '_', '$', '-', '~', '@' };
//   int count = 0;
//   while (arr[count] != '\0') {
//     if (arr[count] != arr1[count]) {
//       cout <<"arr[count]: " <<arr[count] <<", arr1[count]: " <<arr1[count] <<endl;
//       break;
//     }
//     count = count + 1;
//   }
//   cout <<"Count: " <<count <<endl;
//   char arr2[5];
//   cout <<"arr2[5]:--" <<arr2 <<"--" <<endl;
//   char x = arr2[0];
//   cout <<"x:--" <<x <<"--" <<endl;
// }
