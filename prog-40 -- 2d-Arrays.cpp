#include <iostream>
using namespace std;

//void inputArray(int arr[][10], int m, int n) { //[Error] cannot convert 'int (*)[100]' to 'int (*)[10]' for argument '1' to 'void inputArray(int (*)[10], int, int)'
//void inputArray(int arr[3][100], int m, int n) { // passing the size for all array dimesions except the first one is necessary, even if we pass the size of the first dimension (as we have done here), it is simply ignored.
//	if (m <= 0 || n <= 0) return;
//	cout <<"arr: " <<arr <<endl;
//	cout <<"arr[0]: " <<arr[0] <<endl;
//	cout <<"arr[1]: " <<arr[1] <<endl;
//	cout <<"arr[2]: " <<arr[2] <<endl;
//	cout <<"byte - size - 1: " <<sizeof(arr) <<endl;
//	cout <<"Enter array elements: " <<endl;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >>arr[i][j];
//		}
//	}
//}
//
//void printArray(int arr[3][100], int m, int n) {
//	if (m <= 0 || n <= 0) return;
//	cout <<"arr: " <<arr <<endl;
//	cout <<"arr[0]: " <<arr[0] <<endl;
//	cout <<"arr[1]: " <<arr[1] <<endl;
//	cout <<"arr[2]: " <<arr[2] <<endl;
//	cout <<"byte - size - 2: " <<sizeof(arr) <<endl;
//	cout <<"Output array: " <<endl;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout <<arr[i][j] <<" ";
//		}
//		cout <<endl;
//	}
//}
//
//int main() {
//	int m, n, arr[100][100];
//	cout <<"byte - size - 1: " <<sizeof(arr) <<endl;
//	cout <<"arr: " <<arr <<endl;
//	cout <<"arr[0]: " <<arr[0] <<endl;
//	cout <<"arr[1]: " <<arr[1] <<endl;
//	cout <<"arr[2]: " <<arr[2] <<endl;
//	cout <<"Enter the no. of rows and cols required: ";
//	cin >>m >>n;
//	inputArray(arr, m, n);
//	printArray(arr, m, n);
	
	
	//Taking input inside the 2d array
//	cout <<"Enter array elements: " <<endl;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >>arr[i][j];
//		}
//	}
	
	//Printing 2d array
//	cout <<"Output array: " <<endl;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout <<arr[i][j] <<" ";
//		}
//		cout <<endl;
//	}
//}

//Array initializational and decleration at the same time
//int main() {
	//One d array
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	
//	//Printing array
//	cout <<"Output array: " <<endl;
//	for (int i = 0; i < 5; i++) {
//		cout <<arr[i] <<" ";
//	}
//	cout <<endl;
	
	//2d array
////	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9, 10 } }; [Error] too many initializers for 'int [3][3]'
////	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }, {} }; // [Error] too many initializers for 'int [3][3]'
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
////	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
////	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // [Error] too many initializers for 'int [3][3]'
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout <<arr[i][j] <<" ";
//		}
//		cout <<endl;
//	}
	
	//size left
	//1d
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	cout <<"byte - size: " <<sizeof(arr1) <<endl;
//	for (int i = 0; i < 5; i++) {
//		cout <<arr1[i] <<" ";
//	}
//	cout <<endl;
//	
//	//2d
////	int arr2[][] = { { 1, 2, 3 }, { 4, 5, 6 } }; //[Error] declaration of 'arr2' as multidimensional array must have bounds for all dimensions except the first
//	int arr2[][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
//	cout <<"byte - size (arr2): " <<sizeof(arr2) <<endl;
//	cout <<"arr2: " <<arr2 <<endl;
//	cout <<"arr2[0]: " <<arr2[0] <<endl;
//	
	// empty indexes
	//1d array
//	int arr[5] = { 1, 2, 3 };
//	for (int i = 0; i < 5; i++) {
//		cout <<arr[i] <<" ";
//	}
//	
	//2d array
//	int arr1[5][5] = { { 0, 1, 2, 3, 4 } , { 5, 6, 7, 8, 9}, { 4, 5 }, { 0, 1, 2, 3, 4 }, { 1, 2, 3 } };
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cout <<arr1[i][j] <<" ";
//		}
//		cout <<endl;
//	}
	
//	int arr2[5][5] = { { 1 } };
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cout <<arr2[i][j];
//		}
//		cout <<endl;
//	}
//	
//}

int main() {
	//1d
//	char arr[5] = { "hello" };  //[Error] initializer-string for array of chars is too long [-fpermissive] (the length of the string must be 1 less than the size defined).
//	char arr[5] = { 'h', 'e', 'l', 'l', 'o' }; // now even if the no. of comma seprated values is greater than the size of the array no error will be thrown on us (as c++ wont check for the array bounds) but in this case it is recommended to stay within the array bounderied and assign last elemnts of the array as the null character maually.
//	char arr[5] = "helo"; //correct
//	cout <<"arr: " <<arr <<endl;
	
	//2d
//	int m, n;
//	char arr[5][7];
//	cout <<"Enter the no. of rows and cols required: " <<endl;
//	cin >>m >>n;
	
	//Way 1	
	//Taking input
//	cout <<"Enter array elements: " <<endl;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >>arr[i][j];
//		}
//	}
	
	//Printing array
//	cout <<"Print output array: " <<endl;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 7; j++) {
//			cout <<"--" <<arr[i][j] <<"--" <<" ";
//		}
//		cout <<endl;
//	}
	
	//Way 2
//	cin >>arr;  //error
//	cout <<"arr: " <<arr <<endl;  // Print the starting address of the array
//	cout <<"arr[0]: " <<arr[0] <<endl;
//	cout <<"arr[0][0]: " <<arr[0][0] <<endl;
	
	int m;
	char arr1[5][7];
//	cin >> arr[5]; //works
//	cout <<arr[5]; // works
	cout <<"Enter the number of strings to be stored: " <<endl;
	cin >>m;
	cout <<"Enter strings: " <<endl;
	for (int i = 0; i < m; i++) {
		cin >>arr1[i];
	}
	cout <<"Printing strings: " <<endl;
	for (int i = 0; i < m; i++) {
		cout <<arr1[i] <<" ";
	}
	cout <<endl;
	
	//printing all indexes
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			cout <<"--" <<arr1[i][j] <<"--" <<" ";
		}
		cout <<endl;
	}
	
	
	
}
