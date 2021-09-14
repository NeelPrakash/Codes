#include <iostream>
using namespace std;

//int main() {
//	int n;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	cout <<"n: " <<n <<endl;  //if the value of n is greater than 99999 then programme stop unexpectdly ( As we have already studied arrays are generally declared with fixed numeric size, vraible size arrays are not recommend the reason behind that is Every Programme starts with a small portoin of stack memory and since variable are read/ input is asked at the runtime hence if the value stored inside a varibale is very large then there is a high probabilty that available stack space becomes incapable of declearing such an array to avoid this use of fixed numeric value as the size of the array is used -- but it depand upon the compiler how that logic is implemented with mingcw / Dev c++ such things will not work in all cases -- a segmentation fault is thrown on us).
//	int arr[n];
//	arr[3] = 7;
//	cout <<"arr[3]: " <<arr[3] <<endl;
	
//	int n = 999990; //Segmentation fault
//	cout <<"n: " <<n <<endl;
//	int arr[n];
//	arr[2] = 44;
//	cout <<"arr[2]: " <<arr[2] <<endl;

//	int arr[999990]; //Segmentation fault  
//	int arr[111111]; //Wroks fine
//	arr[3] = 24;
//	cout <<"arr[3]: " <<arr[3] <<endl;

	//Declearing varibales on the heap
	
	//int type
//	int* ptint = new int;
//	*ptint = 27;
//	cout <<"ptint: " <<ptint <<", *ptint: " <<*ptint <<endl;
//	*ptint = *ptint + 1;
//	cout <<"&ptint: " <<&ptint <<", ptint: " <<ptint <<", *ptint: " <<*ptint <<endl;
//	delete ptint;
//	cout <<"*ptint: " <<*ptint <<endl; //Memory inside the heap is cleared hence a garbage value is printed over here.
	
	//float type
//	float* ptfloat = new float;
//	*ptfloat = 2.5;
//	cout <<"&ptfloat: " <<&ptfloat <<", ptfloat: " <<ptfloat <<", *ptfloat: " <<*ptfloat <<endl;
//	*ptfloat = *ptfloat + 1;
//	cout <<"&ptfloat: " <<&ptfloat <<", ptfloat: " <<ptfloat <<", *ptfloat: " <<*ptfloat <<endl;
//	delete ptfloat;
//	cout <<"*ptfloat: " <<*ptfloat <<endl; //garbage value as memory inside the heap is cleared.
	
	//char type
//	char* ptchar = new char;
//	*ptchar = 'A';
//	cout <<"&ptchar: " <<&ptchar <<", ptchar: " <<ptchar <<", *ptchar: " <<*ptchar <<endl;
//	*ptchar = 'C';
//	cout <<"&ptchar: " <<&ptchar <<", ptchar: " <<ptchar <<", *ptchar: " <<*ptchar <<endl;
//	delete ptchar;
//	cout <<"ptchar: " <<ptchar <<endl; // garbage value
	
	//String type
	
	/*
	string str1 = "SomeRandomText";
	string* ptstr1 = &str1;
	cout <<"ptstr1: " <<ptstr1 <<", *ptstr1: " <<*ptstr1 <<endl;
	cout <<endl;
	cout <<"ptstr1[2]: " <<ptstr1[2] <<endl;
	cout <<endl;
	ptstr1[2] = 'A'; // This doesnt work in case of string datatype but works well in case char array. 
	cout <<"ptstr1: " <<ptstr1 <<", *ptstr1: " <<*ptstr1 <<endl;
	
	char arr1[] = "SomeRandomText";
	char* ptarr1 = &arr1[0];
	cout <<"ptarr1: " <<ptarr1 <<", *ptarr1: " <<*ptarr1 <<endl;
	ptarr1[2] = 'A';
	cout <<"ptarr1: " <<ptarr1 <<", *ptarr1: " <<*ptarr1 <<endl;
//	*ptarr1[5] = 'X';  // [Error] invalid type argument of unary '*' (have 'char')
	cout <<"ptarr1: " <<ptarr1 <<", *ptarr1: " <<*ptarr1 <<endl;
	
	cout <<endl;
	cout <<"ptarr1[5]: " <<ptarr1[5] <<endl;
	cout <<endl;
	*/
	
//	string* ptstr = new string;
//	*ptstr = "SomeRandomText";
//	cout <<"ptstr: " <<ptstr <<", *ptstr: " <<*ptstr <<endl;
//	*ptstr = "SomeMoreRandomText";
//	cout <<"ptstr: " <<ptstr <<", *ptstr: " <<*ptstr <<endl;
//	delete ptstr;
//	cout <<"ptstr: " <<ptstr <<", *ptstr: " <<*ptstr <<endl;  //SomeGarbage value gets printed into the console.

	//Arrays
//	int n;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	
//	int* ptarr = new int[n];
//	cout <<"Enter array elements: " <<endl;
//	for (int i = 0; i < n; i++) {
//		ptarr[i] = i + 1;
//	}
//	cout <<"Output array: " <<endl;
//	for (int j = 0; j < n; j++) {
//		cout <<ptarr[j] <<"  ";
//	}
//	cout <<endl;
////	delete []ptarr;
////	for (int k = 0; k < 5; k++) {
////		cout <<ptarr[k] <<"  ";
////	}
////	cout <<endl;
//	
//	delete []ptarr;   //delete only means that memory is cleared, now it totally kinds of depand whether the values earlier stored at the given memory locations are overwritten or not.
//	for (int k = 0; k < n; k++) {
//		cout <<ptarr[k] <<" ";
//	}
//	cout <<endl;
//}

//Arrays dynamic allocation on the heap
//int main() {
	//int type
//	int n;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	int* ptarr = new int[n];
//	cout <<"Enter array elements: " <<endl;
//	for (int i = 0; i < n; i++) {
//		cin >>ptarr[i];
//	}
//	cout <<"Output array -- Before delete: " <<endl;
//	for (int j = 0; j < n; j++) {
//		cout <<ptarr[j] <<" ";
//	}
//	cout <<endl;
//	delete []ptarr;
//	cout <<"Output array -- After delete:  "<<endl;
//	for (int k = 0; k < n; k++) {
//		cout <<ptarr[k] <<" ";
//	}
//	cout <<endl;

	//float
//	int n = 11;
//	float* ptarr = new float[n];
//	for (int i = 0; i < n; i++) {
//		ptarr[i] = i + 0.5;
//	}
//	cout <<"Output array -- Before delete: " <<endl;
//	for (int j = 0; j < n; j++) {
//		cout <<ptarr[j] <<" ";
//	}
//	cout <<endl;
//	delete []ptarr;
//	cout <<"Output array -- After delete:  " <<endl;
//	for (int k = 0; k < n; k++) {
//		cout <<ptarr[k] <<" ";
//	}
//	cout <<endl;
	
//	char* ptarr = new char[25];
////	*ptarr = "SomeRandomText"; // [Error] invalid conversion from 'const char*' to 'char' [-fpermissive]
//	for (int i = 0; i < 25; i++) {
//		cin >>ptarr[i];
//		if (ptarr[i] == '$') {
//			ptarr[i] = '\0';
//			break;
//		}
//	}
//	cout <<"Output string --Before delete: " <<endl;
//	cout <<"ptarr: " <<ptarr <<endl;
//	delete []ptarr;
//	cout <<"Output string -- After delete: " <<endl;
//	cout <<"ptarr: " <<ptarr <<endl;

//	char* ptchar = new char;
//	*ptchar = 'A';
//	cout <<"ptchar: " <<ptchar <<endl;
//	delete ptchar;
//	cout <<"ptchar: " <<ptchar <<endl;

//	char arr[11];
//	char* ptarr = &arr[0];
//	*ptarr = "HelloWorld"; // not allowed.
//	cout <<"ptarr: " <<ptarr <<end;
//}

//Heap memory deallocation
//int main() {
//	int *ptx = new int;
//	*ptx = 25;
//	cout <<"Before delete: " <<endl;
//	cout <<"ptx: " <<ptx <<", *ptx: " <<*ptx <<endl;
//	delete ptx;
//	cout <<"After delete: " <<endl;
//	cout <<"ptx: " <<ptx <<", *ptx: " <<*ptx <<endl;
//	
// 	cout <<endl;
// 	
//	cout <<"Setting the pointer to point to a different memory location" <<endl;
//	int x = 1;
//	cout <<"&x: " <<&x <<", x: " <<x <<endl;
//	ptx = &x;
//	cout <<"&x: " <<&x <<", ptx: " <<ptx <<", *ptx: " <<*ptx <<endl;
//}

//int main() {
//	int* ptarr = new int[5];
//	cout <<"ptarr: " <<ptarr <<endl;
//	for (int i = 0; i < 5; i++) {
//		ptarr[i] = i + 1;
//	}
//	delete []ptarr;
//	cout <<"ptarr: " <<ptarr <<endl;
//	for (int j = 0; j < 5; j++) {
//		cout <<ptarr[j] <<" ";
//	}
//	cout <<endl;
//}

// decleration and initialization of the heap memory at the same time.
//int main() {
	//Varibale decleration and initialization
//	int* ptx = new int;
//	cout <<"*ptx: " <<*ptx <<endl;
//	
//	cout <<endl;
////	int* ptx1 = new int(4, 2); // [Error] new initializer expression list treated as compound expression [-fpermissive]
//	int* ptx1 = new int(4);
////	cout <<"*ptx1 : "<<*ptx1 <<endl;
//	
//	cout <<endl;
////	int* ptx2 = new int{5, 6};  // [Error] cannot convert '<brace-enclosed initializer list>' to 'int' in initialization
//	int* ptx2 = new int(5);
//	cout <<"*ptx2: " <<*ptx2 <<endl;
	
	//array decleration and initialization
//	int* ptarr = new int[5] (1, 2, 3, 4, 5);
//	int* ptarr1 = new int[5] {1, 2, 3, 4, 5};
//	for (int i = 0; i < 5; i++) {
//		cout <<ptarr1[i] <<" ";
//	}
	
//	char* ptarr2 = new char[11] { 'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' };
//	cout <<"ptarr2: " <<ptarr2 <<endl;
//	cout <<endl;
//	
//	char* ptarr3 = new char[45] { 'D', 'S', 'A', ' ', 'L', 'a', 'k', 's', 'h', 'y', 'a', ' ', 'B', 'a', 't', 'c', 'h' };
//	cout <<"ptarr3: " <<ptarr3 <<endl;
//}

//int main() {
//	int* ptx = new int(5);
//	cout <<"*ptx: " <<*ptx <<endl;
//	
//	double* ptx1 = new double {4.5};
//	cout <<"*ptx1: " <<*ptx1 <<endl;
//	
//	int* ptarr = new int[7] { 1, 2, 3, 4 }; // 0 is stored at all remaining indexes.
//	for (int i = 0; i < 7; i++) {
//		cout <<ptarr[i] <<" ";
//	}
//	cout <<endl;
//}

//More Experiments (Mostly repeated)
//int main() {
//	int n;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	cout <<"n: " <<n <<endl;  //if the value of n is greater than 99999 then programme stop unexpectdly ( As we have already studied arrays are generally declared with fixed numeric size, vraible size arrays are not recommend the reason behind that is Every Programme starts with a small portoin of stack memory and since variable are read/ input is asked at the runtime hence if the value stored inside a varibale is very large then there is a high probabilty that available stack space becomes incapable of declearing such an array to avoid this use of fixed numeric value as the size of the array is used -- but it depand upon the compiler how that logic is implemented with mingcw / Dev c++ such things will not work in all cases -- a segmentation fault is thrown on us).
//	int arr[n];
//	arr[3] = 7;
//	cout <<"arr[3]: " <<arr[3] <<endl;
	
//	int n = 999990; //Segmentation fault
//	cout <<"n: " <<n <<endl;
//	int arr[n];
//	arr[2] = 44;
//	cout <<"arr[2]: " <<arr[2] <<endl;

//	int arr[999990]; //Segmentation fault  
//	int arr[111111]; //Wroks fine
//	arr[3] = 24;
//	cout <<"arr[3]: " <<arr[3] <<endl;

	//Declearing varibales on the heap
	
	//int type
//	int* ptint = new int;
//	*ptint = 27;
//	cout <<"ptint: " <<ptint <<", *ptint: " <<*ptint <<endl;
//	*ptint = *ptint + 1;
//	cout <<"&ptint: " <<&ptint <<", ptint: " <<ptint <<", *ptint: " <<*ptint <<endl;
//	delete ptint;
//	cout <<"*ptint: " <<*ptint <<endl; //Memory inside the heap is cleared hence a garbage value is printed over here.
	
	//float type
//	float* ptfloat = new float;
//	*ptfloat = 2.5;
//	cout <<"&ptfloat: " <<&ptfloat <<", ptfloat: " <<ptfloat <<", *ptfloat: " <<*ptfloat <<endl;
//	*ptfloat = *ptfloat + 1;
//	cout <<"&ptfloat: " <<&ptfloat <<", ptfloat: " <<ptfloat <<", *ptfloat: " <<*ptfloat <<endl;
//	delete ptfloat;
//	cout <<"*ptfloat: " <<*ptfloat <<endl; //garbage value as memory inside the heap is cleared.
	
	//char type
//	char* ptchar = new char;
//	*ptchar = 'A';
//	cout <<"&ptchar: " <<&ptchar <<", ptchar: " <<ptchar <<", *ptchar: " <<*ptchar <<endl;
//	*ptchar = 'C';
//	cout <<"&ptchar: " <<&ptchar <<", ptchar: " <<ptchar <<", *ptchar: " <<*ptchar <<endl;
//	delete ptchar;
//	cout <<"ptchar: " <<ptchar <<endl; // garbage value
	
	//String type
	
	/*
	string str1 = "SomeRandomText";
	string* ptstr1 = &str1;
	cout <<"ptstr1: " <<ptstr1 <<", *ptstr1: " <<*ptstr1 <<endl;
	cout <<endl;
	cout <<"ptstr1[2]: " <<ptstr1[2] <<endl;
	cout <<endl;
	ptstr1[2] = 'A'; // This doesnt work in case of string datatype but works well in case char array. 
	cout <<"ptstr1: " <<ptstr1 <<", *ptstr1: " <<*ptstr1 <<endl;
	
	char arr1[] = "SomeRandomText";
	char* ptarr1 = &arr1[0];
	cout <<"ptarr1: " <<ptarr1 <<", *ptarr1: " <<*ptarr1 <<endl;
	ptarr1[2] = 'A';
	cout <<"ptarr1: " <<ptarr1 <<", *ptarr1: " <<*ptarr1 <<endl;
//	*ptarr1[5] = 'X';  // [Error] invalid type argument of unary '*' (have 'char')
	cout <<"ptarr1: " <<ptarr1 <<", *ptarr1: " <<*ptarr1 <<endl;
	
	cout <<endl;
	cout <<"ptarr1[5]: " <<ptarr1[5] <<endl;
	cout <<endl;
	*/
	
//	string* ptstr = new string;
//	*ptstr = "SomeRandomText";
//	cout <<"ptstr: " <<ptstr <<", *ptstr: " <<*ptstr <<endl;
//	*ptstr = "SomeMoreRandomText";
//	cout <<"ptstr: " <<ptstr <<", *ptstr: " <<*ptstr <<endl;
//	delete ptstr;
//	cout <<"ptstr: " <<ptstr <<", *ptstr: " <<*ptstr <<endl;  //SomeGarbage value gets printed into the console.

	//Arrays
//	int n;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	
//	int* ptarr = new int[n];
//	cout <<"Enter array elements: " <<endl;
//	for (int i = 0; i < n; i++) {
//		ptarr[i] = i + 1;
//	}
//	cout <<"Output array: " <<endl;
//	for (int j = 0; j < n; j++) {
//		cout <<ptarr[j] <<"  ";
//	}
//	cout <<endl;
////	delete []ptarr;
////	for (int k = 0; k < 5; k++) {
////		cout <<ptarr[k] <<"  ";
////	}
////	cout <<endl;
//	
//	delete []ptarr;   //delete only means that memory is cleared, now it totally kinds of depand whether the values earlier stored at the given memory locations are overwritten or not.
//	for (int k = 0; k < n; k++) {
//		cout <<ptarr[k] <<" ";
//	}
//	cout <<endl;
//}

//Arrays dynamic allocation on the heap
//int main() {
	//int type
//	int n;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	int* ptarr = new int[n];
//	cout <<"Enter array elements: " <<endl;
//	for (int i = 0; i < n; i++) {
//		cin >>ptarr[i];
//	}
//	cout <<"Output array -- Before delete: " <<endl;
//	for (int j = 0; j < n; j++) {
//		cout <<ptarr[j] <<" ";
//	}
//	cout <<endl;
//	delete []ptarr;
//	cout <<"Output array -- After delete:  "<<endl;
//	for (int k = 0; k < n; k++) {
//		cout <<ptarr[k] <<" ";
//	}
//	cout <<endl;

	//float
//	int n = 11;
//	float* ptarr = new float[n];
//	for (int i = 0; i < n; i++) {
//		ptarr[i] = i + 0.5;
//	}
//	cout <<"Output array -- Before delete: " <<endl;
//	for (int j = 0; j < n; j++) {
//		cout <<ptarr[j] <<" ";
//	}
//	cout <<endl;
//	delete []ptarr;
//	cout <<"Output array -- After delete:  " <<endl;
//	for (int k = 0; k < n; k++) {
//		cout <<ptarr[k] <<" ";
//	}
//	cout <<endl;
	
//	char* ptarr = new char[25];
////	*ptarr = "SomeRandomText"; // [Error] invalid conversion from 'const char*' to 'char' [-fpermissive]
//	for (int i = 0; i < 25; i++) {
//		cin >>ptarr[i];
//		if (ptarr[i] == '$') {
//			ptarr[i] = '\0';
//			break;
//		}
//	}
//	cout <<"Output string --Before delete: " <<endl;
//	cout <<"ptarr: " <<ptarr <<endl;
//	delete []ptarr;
//	cout <<"Output string -- After delete: " <<endl;
//	cout <<"ptarr: " <<ptarr <<endl;

//	char* ptchar = new char;
//	*ptchar = 'A';
//	cout <<"ptchar: " <<ptchar <<endl;
//	delete ptchar;
//	cout <<"ptchar: " <<ptchar <<endl;

//	char arr[11];
//	char* ptarr = &arr[0];
//	*ptarr = "HelloWorld"; // not allowed.
//	cout <<"ptarr: " <<ptarr <<end;
//}

//Heap memory deallocation
//int main() {
//	int *ptx = new int;
//	*ptx = 25;
//	cout <<"Before delete: " <<endl;
//	cout <<"ptx: " <<ptx <<", *ptx: " <<*ptx <<endl;
//	delete ptx;
//	cout <<"After delete: " <<endl;
//	cout <<"ptx: " <<ptx <<", *ptx: " <<*ptx <<endl;
//	
// 	cout <<endl;
// 	
//	cout <<"Setting the pointer to point to a different memory location" <<endl;
//	int x = 1;
//	cout <<"&x: " <<&x <<", x: " <<x <<endl;
//	ptx = &x;
//	cout <<"&x: " <<&x <<", ptx: " <<ptx <<", *ptx: " <<*ptx <<endl;
//}

//int main() {
//	int* ptarr = new int[5];
//	cout <<"ptarr: " <<ptarr <<endl;
//	for (int i = 0; i < 5; i++) {
//		ptarr[i] = i + 1;
//	}
//	delete []ptarr;
//	cout <<"ptarr: " <<ptarr <<endl;
//	for (int j = 0; j < 5; j++) {
//		cout <<ptarr[j] <<" ";
//	}
//	cout <<endl;
//}

// decleration and initialization of the heap memory at the same time.
//int main() {
	//Varibale decleration and initialization
//	int* ptx = new int;
//	cout <<"*ptx: " <<*ptx <<endl;
//	
//	cout <<endl;
////	int* ptx1 = new int(4, 2); // [Error] new initializer expression list treated as compound expression [-fpermissive]
//	int* ptx1 = new int(4);
////	cout <<"*ptx1 : "<<*ptx1 <<endl;
//	
//	cout <<endl;
////	int* ptx2 = new int{5, 6};  // [Error] cannot convert '<brace-enclosed initializer list>' to 'int' in initialization
//	int* ptx2 = new int(5);
//	cout <<"*ptx2: " <<*ptx2 <<endl;
	
	//array decleration and initialization
//	int* ptarr = new int[5] (1, 2, 3, 4, 5);
//	int* ptarr1 = new int[5] {1, 2, 3, 4, 5};
//	for (int i = 0; i < 5; i++) {
//		cout <<ptarr1[i] <<" ";
//	}
	
//	char* ptarr2 = new char[11] { 'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' };
//	cout <<"ptarr2: " <<ptarr2 <<endl;
//	cout <<endl;
//	
//	char* ptarr3 = new char[45] { 'D', 'S', 'A', ' ', 'L', 'a', 'k', 's', 'h', 'y', 'a', ' ', 'B', 'a', 't', 'c', 'h' };
//	cout <<"ptarr3: " <<ptarr3 <<endl;
//}

//int main() {
//	int* ptx = new int(5);
//	cout <<"*ptx: " <<*ptx <<endl;
//	
//	double* ptx1 = new double {4.5};
//	cout <<"*ptx1: " <<*ptx1 <<endl;
//	
//	int* ptarr = new int[7] { 1, 2, 3, 4 }; // 0 is stored at all remaining indexes.
//	for (int i = 0; i < 7; i++) {
//		cout <<ptarr[i] <<" ";
//	}
//	cout <<endl;
//}

//int main() {
	//pointer array -- an array that is supposed to contain the pointers to a specific datatype inside of it.
//	int x = 1, y = 2, z = 3, w = 4, p = 5;
//	int* px = &x;
//	int* py = &y;
//	int* pz = &z;
//	int* pw = &w;
//	int* pp = &p;
//	
//	int* arr[] = { px, py, pz, pw, pp };
//	for (int i = 0; i < 5; i++) {
//		cout <<"arr[" <<i <<"]: " <<arr[i] <<" ";
//		cout <<"*arr[" <<i <<"]: " <<*arr[i] <<endl;
//	}
	
//	int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;
//	int arr1[] = { x1, x2, x3, x4, x5 };
//	int* arr2[] = { &x1, &x2, &x3, &x4, &x5 };
//	cout <<"Int output array: ";
//	for (int i = 0; i < 5; i++) {
//		cout <<arr1[i] <<" ";
//	}
//	cout <<endl;
//	cout <<"Int output array --pointer: " <<endl;
//	for (int j = 0; j < 5; j++) {
//		cout <<"arr2[" <<j <<"]: " <<arr2[j] <<" ";
//		cout <<"*arr2[" <<j <<"]: " <<*arr2[j] <<endl;
//	}
//	cout <<endl;
//	
//	float x6 = 1.5, x7 = 2.5, x8 = 3.5, x9 = 4.5, x10 = 5.5;
//	float* arr3[] = { &x6, &x7, &x8, &x9, &x10 };
//	cout <<"Float output array --pointer: " <<endl;
//	for (int k = 0; k < 5; k++) {
//		cout <<"arr3[" <<k <<"]: " <<arr3[k] <<" ";
//		cout <<"*arr3[" <<k <<"]: " <<*arr3[k] <<endl;
//	}
//	
//	char y1 = 'A', y2 = 'B', y3 = 'C', y4 = 'D', y5 = 'E';
//	char* arr4[] = { &y1, &y2, &y3, &y4, &y5 };
//	cout <<"Char output array --pointer: " <<endl;
//	for (int l = 0; l < 5; l++) {
//		cout <<"arr4[" <<l <<"]: " <<arr4[l] <<endl;
//	}
	
	//Array supposed to contain pointers to other array.
//	float arr1[] = { 0.5, 1.5, 2.5, 3.5, 4.5 };
//	float arr2[] = { 5.5, 6.5, 7.5, 8.5, 9.5 };
//	float arr3[] = { 10.5, 11.5, 12.5, 13.5, 14.5 };
//	float arr4[] = { 15.5, 16.5, 17.5, 18.5, 19.5 };
//	float arr5[] = { 20.5, 21.5, 22.5, 23.5, 24.5 };
//	
//	float* arr[] = { &arr1[0], &arr2[0], &arr3[0], &arr4[0], &arr5[0] };
//	
//	cout <<"Output array: " <<endl;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cout <<arr[i][j] <<" ";
//		}
//		cout <<endl;
//	}
//	
//	cout <<endl <<endl;
//	char arr6[] = "ABCDE";
//	char arr7[] = "FGHIJ";
//	char arr8[] = "KLMNO";
//	char arr9[] = "PQRST";
//	char arr10[] = "UVWXY";
//	
//	char* arr0[] = { arr6, arr7, arr8, arr9, arr10 };
//	char* arr00[] = { &arr6[0], &arr7[0], &arr8[0], &arr9[0], &arr10[0] };
//	cout <<"Output array: " <<endl;
//	for (int i = 0; i < 5; i++) {
//		cout <<arr0[i] <<endl;
//	}
//	cout <<endl;
//	for (int j = 0; j < 5; j++) {
//		cout <<arr00[j] <<endl;
//	}
//}

//int main() {
//	int n = 999999; // for arrays supposed to be allocated on stack, size of the array must be less than or equal to 99999.
//	int n1 = 99999;
//	cout <<"Create a New Array: " <<endl;
//	int arr[n1];
//	arr[3] = 1;
//	cout <<"arr[3]: " <<arr[3] <<endl;
	
//	int n = 99999;
//	int n1 = 99999999; //Size of array could or could not be > 99999
//	cout <<"Creating a New Array Dynamically: " <<endl;
//	int* ptarr = new int[n1];
//	ptarr[3] = 56;
//	cout <<"ptarr[3]: " <<ptarr[3] <<endl;	
//}
