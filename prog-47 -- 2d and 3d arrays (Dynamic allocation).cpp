#include <iostream>
using namespace std;

//int main() {
	//pointer array 
	//Everything is on the stack
//	int arr1[] = { 1, 2, 3 };
//	int arr2[] = { 4, 5, 6 };
//	int arr3[] = { 7, 8, 9 };
//	
//	int* arr[] = { &arr1[0], &arr2[0], &arr3[0] };
//	cout <<"sizeof(arr): " <<sizeof(arr) <<endl;  // Space required to store one pointer ( 8 byte standard) * no. of elements present inide the pointer array.
	
	//Subarrays are on the heap and main array is on the stack
//	int* arr4[] = { new int[3] { 1, 2, 3 }, new int[3] { 4, 5, 6 }, new int[3] { 7, 8, 9 } };
//	cout <<"sizeof(arr4): " <<sizeof(arr4) <<endl <<endl;
//	
//	cout <<"Before delete: " <<endl;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout <<arr4[i][j] <<" ";
//		}
//		cout <<endl;
//	}
//	cout <<endl;
//	
//	//Deaalocating the sub array
//	for (int i = 0; i < 3; i++) {
//		delete [] arr4[i];
//	}
//	
//	//Printing after deallocation
//	cout <<"After delete: " <<endl;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout <<arr4[i][j] <<" ";
//		}
//		cout <<endl;
//	}
	
	//Both subarrays and main array are on the heap
//	int** ptarr = new int*[3] { new int[2] { 1, 2 }, new int[3] { 3, 4, 5 }, new int[4] { 6, 7, 8, 9 } };
//	cout <<"sizeof(ptarr): " <<sizeof(ptarr) <<endl <<endl;
//	
//	cout <<"Before delete: " <<endl;
//	cout <<"Output array: " <<endl;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < i + 2; j++) {
//			cout <<ptarr[i][j] <<" ";
//		}
//		cout <<endl;
//	}
//	cout <<endl;
//	
//	//Deallocating the 2d array present on the heap
//	for (int i = 0; i < 3; i++) {
// 		delete [] ptarr[i];
//	}
//	delete [] ptarr;
//	
//	//Printing the array after deallocation
//	cout <<"After delete: " <<endl;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < i + 2; j++) {
//			cout <<ptarr[i][j] <<" ";
//		}
//		cout <<endl;
//	}
//}

//int main() {
//	//pointer arrays  --everything is on the stack
////	int arr1[] = { 1, 2, 3 };
////	int arr2[] = { 4, 5, 6, 7 };
////	int arr3[] = { 8, 9, 0, 1, 2 };
////	int arr4[] = { 3, 4, 5, 6, 7, 8 };
////	
////	int* arr[] = { &arr1[0], &arr2[0], &arr3[0], &arr4[0] };
////	cout <<"sizeof(arr): " <<sizeof(arr) <<endl;
////	cout <<"sizeof(arr1): " <<sizeof(arr1) <<endl;
////	cout <<"sizeof(arr2): " <<sizeof(arr2) <<endl;
////	cout <<"szieof(arr3): " <<sizeof(arr3) <<endl;
////	cout <<"sizeof(arr4): " <<sizeof(arr4) <<endl <<endl;
////	
////	cout <<"Output array: " <<endl;
////	for (int i = 0; i < 4; i++) {
////		for (int j = 0; j < i + 3; j++) {
////			cout <<arr[i][j] <<" ";
////		}
////		cout <<endl;
////	}
//	
//	//Sub arrays are on the heap and the main array is on the stack;
////	int* ptarr1 = new int[2] { 1, 2 };
////	int* ptarr2 = new int[3] { 3, 4, 5 };
////	int* ptarr3 = new int[4] { 6, 7, 8, 9 };
////	
////	int* arr[] = { ptarr1, ptarr2, ptarr3 };
////	cout <<"sizeof(arr): " <<sizeof(arr) <<endl <<endl;
////	
////	cout <<"Before delete: " <<endl;
////	cout <<"Output array: " <<endl;
////	for (int i = 0; i < 3; i++) {
////		for (int j = 0; j < i + 2; j++) {
////			cout <<arr[i][j] <<" ";
////		}
////		cout <<endl;
////	}
////	cout <<endl;
////	
////	//Deallocating the array
////	for (int i = 0; i < 3; i++) {
////		delete [] arr[i];
////	}
////	
////	//Printing the output array
////	cout <<"After delete: " <<endl;
////	for (int i = 0; i < 3; i++) {
////		for (int j = 0; j < i + 2; j++) {
////			cout <<arr[i][j] <<" ";
////		}
////		cout <<endl;
////	}
//	
//	//Both subarray and main array is on the heap
////	int** arr = new int* [3] { new int[3] { 1, 2, 3 }, new int[4] { 4, 5, 6, 7 }, new int[5] { 8, 9, 0, 1, 2 } }; //new keyword always returns the address of the variable, array or pointer that comes after it.
////	
////	cout <<"sizeof(arr): " <<sizeof(arr) <<endl <<endl;
////	
////	cout <<"Before delete: " <<endl;
////	cout <<"Output array: " <<endl;
////	for (int i = 0; i < 3; i++) {
////		for (int j = 0; j < i + 3; j++) {
////			cout <<arr[i][j] <<" ";
////		}
////		cout <<endl;
////	}
////	cout <<endl;
////	
////	//Deallocating the given array
////	for (int k = 0; k < 3; k++) {
////		delete [] arr[k];
////	}
////	delete []arr;
////	
////	//Printing the array after delete
////	cout <<"After delete: " <<endl;
////	cout <<"Output array: " <<endl;
////	for (int i = 0; i < 3; i++) {
////		for (int j = 0; j < i + 3; j++) {
////			cout <<arr[i][j] <<" ";
////		}
////		cout <<endl;
////	}
//	
//	//3d -- array
//	int*** arr1 = new int** [2] { new int* [2] { new int[2] { 1, 2 }, new int[2] { 3, 4 } }, new int* [2] { new int[2] { 5, 6 }, new int[2] { 7, 8 } } };
//	cout <<"sizeof(arr1): " <<sizeof(arr1) <<endl;
//	
//	cout <<"Before delete: " <<endl;
//	cout <<"Output array: " <<endl;
//	for (int i = 0; i < 2; i++) {
////		cout <<"&arr1[" <<i <<"]: " <<&arr1[i] <<endl;
//		for (int j = 0; j < 2; j++) {
////			cout <<"&arr1[" <<i <<"][" <<j <<"]: " <<&arr1[i][j] <<", *arr1[" <<i <<"][" <<j <<"]: " <<*arr1[i][j] <<" ";
//			for (int k = 0; k < 2; k++) {
//				cout <<arr1[i][j][k] <<" ";
//			}
//			cout <<endl;
//		}
//		cout <<endl;
//	}
//
//	//Deallocating the given array -- There is no way to check whether some memory is properly dealocated or not in heap.
//	for (int i = 0; i < 2; i++) {  // values are not overwritten even after the deallocating the array and making sevral attemps to reallocate the freed memory space. -- code verified values are sucessfully overwritten when the code is runned inside vs code, we have sucessfully cleared the memory.
////		cout <<"&arr1[" <<i <<"]: " <<&arr1[i] <<endl;
//		for (int j = 0; j < 2; j++) {
////			cout <<"&arr1[" <<i <<"][" <<j <<"]: " <<&arr1[i][j] <<", *arr1[" <<i <<"][" <<j <<"]: " <<*arr1[i][j] <<" ";
//			delete [] arr1[i][j];
//		}
////		cout <<endl;
//		delete [] arr1[i];
//	}
//	delete [] arr1;
//
//	//Printing the output array
//	cout <<"After delete: " <<endl;
//	cout <<"Output array: " <<endl;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			for (int k = 0; k < 2; k++) {
//				cout <<arr1[i][j][k] <<" ";
//			}
//			cout <<endl;
//		}
//		cout <<endl;
//	}
//	
//	// Attemp - 1 to reallocate the freed space of arr1.
//	int** arr2 = new int* [2] { new int[3] { 11, 12, 13 }, new int[3] { 14, 15, 16 }};
//	
//	cout <<"Output array -- arr2: " <<endl;
//	for (int i = 0; i < 2; i++) {
////		cout <<"&arr2[" <<i <<"]: " <<&arr2[i] <<endl;
//		for (int j = 0; j < 3; j++) {
////			cout <<"&arr2[" <<i <<"][" <<j <<"]: " <<&arr2[i][j] <<" ";
//			cout <<arr2[i][j] <<" ";
//		}
//		cout <<endl;
//	}
//	cout <<endl;
//	
//	cout <<"Output array -- arr1: " <<endl;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			for (int k = 0; k < 2; k++) {
//				cout <<arr1[i][j][k] <<" ";
//			}
//			cout <<endl;
//		}
//		cout <<endl;
//	}
//	cout <<endl;
//	
//	// Attemp - 2 to reallocate the freed space of arr1.
//	int*** arr3 = new int** [2] { new int* [2] { new int[3] { 21, 22, 23 }, new int[3] { 24, 25, 26 } }, new int* [2] { new int[3] { 27, 28, 29 }, new int[3] { 30, 31, 32 } } };
//	
//	cout <<"Output array -- arr3: " <<endl;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			for (int k = 0; k < 3; k++) {
//				cout <<arr3[i][j][k] <<" ";
//			}
//			cout <<endl;
//		}
//		cout <<endl;
//	}
//	cout <<endl;
//	
//	cout <<"Output array -- arr1: " <<endl;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			for (int k = 0; k < 2; k++) {
//				cout <<arr1[i][j][k] <<" ";
//			}
//			cout <<endl;
//		}
//		cout <<endl;
//	}
//	cout <<endl;
//}

//More Experiments
int main() {
	//3d array
	//Way - 1 -- way 1 and way - 2 two are just two different apporaches to implement the same thing.
	int*** arr = new int** [2] { new int* [2] { new int [2], new int [2] }, new int* [2] { new int [2], new int [2] }};
	
	//Taking input
	cout <<"Enter the elements of the array arr: " <<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cin >>arr[i][j][k];
			}
		}
	}
	
	//Printing the array
	cout <<endl;
	cout <<"Output array (Before delete): " <<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cout <<arr[i][j][k] <<" ";
			}
			cout <<endl;
		}
		cout <<endl;
	}
	
	//Deallocating the memory
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			delete [] arr[i][j];
		}
		delete [] arr[i];
	}
	delete [] arr;
	
	//Printing the array after deallocation
	cout <<endl;
	cout <<"Output array (After delete): " <<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cout <<arr[i][j][k] <<" ";
			}
			cout <<endl;
		}
		cout <<endl;
	}
	
	//Way - 2
	int*** arr1 = new int** [2] {};
	
	//Creating the 3d array
	for (int i = 0; i < 2; i++) {
		arr1[i] = new int* [2];
		for (int j = 0; j < 2; j++) {
			arr1[i][j] = new int [2];
		}
	}
	
	//Taking input
	cout <<"Enter the elements of the array arr1: " <<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cin >>arr1[i][j][k];
			}
		}
	}
	
	//Printing the array
	cout <<"Output array arr1 (Before delete): " <<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cout <<arr1[i][j][k] <<" ";
			}
			cout <<endl;
		}
		cout <<endl;
	}
	
	//Deallocating the memory
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			delete [] arr1[i][j];
		}
		delete arr1[i];
	}
	delete arr1;
	
	//Printing the array after deallocation
	cout <<"Output array (After delete): " <<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k <2; k++) {
				cout <<arr1[i][j][k] <<" ";
			}
			cout <<endl;
		}
		cout <<endl;
	}
}
