#include <iostream>
#include <string>
using namespace std;

//Replace character
//void replaceChar(char arr[], char c1, char c2) {
//	if (arr[0] == '\0') return;
//	if (arr[0] == c1) {
//		arr[0] = c2;
//		replaceChar(arr + 1, c1, c2);
//	} else replaceChar(arr + 1, c1, c2);
//}
//
//int main() {
//	char c1, c2, arr[100];
//	cout <<"Enter a String: ";
//	cin >>arr;
//	cout <<"Enter the character that has to be replaced and the replacing character: ";
//	cin >>c1 >>c2;
//	replaceChar(arr, c1, c2);
//	cout <<"Updated string: " <<arr <<endl;
//}

//Remove consecutive duplicate
//void shiftArray(char arr[]) {
//	if (arr[1] == '\0') {
//		arr[0] = arr[1];
//		return;
//	}
//	arr[0] = arr[1];
//	shiftArray(arr + 1);
//}
//
//void remConseDuplicates(char arr[]) {
//	if (arr[1] == '\0') return;
//	if (arr[0] == arr[1]) {
//		shiftArray(arr + 1);
//		remConseDuplicates(arr);
//	} else remConseDuplicates(arr + 1);
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter a String: ";
//	cin >>arr;
//	remConseDuplicates(arr);
//	cout <<"Updated string: " <<arr <<endl;
//}

//Taking input inside the array
void inputArray(int arr[], int n) {
	if (n <= 0) return;
	cout <<"Enter the elements of the array: ";
	for (int i = 0; i < n; i++) {
		cin >>arr[i];
	}
}

//Printing the output array
void printArray(int arr[], int n) {
	if (n <= 0) return;
	cout <<"Output array: ";
	for (int i = 0; i < n; i++) {
		cout <<arr[i] <<" ";
	}
	cout <<endl;
}

//Merge sort
//int copyArray(int arr1[], int arr2[], int n2) {
//	if (n2 == 0) return 0;
//	arr1[0] = arr2[0];
//	return 1 + copyArray(arr1 + 1, arr2 + 1, n2 - 1);
//}
//
//void merge(int arr1[], int n1, int arr2[], int n2, int output[]) {
//	if (n1 == 0 && n2 == 0) return;
//	if (n1 == 0) 
//	{
//		output[0] = arr2[0];
//		merge(arr1, n1, arr2 + 1, n2 - 1, output + 1);
//	} 
//	else if (n2 == 0) 
//	{
//		output[0] = arr1[0];
//		merge(arr1 + 1, n1 - 1, arr2, n2, output + 1);
//	} 
//	else if (arr1[0] < arr2[0])
//	{
//		output[0] = arr1[0];
//		merge(arr1 + 1, n1 - 1, arr2, n2, output + 1);
//	} 
//	else 
//	{
//		output[0] = arr2[0];
//		merge(arr1, n1, arr2 + 1, n2 - 1, output + 1);
//	}
//}
//
////The above function with the same logic can not be rewritten as:
///*
//void merge(int arr1[], int n1, int arr2[], int n2, int output[]) {
//	if (n1 == 0 && n2 == 0) return;
//// 	cout <<"--" <<n1 <<"--" <<"  " <<"--" <<n2 <<"--" <<"    ";
//	if (n1 == 0 || arr1[0] > arr2[0]) 
//	{
//		output[0] = arr2[0];
//		merge(arr1, n1, arr2 + 1, n2 - 1, output + 1);
//	} 
//	else
//	{
//		output[0] = arr1[0];
//		merge(arr1 + 1, n1 - 1, arr2, n2, output + 1);
//	}
//}
//*/
//
//void mergeSort(int arr[], int n) {
//	if (n <= 1) return;
//	int n_2 = n / 2;
//	
//	//Calling mergeSort on smaller sub arrays
//	mergeSort(arr, n_2);
//	mergeSort(arr + n_2, n - n_2);
//	
//	//Merging the two sorted arrays
//	int* output = new int[n];
//	merge(arr, n_2, arr + n_2, n - n_2, output);
//	
//	//Copying the output into the main array
//	copyArray(arr, output, n); 
//	
//	//Freeing up the memory
//	delete [] output;
//}
//
//int main() {
//	int n;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	
//	//Dynamic allocation
//	int* arr = new int[n];
//	
//	//Taking input inside the array
//	inputArray(arr, n);
//	
//	//Sorting the array
//	mergeSort(arr, n);
//	
//	//Printing the output array
//	printArray(arr, n);
//	
//	//Freeing up the dynamic memory
//	delete [] arr;
//}


//Quick Sort (Assending order)
//int smallEle(int arr[], int n) {
//	if (n == 1) return 0;
//	if (arr[n - 1] < arr[0]) return 1 + smallEle(arr, n - 1);
//	return smallEle(arr, n - 1);
//}
//
//void swap(int arr[], int i, int j) {
//	if (i == j) return;
//	int temp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = temp;
//}
//
//void arrange(int arr[], int sc, int i, int j) {
//	if (i == sc || j == sc) return;
//	if (arr[i] >= arr[sc]) {
//		if (arr[j] < arr[sc]) {
//			swap(arr, i, j);
//			arrange(arr, sc, i + 1, j - 1);
//		} else arrange(arr, sc, i, j - 1);
//	} else arrange(arr, sc, i + 1, j);
//}
//
//void quickSort(int arr[], int n) {
//	if (n <= 1) return;
//	int smallCount = smallEle(arr, n);
//	swap(arr, 0, smallCount);
//	arrange(arr, smallCount, 0, n - 1);
//	quickSort(arr, smallCount);
//	quickSort(arr + (smallCount + 1), n - (smallCount + 1));
//}
//
//int main() {
//	int n;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	
//	//Dynamic allocation
//	int* arr = new int[n];
//	
//	//Taking input inside the array
//	inputArray(arr, n);
//	
//	//sort the array
//	quickSort(arr, n);
//	
//	//Print the sorted array
//	printArray(arr, n);
//	
//	//Free up the memory
//	delete [] arr;
//}

//Quick sort (Descending order)
//int smallEle(int arr[], int n) {
//	if (n == 1) return 0;
//	if (arr[n - 1] > arr[0]) return 1 + smallEle(arr, n - 1);
//	return smallEle(arr, n - 1);
//}
//
//void swap(int arr[], int i, int j) {
//	if (i == j) return;
//	int temp= arr[i];
//	arr[i] = arr[j];
//	arr[j] = temp;
//}
//
//void arrange(int arr[], int sc, int i, int j) {
//	if (i == sc || j == sc) return;
//	if (arr[i] <= arr[sc]) {
//		if (arr[j] > arr[sc]) {
//			swap(arr, i, j);
//			arrange(arr, sc, i + 1, j - 1);
//		} else arrange(arr, sc, i, j - 1);
//	} else arrange(arr, sc, i + 1, j);
//}
//
//void quickSort(int arr[], int n) {
//	if (n <= 1) return;
//	int smallCount = smallEle(arr, n);
//	swap(arr, 0, smallCount);
//	arrange(arr, smallCount, 0, n - 1);
//	quickSort(arr, smallCount);
//	quickSort(arr + (smallCount + 1), n - (smallCount + 1));
//}
//
//int main() {
//	int n;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	
//	int* arr = new int[n];
//	inputArray(arr, n);
//	
//	quickSort(arr, n);
//	
//	printArray(arr, n);
//	
//	delete [] arr;
//}

//Subsequence of a string
//Way - 1 (Complete Recursive solution)
//int power(int x, int n) {
//	if (n == 0) return 1;
//	int n_2 = power(x, n / 2);
//	if (n % 2 == 0) return n_2 * n_2;
//	else return x * n_2 * n_2;
//}
//
//void partialSub(char char_0, string output[], int n, int x) {
//	if (n == 0) return;
//	output[x] = char_0 + output[n - 1];
//	partialSub(char_0, output, n - 1, x + 1);
//}
//
//int subsequence(string str, string output[]) {
//	if (str.empty()) {
//		output[0] = "";
//		return 1;
//	}
//	int outLength = subsequence(str.substr(1), output);
//	partialSub(str[0], output, outLength, outLength);
//	return 2 * outLength;
//}
//
//int main() {
//	string str;
//	cout <<"Enter a String: ";
//	cin >>str;
//	
//	string* output = new string[power(2, str.length())];
//	int outLength = subsequence(str, output);
//	
//	//Printing the subsequences
//	for (int i = 0; i < outLength; i++) {
//		cout <<output[i] <<" ";
//	}
//	cout <<endl;
//}

//Way - 2
//int power(int x, int n) {
//	if (n == 0) return 1;
//	int n_2 = power(x, n / 2);
//	if (n % 2 == 0) return n_2 * n_2;
//	else return x * n_2 * n_2;
//}
//
//int subsequence(string str, string output[]) {
//	if (str.empty()) {
//		output[0] = "";
//		return 1;
//	}
//	int outLength = subsequence(str.substr(1), output);
//	for (int i = 0; i < outLength; i++) {
//		output[outLength + i] = str[0] + output[i];
//	}
//	return 2 * outLength;
//}
//
//int main() {
//	string str;
//	cout <<"Enter a String: ";
//	cin >>str;
//	
//	string* output = new string[power(2, str.length())];
//	int outLength = subsequence(str, output);
//	
//	//Printing the subsequences
//	for (int i = 0; i < outLength; i++) {
//		cout <<output[i] <<" ";
//	}
//	cout <<endl;
//}


