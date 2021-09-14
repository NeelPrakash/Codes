#include <iostream>
#inlcude <string>
using namespace std;

int main() {
	//const type variable
	/*
	// int type
	const int x = 1; // for normal variables, const keyword can appear both before or after the vaiable datatype.
	int const y = 2;
	cout <<"x: " <<x <<", y: " <<y <<endl;
	
	x = x + 1; //Modifications in const type of variables are not allowed.
	y = y + 1;
	cout <<"x: " <<x <<", y: " <<y <<endl;
	
	const int x; //const type of variables must be declared and initialized at the same time.
	x = 1;
	cout <<"x: " <<x <<endl;
	
	const int x = 1;
	const int* ptx = &x;
	const int& refx = x;
	cout <<"&x: " <<&x <<", ptx: " <<ptx <<", *ptx: " <<*ptx <<", refx: " <<refx <<endl;
	
	int& ptx1 = x; // Pointer or refrence to a const type of variable must be of const type.
	int* refx1 = &x;
	cout <<"ptx: " <<ptx <<", *refx1: " <<*refx1 <<endl;

	int* const ptx1 = &x; //For pointer and refrence type of variables use of const keyword after the variable datatype is not allowed, it must appear before the variable datatype.
	int& const refx1 = x;

	// const type of refrence and pointer to the non const type.
	if we make the refrence or pointer to a non const type of variable to be of const type then we cant modify the value of the vaiable via these constant refrence or pointer variables but value of the variable can stil be modified via the original variable identifier or any other non const type of refrence or pointer to the same variable -- changes are visible everywhere.
	int x = 1;
	int& y1 = x;
	int* y2 = &x;
	
	cout <<"y1: " <<y1 <<endl;
	cout <<"&x: " <<&x <<", y2: " <<y2 <<", *y2: " <<*y2 <<endl <<endl;
	
	y1++;
	cout <<"y1: " <<y1 <<endl;
	(*y2)++;
	cout <<"*y2: " <<*y2 <<endl <<endl;
	
	const int& z1 = x;
	const int* z2 = &x;
	
	cout <<"z1: " <<z1 <<endl;
	cout <<"&x: " <<&x <<", z2: " <<z2 <<", *z2: " <<*z2 <<endl <<endl;
	
//	z1++;
//	(*z2)++;
	y1 = y1 + 1;
	cout <<"y1: " <<y1 <<endl;
	*y2 = *y2 + 1;
	cout <<"*z2: " <<*z2 <<endl;
	x = x + 1;
	cout <<"x: " <<x <<", y1: " <<y1 <<", *y2: " <<*y2 <<", z1: " <<z1 <<", *z2: " <<*z2 <<endl;
	
	//Char type
	char x = 'A';
	x = x + 1;
	cout <<"x: " <<x <<endl;
	
	const char ch = 'A';
	char const ch1 = 'B';
	cout <<"ch: " <<ch <<", ch1: " <<ch1 <<endl;
//	ch = 'C'; // values of const type of variables cant be modified.
//	ch1 = 'D';
//	cout <<"ch: " <<ch <<", ch1: " <<ch1 <<endl;

//	char& refch = ch; //Refrence or pointer to const type of variable must be of const type.
//	char* ptch = ch;
	const char& refch = ch;
	const char* ptch = &ch;
	cout <<"refch: " <<refch <<", ptch: " <<ptch <<endl;
	
	const pointer or refrence to a non const type char variable
	char ch = 'A';
	char& ch1 = ch;
	char* ch2 = &ch;
	cout <<"ch1: " <<ch1 <<", ch2: " <<ch2 <<endl;
	
	const char& ch3 = ch;
	const char* ch4 = &ch;
	cout <<"ch3: " <<ch3 <<", ch4: " <<ch4 <<endl <<endl;
	
// 	ch3 = 'B'; //not allowed
// 	*ch4 = 'C'; //not allowed
	
	ch1 = 'B';
	cout <<"ch3: " <<ch3 <<endl;
	*ch2 = 'C';
	cout <<"ch4: " <<ch4 <<endl;
	ch = ch + 1;
	cout <<"ch: " <<ch <<", ch1: " <<ch1 <<", ch2: " <<ch2 <<", ch3: " <<ch3 <<", ch4: " <<ch4 <<endl;
	*/
	
	//Exp - 1
	/*
	int x = 1;
	const int y1 = x; 
	
	//y1 is a variable of integer constant type hence any modification via y1 is not allowed.
//	y1 = y1 + 1; 
	cout <<"x: " <<x <<", y1: " <<y1 <<endl;
	*/
	
	//Exp - 2
	/*
	int const y2 = x;
	
	//y2 is a variable of constant integer type hence any modification via y2 is also not allowed.
//	y2 = y2 + 1;
	*/
	
	//Exp - 3
	/*
	int x = 1;
	int const* y1 = &x; //y1 is a pointer pointing to a constant integer, the pointer y1 itself is not constant.
	const int* y2 = &x; //y2 is a pointer pointing to an integer constant, the pointer y2 itself is not constant.
	const int* const y3 = &x; //y3 is a constant pointer pointing to an integer constant -- both the pointer and the value persent at the address stored inside the pointer are constant.
//	const int const* y4 = &x;	//Error duplicate const.
	
	//modiying the pointer
	cout <<"x: " <<x <<", y1: " <<y1 <<", *y1: " <<*y1 <<", y2: " <<y2 <<", *y2: " <<*y2 <<", y3: " <<y3 <<", *y3: " <<*y3 <<endl;
	y1 = y1 + 1;
	y2 = y2 + 1;
//	y3 = y3 + 1; //Since y3 is a constant pointer pointing to an integer constant hence value of y3 or the value stored at the addrerss pointing out by y3 cant be modified (however must note that value can stillbe modified via x, as at the end x is of non const type -- same thing is applicable for all other experiments shown below).
//	*y3 = *y3 + 1; // not allowed.

	cout <<"x: " <<x <<", y1: " <<y1 <<", *y1: " <<*y1 <<", y2:  "<<y2 <<", *y2: " <<*y2 <<", y3: " <<y3 <<", *y3: " <<*y3 <<endl;
	
	//both y1 and y2 are pointing to constant integer values hence they cant be modified.
//	*y1 = *y1 + 1;
//	*y2 = *y2 + 1;
	*/
	
	//Exp - 4
	/*
	int x = 1;
	int* const y1 = &x; //y1 is a constant pointer poinitng to an integer value.
	cout <<"x: " <<x <<", y1: " <<y1 <<", *y1: " <<*y1 <<endl;
	
	int y = 2;
//	y1 = &y; //Since y1 is a constant pointer hence the address stored inside the y1 cant be modified btu the value present at the address stored inside the pointer can be modified.
	(*y1)++;
	cout <<"x: " <<x <<", y1: " <<y1 <<", *y1 : "<<*y1 <<endl;
	*/
	
	//Exp - 5;
	/*
	char ch = 'A';
	cout <<"ch: " <<ch <<endl;
	
	const char* ch1 = &ch; // ch1 is a pointer poiniting to a character constant.
//	*ch1 = *ch1 + 1; //Since ch1 is pointing to a character constant hence the value hence the value present at the address stored inside the pointer cant be modified via ch1 however the address itself can be modified.
	cout <<"ch1: " <<ch1 <<endl;
	
	ch1++; //Modification within the addrress stored inside ch1 is allowed;
	cout <<"ch1: " <<ch1 <<endl;
	
//	const char& const ch2 = ch1; // ch2 is a constant refrence pointing to a character constant (Both the address stored inside ch2 and the value present at the address stored inside ch2 cant be modified.
	char const& ch2 = ch; //ch2 is a refrence of constant type to a charcater value.
	char ch3 = 'B';
//	ch2 = ch3; //Refrence type of values must be declared and assigned at the same time.
//	ch2 = ch2 + 1; //As ch2 is a refrence of constant type hence any modification in ch via ch2 is not allowed.

	char& ch4 = ch;
	cout <<"ch4: " <<ch4 <<endl;
 	
 	ch4 = ch4 + 1;
 	cout <<"ch4: " <<ch4 <<endl;
 	*/
	 	
 	//Array of constant type
 	//Exp - 1
 	//1d array
 	/*
 	int arr[] = { 1, 2, 3, 4, 5 };
 	arr[2] = 7;
 	
 	cout <<"Output array: " <<endl;
 	for (int i = 0; i < 5; i++) {
		cout <<arr[i] <<" ";
 	}
 	cout <<endl;
 	
 	//Constant integer array
 	const int arr1[] = { 1, 2, 3, 4, 5 }; //arr1 is an array of integer constants.
 	int const arr2[] = { 6, 7, 8, 9, 10 }; // arr2 is an array of constant integers.
// 	arr1[2] = 11; // [Error] assignment of read-only location 'arr1[2]'
// 	arr2[3] = 16; // [Error] assignment of read-only location 'arr2[3]'
 	cout <<"arr1[2]: " <<arr1[2] <<endl;
 	cout <<"arr2[3]: " <<arr2[3] <<endl;
 	*/
 	
 	//2d array
 	/*
 	int arr[][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
 	arr[0][1] = 7;
 	cout <<"arr[0][1]: " <<arr[0][1] <<endl;
 	
 	int arr1[] = { 7, 8, 9 };
// 	arr[0] = arr1; // [Error] invalid array assignement
// 	arr[0] = arr1[0]; // [Error] incompatible type in assignment of 'int' to 'int[3]'.
	
	const int arr2[][3] = { { 1, 2 }, { 3, 4 } };
	arr2[1][1] = 11; // [Error] assignment of read-only location 'arr2[1][1]'
	cout <<"arr2[1][1]: " <<arr2[1][1] <<endl;
	*/
	
	//Pointer arrays
	//both subarrays and main arrays are on th stack.
	/*
	int arr1[] = { 1, 2, 3 };
	int arr2[] = { 4, 5, 6 };
	const int* arr[] = { arr1, arr2 }; //arr is an array of pointers pointing to integer constants, pointer address stored inside the array are not constant.
	
	cout <<"Output array (Before modification): " <<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout <<arr[i][j] <<" ";
		}
		cout <<endl;
	}
	cout <<endl;
//	arr[0][1] = 7; //Since the pointers stored inside the array are pointing to constant integer values hence the value stored at a specific index cant be modified.
	
	int arr3[] = { 7, 8, 9 };
	arr[1] = arr3;
	
	cout <<"Output array (After modification): " <<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout <<arr[i][j] <<" ";
		}
		cout <<endl;
	}
	cout <<endl;
	*/
	
	//Sub arrays are on the heap and main arrays are on the stack.
	//Exp - 1
	/*
	int* arr1 = new int[2] { 1, 2 };
	int* arr2 = new int[2] { 3, 4 };
	const int* arr[] = { arr1, arr2 }; //arr is an array of pointers pointing to constant integers, pointer stored inside the array are not treated as constant values.
	cout <<"sizeof(arr): " <<sizeof(arr) <<endl <<endl;
	
	cout <<"Output array (Before modification): " <<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout <<arr[i][j] <<" ";
		}
		cout <<endl;
	}
	cout <<endl;
	
//	arr[1][0] = 5; // Since the integer values pointed out by the pointer are treated as constants by the arr hence value at any specifice 2d index of arr cant be modified.
	
	int arr3[] = { 5, 6 };	
	arr[1] = arr3;
	
	cout <<"Output array (After modification): " <<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout <<arr[i][j] <<" ";
		}
		cout <<endl;
	}
	cout <<endl;
	
	arr1[1] = 11; //Allowed.
	
	cout <<"Output array (After final modification): " <<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout <<arr[i][j] <<" ";
		}
		cout <<endl;
	}
	cout <<endl;
	*/
	
	//exp - 2
	/*
	int* arr1 = new int[2] { 1, 2 };
	int* arr2 = new int[2] { 3, 4 };
	
	const int* const arr[] = { arr1, arr2 }; //arr is an array of constant pointer pointing to integer constants.
	
	//since both the pointers stored inside the array and the integer values pointed out by them are treated as constants hence no modifications are allowed in any one of them via arr however values can be modified via arr1 because at the end arr1 is of non const type.
//	arr[1][1] = 5; // [Error] assignment of read-only location '*(((const int*)arr[1]) + 4u)'
	int arr3[] = new int[2] { 6, 7 };
//	arr[1] = arr3; // [Error] assignment of read-only location 'arr[1]'
	*/
	
	// charcater array
	//Exp - 1
	/*
	const char arr[] = "SomeRandomText";
	arr[1] = 'X'; // [Error] assignment of read-only location 'arr[1]'
	cout <<"arr: " <<arr <<endl;
	*/
	
	//Exp - 2 (1d char array)
	/*
	char arr[] = "SomeRandomText";
	const char* arr1 = &arr[0]; // arr1 is an pointer to character constants, the address stored inside the arr1 itself is not constant.
	const char* const arr2 = &arr[0]; // arr2 is a constant pointer pointing to charcater constant.
	
	cout <<"arr: " <<arr <<", arr1: " <<arr1 <<", arr2: " <<arr2 <<endl;
	
	// Since arr1 is a poniter pointing to charcater constant hence any modification withing the value present at the address stored inside the pointer is not allowed however the address itsef can be modified.	
//	arr1[0] = 'X'; 
	char arr3[] = "SomeMoreRandomText";
	arr1 = arr3;
	cout <<"arr: " <<arr <<", arr1: " <<arr1 <<", arr2: " <<arr2 <<endl;
	
	//Since both the pointer and the value present at the address pointed out by the pointer are treated as constant values hence none of them can be modified.
//	arr2[0] = 'Z';
	char arr4[] = "HelloWorld";
//	arr2 = arr4;
	cout <<"arr: " <<arr <<", arr1: " <<arr1 <<", arr2: " <<arr2 <<endl;
	*/
	
	//Exp - 3 (2d char array)
	/*
	char arr1[] = "SomeRandomText";
	char arr2[] = "someMoreRandomText";
	
	char* const arr[] = { arr1, arr2 }; // Array of constant pointers of char type.
	
	cout <<"Output array: " <<endl;
	for (int i = 0;i < 2; i++) {
		cout <<arr[i] <<" ";
	}
	cout <<endl <<endl;
	
	arr[0][1] = 'Z';
	char arr3[]  = "TotallyRandom";
//	arr[1] = arr3; //As pointers are constant over here hence this is not allowed.
	
	cout <<"Output array (After modification): " <<endl;
	for (int i = 0; i < 2; i++) {
		cout <<arr[i] <<" ";
	}
	cout <<endl;
	*/
	
	//String
	/*
	string str = "SomeRandomText";
	str[0] = 'X';
	
	cout <<"str: " <<str <<endl;
	
	const string* const pstr = &str;
	cout <<"pstr: " <<*pstr <<endl;
	
	*(pstr + 1) = 'Z'; //not allowed
	string str1 = "HelloWorld";
	pstr = &str1; //not allowed.
	*/
	
	//String array
	/*
	string str1 = "SomeRandomText";
	string str2 = "SomeMoreRandomText";
	
	const string arr[] = { str1, str2 }; //Array of string constants -- no modification are allowed over here.
	
	cout <<"Output Array (Before modification): " <<endl;
	for (int i = 0; i < 2; i++) {
		cout <<arr[i] <<" ";
	}
	cout <<endl <<endl;
	
	
	arr[1][3] = 'X'; //Error
	string str3 = "TotallyRandom";
	arr[1] = str3; //Error
	
	cout <<"Output array (After modification): " <<endl;
	for (int i = 0; i < 2; i++) {
		cout <<arr[i] <<" ";
	}
	cout <<endl;
	*/
	
}
