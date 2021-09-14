#include <iostream>
using namespace std;


// 3d and 4d array works exactly same as 2d array works.
//3d
void input3dArray(int arr[][7][9], int m, int n, int o) {
	if (m <= 0 || n <= 0 || o <= 0) return;
	cout <<"Enter array elements: " <<endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < o; k++) {
				cin >>arr[i][j][k];
			}
		}
	}
}

//void printArray(int arr[][5][9], int m, int n, int o) { //[Error] cannot convert 'int (*)[7][9]' to 'int (*)[5][9]' for argument '1' to 'void printArray(int (*)[5][9], int, int, int)'
void print3dArray(int arr[][5][9], int m, int n, int o) {
	if (m <= 0 || n <= 0 || o <= 0) return;
	cout <<"Enter array elements: " <<endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < o; k++) {
				cout <<arr[i][j][k] <<" ";
			}
			cout <<endl;
		}
		cout <<endl;
	}
}

//4d
void input4dArray(int arr[][5][7][9], int m, int n, int o, int p) {
	if (m <= 0 || n <= 0 || o <= 0 || p <= 0) return;
	cout <<"Enter array elements: " <<endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < o; k++) {
				for (int l = 0; l < p; l++) {
					cin >>arr[i][j][k][l];	
				}
			}
		}
	}
}

void print4dArray(int arr[][5][7][9], int m, int n, int o, int p) {
	if (m <= 0 || n <= 0 || o <= 0 || p <= 0) return;
	cout <<"Enter array elements: " <<endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < o; k++) {
				for (int l = 0; l < p; l++) {
					cout <<arr[i][j][k][l];	
				}
				cout <<endl;
			}
			cout <<endl;
		}
		cout <<endl;
	}
}

int main() {
	//3d array
//	int m, n, o, arr[5][7][9];
//	cout <<"Enter m, n, o: ";
//	cin >>m >>n >>o;
//	cout <<"Enter array elements: " <<endl;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			for (int k = 0; k < o; k++) {
//				cin >>arr[i][j][k];
//			}	
//		}
//	}
//	cout <<"Output array: " <<endl;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			for (int k = 0; k < o; k++) {
//				cout <<arr[i][j][k] <<" ";
//			}
//			cout <<endl;
//		}
//		cout <<endl;
//	}
//	
//	cout <<"Complete array: " <<endl;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 7; j++) {
//			for (int k = 0; k < 9; k++) {
//				cout <<"--" <<arr[i][j][k] <<"--" <<" ";
//			}
//			cout <<endl;
//		}
//		cout <<endl;
//	}

	//3d array initialization 
	// Note: 0 is stored in the all remaining indexes only if an array is initialized at the same time as that of the decleration, if input is taken inside the array later on then all remaining indexes are filled with garbage value.
//	int arr[3][3][3] = { { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9} }, { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } }, { { 1, 2, 3 }, { 6, 5, 4}, { 7, 8, 9 } } };
//	int arr1[5][7][9] = { { { 1, 2 }, { 3, 4 } }, { { 5, 6 }, { 7, 8 } }};
	
//	int x = 3, y = 3, z = 3;
//	int x = 5, y = 7, z = 9;
	
	//Output array
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < y; j++) {
//			for (int k = 0; k < z; k++) {
//				cout <<arr1[i][j][k] <<" ";
//			}
//			cout <<endl;
//		}
//		cout <<endl;
//	}
	
	
	//Passing 3d array into the function.
//	int m, n, o, arr[5][7][9];
//	cout <<"Enter m, n, o: " <<endl;
//	cin >>m >>n >> o;
//	input3dArray(arr, m, n, o);
//	print3dArray(arr, m, n, o);

	//4d array
	int arr[3][5][7][9] = {};
//	input3dArray(arr, 3, 5, 7); // error
//	input3dArray(arr, 5, 7, 9); // error: inputArray function is supposed to accept a 3d array inside of it but a 4d array is passed.
	
//	input4dArray(arr, 2, 2, 2, 2);
//	print4dArray(arr, 3, 5, 7, 9);
	
	int arr1[3][5][7][9];
	int m, n, o, p;
	cout <<"Enter m, n, o, p: " <<endl;
	cin >>m >>n >>o >>p;
	input4dArray(arr1, m, n, o, p);
	
	cout <<"Complete array: " <<endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 7; k++) {
				for (int l = 0; l < 9; l++) {
					cout <<"--" <<arr1[i][j][k][l] <<"--" <<" ";
				}
				cout <<endl;
			}
			cout <<endl;
		}
		cout <<endl;
	}
}
