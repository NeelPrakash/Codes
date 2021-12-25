#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Factorial
//int fact (int n) {
//	if (n == 0) return 1;
//	return n * fact(n - 1);
//}
//
//int main() {
//	int n;
//	cout <<"Enter a Number: ";
//	cin >>n;
//	cout <<"Factorial of " <<n <<": " <<fact(n) <<endl;
//}

//x ^ n  -- Linear time complexity
//int power (int x, int n) {
//	if (n == 0) return 1;
//	return x * power (x, n - 1);
//}
//
//int main() {
//	int x, n;
//	cout <<"Enter x and n (x ^ n): ";
//	cin >>x >>n;
//	cout <<x <<" ^ " <<n <<": " <<power(x, n) <<endl;
//}

//x ^ n -- Log2(n) time complexity
//int power (int x, int n) {
//	if (n == 0) return 1;
//	int so = power(x, n / 2);
//	if (n % 2 == 0) return so * so;
//	else return x * so * so;
//}
//
//int main() {
//	int x, n;
//	cout <<"Enter x and n (x ^ n): ";
//	cin >>x >>n;
//	cout <<x <<" ^ " <<n <<": " <<power (x, n) <<endl;
//}

// Print 1 to N
//void printInc (int n) {
//	if (n == 0) return;
//	printInc(n - 1);
//	cout <<n <<" ";
//}
//
//int main() {
//	int n;
//	cout <<"Enter a Number: ";
//	cin >>n;
//	printInc(n);
//}

//Print N to 1
//void printDec (int n) {
//	if (n == 0) return;
//	cout <<n <<" ";
//	printDec(n - 1);
//}
//
//int main() {
//	int n;
//	cout <<"Enter a Number: ";
//	cin >>n;
//	printDec(n);
//}

//Number of digits
//int digiCount (int n) {
//	if (n <= 9) return 1;
//	return 1 + digiCount(n / 10);
//}
//
//int main() {
//	int n;
//	cout <<"Enter a Number: ";
//	cin >>n;
//	cout <<"Digit Count: " <<digiCount(n) <<endl;
//}

//Fibonacci of N
//int fibonacci (int n) {
//	if (n == 0) return 0;
//	if (n == 1) return 1;
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main() {
//	int n;
//	cout <<"Enter a Number: ";
//	cin >>n;
//	cout <<"Fibonacci of " <<n <<": " <<fibonacci(n) <<endl;
//}

//Input array
void inputArray (int arr[], int n) {
	if (n <= 0) return;
	cout <<"Enter the elements of the array: ";
	for (int i = 0; i < n ; i++) {
		cin >>arr[i];
	}
}

//Print array
void printArray (int arr[], int n) {
	if (n <= 0) return;
	cout <<"Output array: ";
	for (int i = 0; i < n ; i++) {
		cout <<arr[i] <<" ";
	}
	cout <<endl;
}

//Array sorted
//bool isSorted (int arr[], int n) {
//	if (n == 1) return true;
//	if (arr[0] > arr[1]) return false;
//	return isSorted(arr + 1, n - 1);
//}
//
//int main() {
//	int n;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	int* arr = new int[n];
//	inputArray(arr, n);
//	cout <<"Is sorted: " <<isSorted(arr, n) <<endl;
//	delete [] arr;
//}

//Array sum
//int arraySum (int arr[], int n) {
//	if (n == 0) return 0;
//	return arr[0] + arraySum(arr + 1, n - 1);
//}
//
//int main() {
//	int n;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	int* arr = new int[n];
//	inputArray(arr, n);
//	cout <<"Array sum: " <<arraySum(arr, n) <<endl;
//	delete [] arr;
//}

//Check Number
//bool checkNumber (int arr[], int n, int x) {
//	if (n == 0) return false;
//	if (arr[0] == x) return true;
//	return checkNumber(arr + 1, n - 1, x);
//}
//
//int main() {
//	int n, x;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	int* arr = new int[n];
//	inputArray(arr, n);
//	cout <<"Enter the Number to search for: ";
//	cin >>x;
//	cout <<"Is " <<x <<" present: " <<checkNumber(arr, n, x) <<endl;
//	delete [] arr;
//}

//First index of the Number
//int firstIndex (int arr[], int n, int x) {
//	//Base case
//	if (n == 0) return -1;
//	if (arr[0] == x) return 0;
//	
//	//Recursive assumption
//	int so = firstIndex(arr + 1, n - 1, x);
//	
//	//Self work
//	if (so >= 0) return 1 + so;
//	else return so;
//}
//
//int main() {
//	int n, x;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	int* arr = new int[n];
//	inputArray(arr, n);
//	cout <<"Enter the Number to search for: ";
//	cin >>x;
//	cout <<"First index of " <<x <<": " <<firstIndex(arr, n, x) <<endl;
//	delete [] arr;
//}

//Last index of the Number
/*
//Approach - 1
//int lastIndex (int arr[], int n, int x) {
//	if (n == 0) return -1;
//	if (arr[n - 1] == x) return n - 1;
//	return lastIndex(arr, n - 1, x);
//}
//
//int main() {
//	int n, x;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	int* arr = new int[n];
//	inputArray(arr, n);
//	cout <<"Enter the Number to search for: ";
//	cin >>x;
//	cout <<"Last index of " <<x <<": " <<lastIndex(arr, n, x) <<endl;
//	delete [] arr;
//}

//Approach - 2
int lastIndex (int arr[], int n, int x) {
	if (n == 0) return -1;
	int ans = lastIndex(arr + 1, n - 1, x);
	if (ans == -1) {
		if (arr[0] == x) return 0;
		return -1;
	}
	return ans + 1;
}

int main() {
	int n, x;
	cout <<"Enter the size of the array: ";
	cin >>n;
	int* arr = new int[n];
	inputArray(arr, n);
	cout <<"Enter the element to be search for: ";
	cin >>x;
	cout <<"Last index: " <<lastIndex(arr, n, x) <<endl;
	delete [] arr;
}
*/

//All Indices
/*
//Approach - 1
//int allIndexes (int input[], int size, int output[], int x, int ind = 0) {
//	if (size == 0) return 0;
//	if (input[0] == x) {
//		output[0] = ind;
//		int opSize = allIndexes (input + 1, size - 1, output + 1, x, ind + 1);
//		return opSize + 1;
//	} else return allIndexes (input + 1, size - 1, output, x, ind + 1);
//}
//
//int main() {
//	int n, x;
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	
//	//Dynamic allocation
//	int* input = new int[n];
//	int* output = new int[n];
//	
//	//Taking input
//	inputArray(input, n);
//	
//	//Search element
//	cout <<"Enter the element to be searched for: ";
//	cin >>x;
//	
//	//Result
//	int opSize = allIndexes (input, n, output, x);
//	printArray(output, opSize);
//
//  delete [] input;
//  delete [] output;
//}
//Approach - 2 --> We will work on last element of the array while first to second last elements are handled by recursion.
int allIndexes (int input[], int size, int x, int output[]) {
	if (size == 0) return 0;
	int opSize = allIndexes(input, size - 1, x, output);
	if (input[size - 1] == x) {
		output[opSize] = size - 1;
		return opSize + 1;
	} else return opSize;
}

int main() {
	int n, x;
	cout <<"Enter the size of the array: ";
	cin >>n;
	
	//Dynamic allocation
	int* input = new int[n];
	int* output = new int[n];
	
	//Taking input
	inputArray(input, n);
	
	//Search Element
	cout <<"Enter the element to search for: ";
	cin >>x;
	
	//Result
	int opSize = allIndexes(input, n, x, output);
	printArray(output, opSize);
	
	delete [] input;
	delete [] output;
}

//Approach - 3 --> We will work on first element of the array while second to last elements are handled by recursion.
void updateArray (int arr[], int n) {
	if (n == 0) return;
	arr[0] += 1;
	updateArray(arr + 1, n - 1);
}

void shiftArray (int arr[], int n) {
	if (n == 0) {
		arr[0] = 0;
		return;
	}
	arr[n] = arr[n - 1];
	shiftArray(arr, n - 1);
}

int allIndexes (int input[], int size, int output[], int x) {
	if (size == 0) return 0;
	int opSize = allIndexes (input + 1, size - 1, output, x);
	updateArray(output, opSize);
	if (input[0] == x) {
		shiftArray(output, opSize);
		return opSize + 1;
	} else return opSize;
}

int main() {
	int n, x;
	cout <<"Enter the size of the array: ";
	cin >>n;
	
	//Dynamic allocation
	int* input = new int[n];
	int* output = new int[n];
	
	//Taking input
	inputArray(input, n);
	
	//Search element
	cout <<"Enter the element to be searched for: ";
	cin >>x;
	
	//Result
	int opSize = allIndexes(input, n, output, x);
	printArray(output, opSize);
	
	delete [] input;
	delete [] output;
}
*/

/*
//Multiplication (Recursive)
int recursiveMultiplication  (int m, int n) {
	if (m == 0 || n == 0) return 0;
	return m + recursiveMultiplication(m, n - 1);
}

int main() {
	int m, n;
	cout <<"Enter M and N (M * N): ";
	cin >>m >>n;
	cout <<m <<" * " <<n <<": " <<recursiveMultiplication(m, n);
}
*/

//Division recursive
/*
int recursiveDivision (int m, int n) {
	if (m < n) return 0;
	return 1 + recursiveDivision(m - n, n);
}

int main() {
	int m, n;
	cout <<"Enter M and N (M / N): ";
	cin >>m >>n;
	cout <<m <<" / " <<n <<": " <<recursiveDivision(m, n) <<endl;
}
*/

//Count zeros
/*
int countZeros (int n) {
	if (n <= 9) {
		if (n == 0) return 1;
		else return 0;
	}
	if (n % 10 == 0) return 1 + countZeros(n / 10);
	else return countZeros(n / 10);
}

int main() {
	int n;
	cout <<"Enter a Number: ";
	cin >>n;
	cout <<"No. of zeros present inside " <<n <<": " <<countZeros(n) <<endl;
}
*/

//Set precision
//#include <iomanip> // setprecison() function is defined inside iomanip library file.
//void print1 (double x) {
//	cout <<"x1: " <<x <<endl;
//	cout <<2.71 <<endl;
//}
//
//void print(double x) {
//	cout <<"x: " <<x <<endl;
//	cout <<2.0 <<endl;
//	print1(4.213213);
//}
//
//int main() {
//	float x = 2.749;
//	double y = 11.768546291;
//	
//	cout <<"11.21: " <<11.21 <<endl;
//	cout <<fixed <<setprecision(4) <<x <<endl;
//	cout <<"111.21: " <<111.21 <<endl;
//	cout <<fixed <<setprecision(7) <<y <<endl;
//	cout <<"1111.21: " <<1111.21 <<endl;
//	print(1.1); // set precision will also show its effect in function call made above.
//}

//Geometric sum
/*
//Approach - 1
//int power (int x, int n) {
//	if (n == 0) return 1;
//	int n_2 = power(x, n / 2);
//	if (n % 2 == 0) return n_2 * n_2;
//	else return x * n_2 * n_2;
//}
//
//float geometricSum (int n) {
//	if (n == 0) return 1;
//	return 1.0 / power(2, n) + geometricSum(n - 1);
//}
//
//int main() {
//	int n;
//	cout <<"Enter a Number: ";
//	cin >>n;
//	cout <<"Geometric sum: " <<fixed <<setprecision(5) <<geometricSum(n) <<endl;
//}

//Approach - 2
float geometricSum (int n, int k = 2) {
	if (n == 0) return 1;
	return 1.0 / k + geometricSum(n - 1, k * 2);
}

int main() {
	int n;
	cout <<"Enter a Number: ";
	cin >>n;
	cout <<"Geometric sum: " <<fixed <<setprecision(5) <<geometricSum(n) <<endl;
}
*/

//Check Palindrome (Recursive)
/*
int arrayLength (char arr[]) {
	if (arr[0] == '\0') return 0;
	return 1 + arrayLength(arr + 1);
}

bool checkPalindrome (char arr[], int start, int end) {
	if (start >= end) return true;
	if (arr[start] != arr[end]) return false;
	return checkPalindrome(arr, start + 1, end - 1);
}

int main() {
	char arr[100];
	cout <<"Enter a String: ";
	cin >>arr;
	int length = arrayLength(arr);
	cout <<"Is Palindrome: " <<checkPalindrome(arr, 0, length - 1) <<endl;
}
*/

//Sum of digits (Recursive)
/*
int digitSum (int n) {
	if (n == 0) return 0;
	int sum = digitSum(n / 10);
	return n % 10 + sum;
}

int main() {
	int n;
	cout <<"Enter a Number: ";
	cin >>n;
	cout <<"Digit sum: " <<digitSum(n) <<endl;
}
*/

//Replace pi
//int strLength (char arr[]) {
//	if (arr[0] == '\0') return 0;
//	else return 1 + strLength(arr + 1);
//}
//
//void shiftArray (char arr[], int n) {
//	if (n - 2 < 0) return;
//	arr[n + 2] = arr[n];
//	shiftArray(arr, n - 1);
//}
//
//void updateArray (char arr[], char arr1[]) {
//	if (arr1[0] == '\0') return;
//	arr[0] = arr1[0];
//	updateArray(arr + 1, arr1 + 1);
//}
//
//void replacePi (char arr[], int n) {
//	if (n < 2) return;
//	if (arr[0] == 'p' && arr[1] == 'i') {
//		shiftArray(arr, n);
//		updateArray(arr, "3.14");
//		replacePi(arr + 4, n - 2);
//	} else replacePi (arr + 1, n - 1);
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter the string: ";
//	cin.get(arr, 100);
//	replacePi(arr, strLength(arr));
//	cout <<"Updated string: " <<arr <<endl;
//}

//Remove x
// Parameter passed to the function is of C++ string type
//string removeX(string str) {
//	if (str[0] == '\0') return str;
//	if (str[0] == 'x') return removeX(&str[1]);
//	else return str[0] + removeX(&str[1]); // str + 1 -- error concatenation of character and string type is not allowed.
//}
//
//int main() {
//	string str;
//	cout <<"Enter a string: ";
//	getline(cin, str);
//	cout <<"Updated string: " <<removeX(str) <<endl;
//}

//Parameter passed to the function is of c style character array
//void shiftArray (char arr[]) {
//	if (arr[1] == '\0') {
//		arr[0] = '\0';
//		return;
//	}
//	arr[0] = arr[1];
//	shiftArray(arr + 1);
//}
//
//void removeX (char arr[]) {
//	if (arr[0] == '\0') return;
//	if (arr[0] == 'x') {
//		shiftArray(arr);
//		removeX(arr);
//	} else removeX(arr + 1);
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter a string: ";
//	cin.get(arr, 99);
//	removeX(arr);
//	cout <<"Updated string: " <<arr <<endl;
//}

//String to Interger conversion
//Approach - 1
//int strLength (char arr[]) {
//	if (arr[0] == '\0') return 0;
//	return 1 + strLength(arr + 1);
//}
//
//int power (int x, int n) {
//	if (n == 0) return 1;
//	int n_2 = power(x, n / 2);
//	if (n % 2 == 0) return n_2 * n_2;
//	else return x * n_2 * n_2;
//}
//
//int str2Integer (char arr[], int n) {
//	if (n == 1) return arr[0] - 48;
//	int numPart = (arr[0] - 48) * power(10, n - 1);
//	return  numPart + str2Integer(arr + 1, n - 1);
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter a Number (string type): ";
//	cin >>arr;
//	cout <<"Integer Number: " <<str2Integer(arr, strLength(arr))<<endl;
//}

//Approach - 2
//int str2Integer (char arr[], int ans = 0) {
//	if (arr[1] == '\0') return ans * 10 + arr[0] - 48;
//	return str2Integer(arr + 1, ans * 10 + arr[0] - 48);
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter a Number: ";
//	cin >>arr;
//	cout <<"Integer Number: " <<str2Integer(arr) + 1 <<endl;
//}

//Print the digits present inside a no.
//Same order
//void printDigits(int n) {
//	if (n <= 9) {
//		cout <<n <<" ";
//		return;
//	}
//	printDigits(n / 10);
//	cout <<n % 10 <<" ";
//}
//
////Reverse order
//void printDigitsReverse(int n) {
//	if (n <= 9) {
//		cout <<n <<" ";
//		return;
//	}
//	cout <<n % 10 <<" ";
//	printDigitsReverse(n / 10);
//}
//
//int main() {
//	int n;
//	cout <<"Enter a Number: ";
//	cin >>n;
//	printDigits(n);
//	cout <<endl;
//	printDigitsReverse(n);
//}

//Reverse a Number
//int digiCount(int n) {
//	if (n <= 9) return 1;
//	return 1 + digiCount(n / 10);
//}
//
//int power(int x, int n) {
//	if (n == 0) return 1;
//	int n_2 = power(x, n / 2);
//	if (n % 2 == 0) return n_2 * n_2;
//	else return x * n_2 * n_2;
//}
//
//int reverseNum(int num, int k) {
//	if (num <= 9) return num;
//	int ans = (num % 10) * power(10, k - 1);
//	return ans + reverseNum(num / 10, k - 1);
//}
//
//int main() {
//	int n;
//	cout <<"Enter a Number: ";
//	cin >>n;
//	cout <<"Reversed Number: " <<reverseNum(n, digiCount(n)) <<endl;
//}

//Pair star
//int strLength(char arr[]) {
//	if (arr[0] == '\0') return 0;
//	return 1 + strLength(arr + 1);
//}
//
//void shiftArray(char arr[], int n) {
//	if (n < 0) return;
//	arr[n + 1] = arr[n];
//	shiftArray(arr, n - 1);
//}
//
//void pairStar(char arr[], int n) {
//	if (n < 2) return;
//	if (arr[0] == arr[1]) {
//		shiftArray(arr + 1, n - 1);
//		arr[1] = '*';
//		pairStar(arr + 2, n - 1);
//	} else pairStar(arr + 1, n - 1);
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter a String: ";
//	cin >>arr;
//	int length = strLength(arr);
//	pairStar(arr, length);
//	cout <<"Updated string: " <<arr <<endl;
//}

//Encrypt a Number
/*
Rules: 
	   1) for every even digit present inside the number, add 1 to it.
	   2) for every odd digit present inside the number, substract 1 from it.

Example: let n = 5032 
		 --> even digits = 0, 2 --After adding 1--> 1, 3
		 --> odd digits = 5, 3 --After substracting 1--> 4, 2
		 
		 new number: 4123
*/

//int tokenId(int n) { //doesnt works properly 1032
//	if (n <= 9) {
//		if (n % 2 == 0) return n + 1;
//		else return n - 1;
//	}
//	int num = n % 10;
//	if (num % 2 == 0) return (num + 1) + tokenId(n / 10) * 10;
//	else return (num - 1) + tokenId(n / 10) * 10;
//}

int digiCount(int n) {
	if (n <= 9) return 1;
	return 1 + digiCount(n / 10);
}

int power(int x, int n) {
	if (n == 0) return 1;
	int n_2 = power(x, n / 2);
	if (n % 2 == 0) return n_2 * n_2;
	else return x * n_2 * n_2;
}

int encryptedNum(int n, int k) {
	if (k == 1) {
		if (n % 2 == 0) return n + 1;
		else return n - 1;
	}
	int digit = n % 10;
	if (digit % 2 == 0) {
		return (digit + 1) * power(10, k - 1) + encryptedNum(n / 10, k - 1);
	} else {
		if (digit - 1 == 0) encryptedNum(n / 10, k - 1) * 10;
		else return (digit - 1) * power(10, k - 1) + encryptedNum(n / 10, k - 1);
	} 
}

int main() {
	int n;
	cout <<"Enter a Number: ";
	cin >> n;
	cout <<"Token Id: " <<encryptedNum(n, digiCount(n)) <<endl;
}
