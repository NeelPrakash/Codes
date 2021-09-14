#include <iostream>
#include <string>
using namespace std;

//C++ Pointers
//int main() {
	//Pointer decleration
//	//int, float and double type
//	int x = 25;
//	int* ptx = &x;
//	cout <<"&x: " <<&x <<", ptx: " <<ptx <<endl;
//	
//	float y = 2.5;
//	float* pty = &y;
//	int *pointerY = &y; // [Error] cannot convert 'float*' to 'int*' in initialization (datatype of the pointer must matches with the datatype of the variable whose address has to be stored isnide the pointer)
//	cout <<"&y: " <<&y <<", pty: " <<pty <<endl;
	
//	
//	double z = 2.325;
//	double* ptz = &z;
//	cout <<"&z: " <<&z <<", ptz: " <<ptz <<endl;
//
//	int *ptr, ptrVal = 5;
//	ptr = ptrVal; // pointers are only capable of storing the address of a variable not its value.
//
//	//Derefrence operator
//	cout <<endl;
//	cout <<"x: " <<x <<", *ptx: " <<*ptx <<endl;
//	cout <<"y: " <<y <<", *pty: " <<*pty <<endl;
//	cout <<"z: " <<z <<", *ptz: " <<*ptz <<endl;
	
	//Pointer airthematics (use of only + and - operators are allowed, pointer airthematics makes sense only in case of array pointers)
//	int x = 21;
//	int* ptx = &x;
//	cout <<"ptx: " <<ptx <<endl;
//	
//	ptx = ptx + 2;
//	cout <<"ptx + 2: " <<ptx <<endl;
//	ptx = ptx - 2;
//	cout <<"ptx - 2: " <<ptx <<endl;
	
//	ptx = ptx * 2; //[Error] invalid operands of types 'int*' and 'int' to binary 'operator*'
//	ptx = ptx / 2; //[Error] invalid operands of types 'int*' and 'int' to binary 'operator/'
//	ptx = ptx % 2; //[Error] invalid operands of types 'int*' and 'int' to binary 'operator%'
	
//	//Arrays and pointer (name of the array behaves approximately the same as that of a pointer to 0th index of the array, there are only some minor differences exist between them)
//	int arr[] = { 1, 2, 3, 4, 5};
//	cout <<arr <<endl;
//	
//	//All three will return exactly the same value.
//	int* ptarr0 = arr;
////	int* Ptarr0 = &arr; // storing &arr into a pointer is not allowed
//	int* PTarr0 = &arr[0];
//	
//	cout <<"arr: " <<arr <<", &arr: " <<&arr <<", &arr[0]: " <<&arr[0] <<endl;
//	cout <<"ptarr0: " <<ptarr0 <<", PTarr0: " <<PTarr0 <<endl;
//	
//	//Using + and - operator on the array name also behaves the same as they behave in case of pointer airthematics
//	cout <<endl;
//	for (int i = 0; i < 5; i++) {
//		cout <<"arr + " <<i <<": " <<arr + i <<", *(arr + i): " <<*(arr + i) <<endl;
//		cout <<"PTarr0 + " <<i <<": " <<PTarr0 + i <<", *(PTarr0 + i): " <<*(PTarr0 + i) <<endl;
//		cout <<endl;
//	}
//	
//	cout <<endl;
//	cout <<"arr: " <<arr <<", &arr: " <<&arr <<", *arr: " <<*arr <<", *(&arr): " <<*(&arr) <<endl; // in *(&arr) * and & cancels each other hence the resultant value is same as arr.
//	
//	//Differences
//	//1. sizeof operator
//	cout <<"sizeof(arr): " <<sizeof(arr) <<", sizeof(PTarr0): " <<sizeof(PTarr0) <<endl; //using the sizeof opertor on the array name returns the actual size of the array while using the sizeof operator on the pointer to the 0th index of the array returns the size of the pointer itself ( As a seprate memory space is allocated fro pointers (generally 8 bytes)) not the size of the actual array.
//	
//	//2. & operator
//	cout <<"&arr: " <<&arr <<", &PTarr0: " <<&PTarr0 <<endl; // Using & operator on the array name returns the address of the array while using & operator on the pointer to the 0th index of the array returns the address of the pointer itself.
//	
//	//3.Reassignment to a pointer variable is allowed but reassignment to the array name itself is not allowed (As there there is no seprate space is present for the array name, array name is just an entry made inside the symbol table and once an entry is made inside the symbol table it cannot be changed).
//	PTarr0 = &arr[2];
//	cout <<"*PTarr0: " <<*PTarr0 <<endl;
////	arr = arr + 2; //not allowed
////	arr++; // not allowed
		
		//Both are internally evaluated as *(arr + 1)
//	cout <<arr[1] <<endl;
//	cout <<1[arr] <<endl; // works fine. it

	//strings and pointers
//	string str = "SomeRandomText";
//	cout <<"str: " <<str <<endl;
//	
//	string* ptstr = &str;
//	cout <<"ptstr: " <<ptstr <<endl; //Address of the string gets printed
//	
////	string* ptsrt0 = &str[0]; // [Error] cannot convert 'char*' to 'std::string* {aka std::basic_string<char>*}' in initialization (the value present at any particular index of the string is of char type hence here the type of the pointer must be char not string).
//	char* ptstr0 = &str[0];
//	char* ptstr3 = &str[3];
//	cout <<"ptstr0: " <<ptstr0 <<endl; // since pointer to any particular index of the string is treated as the char pointer hence in this case the complete stirng starting from the given index gets printed.
//	cout <<"ptstr3: " <<ptstr3 <<endl;
	
	//2d and 3d array pointer
//	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout <<"&arr[" <<i <<"][" <<j <<"]: " <<&arr[i][j] <<endl;
//			cout <<"*(&arr[" <<i <<"][" <<j <<"]): " <<*(&arr[i][j]) <<endl;
//			cout <<endl;
//		}
//		cout <<endl;
//	}
	
//	int arr[2][2][3] = { { { 1, 2, 3 }, { 4, 5, 6 } }, { { 6, 5, 4 }, { 3, 2, 1 } } };
////	int* ptarr0 = &arr[0]; // not allowed
////	int* patrr1 = &arr[1];
////	cout <<"ptarr0: " <<ptarr0 <<", ptarr1: " <<ptarr1 <<endl;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			for (int k = 0; k < 3; k++) {
//				int* ptarr = &arr[i][j][k];
//				cout <<"ptarr[" <<i <<"][" <<j <<"][" <<k <<"]: " <<ptarr <<endl;
//				cout <<"*ptarr[" <<i <<"][" <<j <<"][" <<k <<"]: " <<*ptarr <<endl;
//				cout <<endl;
//			}
//			cout <<endl;
//		}
//	}

	//Character pointers
	//cout function behaves a little bit differently in case of charater array and character pointers, in case of character arrays whenever we try to print the value of the pointer then insted of printing the address of the specific memory location it will print the value present at the address stored inside the pointer and continues printing the consecutive memory locations untill it finds a null charcater.
//	char arr[] = "SomeRandomText";
//	char* ptarr0  = &arr[0]; //works same as that of the name of the array arr.
//	char* ptarr2 = &arr[2];
//	cout <<"ptarr0: " <<ptarr0 <<endl;
//	cout <<"ptarr2: " <<ptarr2 <<endl;

//	char a = 'a'; // here in this case also cout behaves the same, it will first print the value present at the address stored inside the pointer and then continues the print the consecutive memory locations (garbage values as char type contains a single character inside of it) untill it hits a null character.
//	char* pta = &a;
//	cout <<"pta: " <<pta <<endl;
//}	

//functions and pointer (pointers are also passsed by value into the function)
//Example 1
//void Func (int* x) {
//	cout <<endl;
//	cout <<"x: " <<x <<endl;
//	x = x + 1;  //changes made in a are not visible outside of the function.
//	cout <<"x: " <<x <<endl;
//	cout <<endl;
//}
//
//int main() {
//	int a = 21;
//	int* pta = &a;
//	cout <<"Before Func call: " <<endl;
//	cout <<"pta: " <<pta <<", *pta: " <<*pta <<endl;
//	Func(pta);
//	cout <<"After Func call: " <<endl;
//	cout <<"pta: " <<pta <<", *pta: " <<*pta <<endl;
//}

//Example 2
//void Func1 (int* x) {
//	cout <<endl;
//	
//	cout <<"*x: " <<*x <<endl;
//	*x = *x + 2; // this change is even visibe outside of the function as we are not changing the value of the parameter passed inside the function insted we are going to that value (address) and then changing the value present over there.
//	cout <<"*x: " <<*x <<endl;
//	
//	cout <<endl;
//}
//
//int main() {
//	int a = 5;
//	int* pta = &a;
//	cout <<"Before calling the function: " <<endl;
//	cout <<"*pta: " <<*pta <<endl;
//	Func1(pta);
//	cout <<"After calling the function: " <<endl;
//	cout <<"*pta: " <<*pta <<endl;
//}

//By default arrays are always passed into the function as pointers
//both are equivalent
//void func (int* arr, int n) {
//void Func (int arr[], int n) { 
//	 cout <<"arr: " <<arr <<endl;
//	 if (n <= 0) return;
//	 cout <<"Output array: ";
//	 for (int i = 0; i < n; i++) {
//	 	 cout <<arr[i] <<"  ";	
//	 }
//	 cout <<endl;
//}
//
//void Func1 (int* arr, int n) {
//	cout <<"arr: " <<arr <<endl;
//	if (n <= 0) return;
//	cout <<"Output array: ";
//	for (int i = 0; i < n; i++) {
//		cout <<arr[i] <<" ";
//	}
//	cout <<endl;
//}
//
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//	cout <<"arr: " <<arr <<endl;
//	cout <<endl;
//	cout <<"Calling function: " <<endl;
//	Func(arr, 5);
//	Func1(arr, 5);
//}

//One of the major advantage of this default behaviour is that we can now pass only a certaing portion of the array into the fucntion.
//void Func(int* arr, int n) {
//	cout <<"arr: " <<arr <<endl;
//	for (int i = 0; i < n; i++) {
//		cout <<arr[i] <<" ";
//	}
//	cout <<endl;
//}
//
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int *ptarr0 = &arr[0];
//	int *ptarr2 = &arr[2];
//	
//	cout <<"ptarr0: " <<ptarr0 <<", *ptarr2: " <<*ptarr2 <<endl;
//	cout <<"ptarr2: " <<ptarr2 <<", *ptarr2: " <<*ptarr2 <<endl;
//	cout <<endl;
//	
//	for (int i = 0; i < 5; i++) {
//		cout <<"&arr[" <<i <<"]: " <<&arr[i] <<", *(&arr[" <<i <<"]): " <<*(&arr[i]) <<endl;
//	}
//	
//	Func(ptarr0, 5);
//	Func(ptarr2, 3);
//}

//Example 2 (character array)
//void Func(char* arr) {
//	cout <<"arr: " <<arr <<endl;
//}
//
//int main() {
//	char arr[] = "SomeRandomText";
//	char* ptarr0 = &arr[0];
//	char* ptarr2 = &arr[2];
//	Func(ptarr0);
//	Func(ptarr2);
//}

//Double pointer (double pointers are the pointers which hold the address of another pointer)
//int main() {
//	int x = 7;
//	int* ptx = &x;
//	int **pptx = &ptx;
//	int ***ppptx = &pptx;
//	int ****pppptx = &ppptx;
//	
//	cout <<"ptx: " <<ptx <<", pptx: " <<pptx <<", ppptx: " <<ppptx <<", pppptx: " <<pppptx <<endl;
//	cout <<"*ptx: " <<*ptx <<", **pptx: " <<**pptx <<", ***ppptx: " <<***ppptx <<", ****pppptx: " <<****pppptx <<endl;
//}

//int main() {
//	int x = 8;
//	int *px = &x;
//	int* *ppx = &px;
//	
//	cout <<"x: " <<x <<endl;
//	cout <<"*px: " <<*px <<endl;
//	cout <<"**ppx: " <<**ppx <<endl;
//	
//	int* **pppx = &ppx;
//	int* ***ppppx = &pppx;
//	
//	cout <<"***pppx: " <<***pppx <<endl;
//	cout <<"****ppppx: " <<****ppppx <<endl;
//	
//	cout <<endl;
//	cout <<"&x == px: " <<&x <<" == " <<px <<endl;
//	cout <<"&px == ppx: " <<&px <<" == " <<ppx <<endl;
//	cout <<"&ppx == pppx: " <<&ppx <<" == " <<pppx <<endl;
//	cout <<"&pppx == ppppx: " <<&pppx <<" == " <<ppppx <<endl;
//	
//	cout <<endl;
//	cout <<"*px == x: " <<*px <<" == " <<x <<endl;
//	cout <<"*ppx == px: " <<*ppx <<" == " <<px <<endl;
//	cout <<"*pppx == ppx: " <<*pppx <<" == " <<ppx <<endl;
//	cout <<"*ppppx == pppx: " <<*ppppx <<" == " <<pppx <<endl;
//}

//Double pointers and functions
//void Func(int** x) {
//	cout <<endl;
//	cout <<"x: " <<x <<", **x: " <<**x <<endl;
//	**x = **x + 2;
//	cout <<"x: " <<x <<", **x: " <<**x <<endl;
//	cout <<endl;
//}
//
//int main() {
//	int a = 28;
//	int* pta = &a;
//	int **ppta = &pta;
//	cout <<"Before function call: " <<endl;
//	cout <<"**ppta: " <<**ppta <<endl;
//	Func(ppta);
//	cout <<"After function call: " <<endl;
//	cout <<"**ppta: " <<**ppta <<endl;
//}

//Substracting / Adding one pointer from another
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
// 	int k = 0;
// 	
// 	//if we substract or add one pointer from another then the result is an integer value which indicates that how far the second address is from the first one.
//	for (int i = 1; i <= 5; i++) {
//	 	cout <<"arr[" <<i - 1 <<"]: " <<arr[i - 1] <<endl;
//	 	cout <<"&arr[" <<i <<"] - arr[" <<i - (1 + k) <<"]: " <<&arr[i] <<" - " <<&arr[i - (1 + k)] <<" = " <<&arr[i] - &arr[i - (1 + k)] <<endl;
//	 	k = k + 1;
//	}
//}

//Experiment (Reason of the error is not found)
//void Func(int* arr, int m, int n) {
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout <<arr[i][j] <<endl; //Error
//		}
//		cout <<endl;
//	}
//}
//
//int main() {
//	int arr[][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int* ptarr = &arr[0][0];
//	cout <<"ptarr: " <<ptarr <<endl;
//	Func(ptarr, 2, 3);
//}

//Experiment
//int main() {
//	int i, j;
//	j = 7;
//	int k = 44;
//	cout <<"i: " <<i <<", &i: " <<&i <<endl; // why this address wont changes even if the file chages? ans not found.
//	cout <<"j: " <<j <<", &j: " <<&j <<endl;
//	cout <<"k: " <<k <<", &k: " <<&k <<endl;
//	
//	int * p = &i;
//	cout <<"p: " <<p <<endl;
//	cout <<"&p: " <<&p <<endl;
//}

//int main() {
//	int i = 65;
//	char c = i;
//	cout <<"i: " <<i <<", c: " <<c <<endl;
	
	//Pointer typecasting (Some more experimentation)
//	int x = 65;
//	int* ptx = &x;
////	char* ptx1 = ptx; // [Error] cannot convert 'int*' to 'char*' in initialization (implicit conversion of int type pointer into the char type is not allowed however explicit conversion works well)
////	cout <<char(ptx) <<endl; // [Error] cast from 'int*' to 'char' loses precision [-fpermissive]
//	char* ptx1 = (char*) ptx;
//	cout <<"ptx: " <<ptx <<", ptx1: " <<ptx1 <<endl;
//	
//	char* ptx2 = (char*) &x;
//	cout <<"ptx2: " <<ptx2 <<endl;
	
//	char a = 'A';
//	char* pta = &a;
//	int* pta1 = (int*) pta;
//	cout <<"pta: " <<pta <<", pta1: " <<pta1 <<", *pta1: " <<*pta1 <<endl;
//	
//	char arr[5] = "ABCD";
//	char* ptarr = &arr[0];
//	cout <<"ptarr: " <<ptarr <<endl;
//	
//	int* ptarr1 = (int*) ptarr;
//	cout <<&arr <<endl;
//	cout <<"ptarr1: " <<ptarr1 <<", *ptarr1: " <<*ptarr1 <<endl; //the result of *ptarr1 is not as expected (result is 1145258561 and expected result is 1094861636)

//	int x = 65;
//	int* ptx = &x;
//	float* ptx1 = (float*) ptx;
//	cout <<"ptx: " <<ptx <<", *ptx: " <<*ptx <<", ptx1: " <<ptx1 <<", *ptx1: " <<*ptx1 <<endl;
//	
//	double* ptx2 = (double*) ptx;
//	double* ptx3 = (double*) ptx1;
//	cout <<"ptx2: " <<ptx2 <<", *ptx2: " <<*ptx2 <<", ptx3: " <<ptx3 <<", *ptx3: " <<*ptx3 <<endl;
//	
//	string* ptx4 = (string*) ptx;
//	cout <<"ptx4: " <<ptx4 <<", *ptx4: " <<*ptx4 <<endl;
	
//	string str = "ABCD";
//	string* ptstr = &str;
//	cout <<"ptstr: " <<ptstr <<", *ptstr: " <<*ptstr <<endl;
//	
//	int* ptstr1 = (int*) ptstr;
//	double* ptstr2 = (double*) ptstr;
//	
//	cout <<"ptstr1: " <<ptstr1 <<", *ptstr1: " <<*ptstr1 <<", ptstr2: " <<ptstr2 <<", *ptstr2: " <<*ptstr2 <<endl;
	
//	int x = 66;
//	int* ptx = &x;
//	char* ptx1 = (char*) ptx;
//	cout <<"ptx: " <<ptx <<", *ptx: " <<*ptx <<", ptx1: " <<ptx1 <<", *ptx1: " <<*ptx1 <<endl;
	
	//Eperiment 2 (int, float, char pointer typecasting and result verification) (one thing is clear from the above experimentation that compiler is considering value in 32 bits not 64 bits)
//	int x = 74965; // corresponding binary no. -- 00000000000000010010010011010101 (last 8 bits -- 11010101 (213 in dec)) result is also as expected.
//	int* ptx = &x;
//	char* ptx1 = (char*) ptx;
//	
//	cout <<"213: " <<"--" <<char(213) <<"--" <<endl;
//	cout <<"ptx1: " <<ptx1 <<"*ptx1: " <<*ptx1 <<endl;
//	
//	int y = 9469528; // corresponding binary no. -- 00000000100100000111111001011000 (last 8 bits -- 01011000 (88 in dec)), euivalent character -- X) result is also capital X
//	char* pty = (char*) &y;
//	
//	cout <<"88: " <<char(88) <<endl;
//	cout <<"pty: " <<pty <<", *pty: " <<*pty <<endl;
//	
//	float z = 1.45;  //Corresponding floating point number -- 1.0111 0011 0011 0011 0011 0011 0011 0011 0011 0011 0011 0011 0011 0011 0011 0011, value that has to be stored inside the memory -- 0 (sign bit) 0111 1111 (exponent) (1) -- by default first digit of mantissa is always 1. 0111 0011 0011 0011 0011 001 (since the first digit of matisaa is always considered as 1 hence must left if in calculations. therefore the value stored isnide the memory is 0 0111 1111 0111 0011 0011 0011 0011 001 -- equivalent dec no. (1069128089 but the result is 1069128090 -- 00111111101110011001100110011010 (last 8 bit -- 10011010 (88) character -- X) )
//	float* ptz = &z;
//	int* ptz1 = (int*) ptz;
//	char* ptz2 = (char*) ptz;
//	
//	cout <<"ptz: " <<ptz <<", ptz1: " <<ptz1 <<", ptz2: " <<ptz2 <<endl;
//	cout <<"*ptz: " <<*ptz <<", *ptz1: " <<*ptz1 <<", *ptz2: " <<*ptz2 <<endl;
//	
//	float p = 29.475; // Corresponding floating point number -- 1 1101.0111 1001 1001 1001 1001 1001 1001 1001 1001 1001 1001 1001 1001 1001 1001 1001 1, value to be stored inside the memory -- 0 (sign bit) 1000 0011 (exponent) 1101 0111 1001 1001 1001 100 (mantissa), equivalent dec value = 1105972428 but the result is 1105972429 (no idea about why the result is always 1 greater than the value found in the calculations) -- 01000001111010111100110011001101 (binary), last 8 bit 11001101 -- 205)  
//	float* ptp = &p;
//	int* ptp1 = (int*) ptp;
//	char* ptp2 = (char*) ptp;
//	
//	cout <<"ptp: " <<ptp <<", *ptp: " <<*ptp <<endl;
//	cout <<"ptp1: " <<ptp1 <<", *ptp1: " <<*ptp1 <<endl;
//	cout <<"ptp2: " <<ptp2 <<", *ptp2: " <<*ptp2 <<endl;
//	cout <<"205: " <<char(205) <<endl;
//}	
