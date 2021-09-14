#include <iostream>
#include <climits>
#include <cstring>
#include <string>
using namespace std;

// Largest row or column
//int main() {
//	int m, n, x, arr[100][100];
//	cout <<"Enter the max no. of rows and cols required: ";
//	cin >>m >>n;
//	cout <<"Enter array elements: " <<endl;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >>arr[i][j];
//		}
//	}
//	if (m >= n) x = m;
//	else x = n;
//	int largest = INT_MIN, lInd = 0;
//	bool flag = true;
//	
//	//finding Largest row or col
//	for (int i = 0; i < x; i++) {
//		int rsum = 0, csum = 0;
//		for (int j = 0; j < x; j++) {
//			if (j < n && i < m) {
//				rsum = rsum + arr[i][j];
//			}
//			if (j < m && i < n) {
//				csum = csum + arr[j][i];
//			}
//		}
//		if (rsum > largest && rsum >= csum) {
//			largest = rsum;
//			lInd = i;
//			flag = true;
//		} else if (csum > largest) {
//			largest = csum;
//			lInd = i;
//			flag = false;
//		}
//	}
//	if (flag) cout <<"row index: " <<lInd <<", row sum: " <<largest <<endl;
//	else cout <<"col index: " <<lInd <<", col sum: " <<largest <<endl;
//}

//Wave print
//void inputArray(int arr[][100], int m, int n) {
//	if (m <= 0 || n <= 0) return;
//	cout <<"Enter array elements : " <<endl;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >>arr[i][j];
//		}
//	}
//}
//
//void wavePrint(int arr[][100], int m, int n) {
//	if (m <= 0 || n <= 0) return;
//	for (int j = 0; j < n; j++) {
//		for (int i1 = 0; i1 < m; i1++) {
//			cout <<arr[i1][j] <<" ";
//		}
//		j = j + 1;
//		if (j >= n) break;
//		for (int i2 = m - 1; i2 >= 0; i2--) {
//			cout <<arr[i2][j] <<" ";
//		}
//	}
//	cout <<endl;
//}
//
//int main() {
//	int m, n, arr[100][100];
//	cout <<"Enter the max no. of rows and cols required: ";
//	cin >>m >>n;
//	inputArray(arr, m, n);
//	wavePrint(arr, m, n);
//}

//All Possible substring (contigious or their reverse are only allowed i.e abc -> a, ab, abc, b, bc, c, ba, cba, cb)
//void printSubstr(char arr[], int i, int j) {
//	for (i; i <= j; i++) {
//		cout <<arr[i];
//	}
//	cout <<'\t';
//}
//
//void printReversedSubstr(char arr[], int i, int j) {
//	for (j; j >= i; j--) {
//		cout <<arr[j];
//	}
//	cout <<'\t';
//}
//
//void allPossibleSubstring(char arr[]) {
//	for (int i = 0; arr[i] != '\0'; i++) {
//		for (int j = i; arr[j] != '\0'; j++) {
////			if (i != j) {
////				printSubstr(arr, i, j);
////				printReversedSubstr(arr, i, j);
////			} else {
////				printSubstr(arr, i, j);
////			}
//			printSubstr(arr, i, j);
//		}
//	}
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter a string: ";
//	cin >>arr;
//	cout <<"All possible contigious substrings (including their reverse): " <<endl;
//	allPossibleSubstring(arr);
//}

//Check permutation
//Approach - 1 (quardatic soln)
//int stringLength(char arr[]) {
//	int count = 0;
//	while (arr[count] != '\0') {
//		count = count + 1;
//	}
//	return count;
//}
//
//bool isPermutation(char arr1[], char arr2[]) {
//	int n1 = stringLength(arr1), n2 = stringLength(arr2);
//	if (n1 != n2) return false;
//	for (int i = 0; i < n1; i++) {
//		bool flag = false;
//		for (int j = 0; j < n2; j++) {
//			if (arr1[i] == arr2[j]) {
//				arr2[j] = '\0';
//				flag = true;
//				break;
//			}
//		}
//		if (!flag) return false;
//	}
//	return true;
//}
//
//int main() {
//	char arr1[100], arr2[100];
//	cout <<"Enter first string: ";
//	cin >>arr1;
//	cout <<"Enter second string: ";
//	cin >>arr2;
//	cout <<"is permutation: " <<isPermutation(arr1, arr2) <<endl;
//}

//Approach - 2
//bool isPermutable(char arr1[], char arr2[]) {
//	int arr[256] = {};
//	
//	//Charcater frequency in first string
//	for (int i = 0; arr1[i] != '\0'; i++) {
//		arr[arr1[i]] = arr[arr1[i]] + 1;
//	}
//	
//	//Charcater frequency in second string
//	for (int j = 0; arr2[j] != '\0'; j++) {
//		arr[arr2[j]] = arr[arr2[j]] - 1;
//	}
//	
//	//Match
//	bool flag = true;
//	for (int k = 0; k < 256; k++) {
//		if (arr[k] != 0) {
//			flag = false;
//			break;
//		}
//	}
//	return flag;
//}
//
//bool isPermutation(char input1[], char input2[]) {
//    int arr[256] = {};
//    
//    //Character frequency in first string
//    for (int i = 0; input1[i] != '\0'; i++) {
//        arr[input1[i]] = arr[input1[i]] + 1;
//    }
//    
//    //Charcater frequency in second string
//    for (int j = 0; input2[j] != '\0'; j++) {
//        arr[input2[j]] = arr[input2[j]] - 1;
//    }
//    
//    //Match
//    bool flag = true;
//    for (int k = 0; k < 256; k++) {
//        if (arr[k] != 0) {
//            flag = false;
//            break;
//        }
//    }
//    return flag;
//}
//int main() {
//	char arr1[100], arr2[100];
//	cout <<"Enter first string: ";
//	cin >>arr1;
//	cout <<"Enter second string: ";
//	cin >>arr2;
////	if (isPermutable(arr1, arr2)) cout <<"is permutable: true" <<endl;
////	else cout <<"is permutable: false" <<endl;
//
//	if (isPermutation(arr1, arr2)) cout <<"is permutable: true" <<endl;
//	else cout <<"is permutable: false" <<endl;
//}
//Remove consecutive duplicate
//Apporach - 1 (quardatic time complexity)
//void leftShift(char arr[], int i) {
//	 for (i; arr[i + 1] != '\0'; i++) {
//	 	arr[i] = arr[i + 1];
//	 }
//	 arr[i] = '\0';	
//}
//
//void removeConsecutiveDuplicate(char arr[]) {
//	for (int i = 1; arr[i] != '\0'; i++) {
//		if (arr[i] == arr[i - 1]) {
//			leftShift(arr, i);
//		}
//	}
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter a string: ";
//	cin >>arr;
//	removeConsecutiveDuplicate(arr);
//	cout <<"updated string: " <<arr <<endl;
//}

//Apporach - 2
//void copy(char arr[], char arr1[]) {
//	int i;
//	for (i = 0; arr1[i] != '\0'; i++) {
//		arr[i] = arr1[i];
//	}
//	arr[i] = '\0';
//}
//
//void removeConsecutiveDuplicate(char arr[]) {
//	int i, k = 0;
//	char temp[100];
//	for (i = 1; arr[i] != '\0'; i++) {
//		if (arr[i] != arr[i - 1]) {
//			temp[k] = arr[i - 1];
//			k = k + 1;
//		}
//	}
//	temp[k] = arr[i - 1];
//	temp[k + 1] = '\0';
//	copy(arr, temp);
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter a string: ";
//	cin >>arr;
//	removeConsecutiveDuplicate(arr);
//	cout <<"Updated string: " <<arr <<endl;
//}

//Reverse each word
//void reverse(char arr[], int i, int j) {
//	while (i < j) {
//		int temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//		i++, j--;
//	}
//}
//
//void reverseEachWord(char arr[]) {
//	int i, k = 0;
//	for (i = 0; arr[i] != '\0'; i++) {
//		if (arr[i] == ' ') {
//			reverse(arr, k, i - 1);
//			k = i + 1;
//		}
//	}
//	reverse(arr, k, i - 1);
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter a string: ";
//	cin.getline(arr, 100);
//	reverseEachWord(arr);
//	cout <<"Update string: " <<arr <<endl;
//}

//Remove all occurance of x
//Apporach - 1 (quardatic soln)
//void leftShift(char arr[], int i) {
//	for (i; arr[i + 1] != '\0'; i++) {
//		arr[i] = arr[i + 1];
//	}
//	arr[i] = '\0';
//}
//
//void removeChar(char arr[], char x) {
//	for (int i = 0; arr[i] != '\0'; i++) {
//		if (arr[i] == x) {
//			leftShift(arr, i);
//		}
//	}
//}
//
//int main() {
//	char x, arr[100];
//	cout <<"Enter a string: ";
//	cin >>arr;
//	cout <<"Enter the character to be replaced: ";
//	cin >>x;
//	removeChar(arr, x);
//	cout <<"Updated string: " <<arr <<endl;
//}

//Apporach - 2 (linear soln) 
//void copy(char arr1[], char arr2[]) {
//	int i;
//	for (i = 0; arr2[i] != '\0'; i++) {
//		arr1[i] = arr2[i];
//	}
//	arr1[i] = '\0';
//}
//
//void removeChar(char arr[], char x) {
//	int k = 0;
//	char temp[100];
//	for (int i = 0; arr[i] != '\0'; i++) {
//		if (arr[i] != x) {
//			temp[k] = arr[i];
//			k = k + 1;
//		}
//	}
//	temp[k] = '\0';
//	copy(arr, temp);
//}
//
//int main() {
//	char x, arr[100];
//	cout <<"Enter a string: ";
//	cin >>arr;
//	cout <<"Enter the character to be replaced: ";
//	cin >>x;
//	removeChar(arr, x);
//	cout <<"Updated string: " <<arr <<endl;
//}

//Highest occurance character
//bool firstOccurance(char arr[], char x, char y) {
//	for (int i = 0; arr[i] != '\0'; i++) {
//		if (arr[i] == x) return true;
//		if (arr[i] == y) return false;
//	}
//}
//
//char highestOccurance(char arr[]) {
//	int temp[256] = {};
//	for (int i = 0; arr[i] != '\0'; i++) {
//		temp[arr[i]] = temp[arr[i]] + 1;
//	}
//	int hoi = 0;
//	for (int j = 1; j < 256; j++) {
//		if (temp[j] == temp[hoi] && temp[j] > 0) {
//			if (firstOccurance(arr, char(j), char(hoi))) hoi = j;
//		} else if (temp[j] > temp[hoi]) hoi = j;
//	}
//	return char(hoi);
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter a string: ";
//	cin >>arr;
//	cout <<"Highest occuring charcater: " <<highestOccurance(arr) <<endl;
//}

//Approach - 2
//char highestOccurance(char arr[]) {
//	char hoc;
//	int hocc = -1;
//	for (int i = 0; arr[i] != '\0'; i++) {
//		int currentCount = 0;
//		char current = arr[i];
//		if (arr[i] != '*') {
//		   for (int j = 0; arr[j] != '\0'; j++) {
//				if (arr[j] == current) {
//					arr[j] = '*';
//					currentCount = currentCount + 1;
//				}
//			}
//			if (currentCount > hocc) {
//				hoc = current;
//				hocc = currentCount;
//			}
//		}
//	}
//	return hoc;
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter a string: ";
//	cin >>arr;
//	cout <<"Highest occuring charcater: " <<highestOccurance(arr) <<endl;
//}

//compress string (charcater array implementation)
//Repeatition of characters could be more than 9
// aaaa -> a3
//void reverse (int arr[], int n) {
//	for (int i = 0; i < n; i++, n--) {
//		int temp = arr[i];
//		arr[i] = arr[n];
//		arr[n] = temp;
//	}
//}
//void compress(char arr[], int i) {
//	//repeatition count
//	int initial = i, count = 1;
//	for (i; arr[i + 1] == arr[i]; i++) {
//		count = count + 1;
//	}
//	
//	//Digits in count
//	int temp[10], l = 0;
//	while (count != 0) {
//		int digit = count % 10;
//		temp[l] = digit;
//		l = l + 1;
//		count = count / 10;
//	}
//	reverse(temp, l - 1);
//	
//	//Append count
//	for (int j = 0; j < l; j++) {
//		arr[initial] = char(temp[j] + 48);
//		initial = initial + 1;
//	}
//	
//	//Left shift
//	if (initial < i + 1) {
//		int k;
//		for (k = i + 1; arr[k] != '\0'; k++) {
//			arr[initial] = arr[k];
//			initial = initial + 1;
//		}
//		arr[initial] = '\0';
//	}
//	if (arr[i + 1] == '\0') arr[initial] = '\0';
//}
//
//void compressString(char arr[]) {
//	for (int i = 1; arr[i] != '\0'; i++) {
//		if (arr[i] == arr[i - 1]) {
//			compress(arr, i);
//		}
//	}
//}
//
//int main() {
//	char arr[100];
//	cout <<"Enter a string: ";
//	cin >>arr;
//	compressString(arr);
//	cout <<"Updated string: " <<arr <<endl;
//}

//compress string (string datatype implementation)
//Repeatition of character could not be more than 9
// aaaa - > a4
//string compress(string arr, int i) {
//    //Repeatition count
//    int initial = i, count = 2;
//    for (i; arr[i + 1] == arr[i]; i++) {
//        count = count + 1;
//    }
//
//    //Append count
//    arr[initial] = char(count + 48);
//    initial = initial + 1;
//    
//    //Left shift
//    if (initial < i + 1) {
//        int j;
//        for (j = i + 1; arr[j] != '\0'; j++) {
//            arr[initial] = arr[j];
//            initial = initial + 1;
//        }
//        arr[initial] = '\0';
//        arr.erase(initial);
//    }
//    return arr;
//}
//
//string getCompressedString(string &input) {
//    int i;
//    for (i = 1; input[i] != '\0'; i++) {
//        if (input[i] == input[i - 1]) {
//            input = compress(input, i);
//        }
//    }
//    return input;
//}
//
//int main() {
//	string str;
//	cout <<"Enter a string: ";
//	cin >>str;
//	string str1 = getCompressedString(str);
//	cout <<"str1: " <<"--" <<str1 <<"--" <<endl;
//}

//Min Length word
//int wordLength(int i, int j) {
//	int length = 0;
//	for (i; i < j; i++) {
//		length = length + 1;
//	}
//	return length;
//}
//
//void minLengthWord(char arr1[], char arr2[]) {
//	int wStart, minLength = INT_MAX, start = 0, n = strlen(arr1);
//	for (int i = 0; i <= n; i++) {
//		if (arr1[i] == ' ' || arr1[i] == '\0') {
//			int length = wordLength(start, i);
//			if (length < minLength) {
//				minLength = length;
//				wStart = start;
//			}
//			start = i + 1;
//		}
//	}
//	int j;
//	for (j = 0; j < minLength; j++) {
//		arr2[j] = arr1[wStart];
//		wStart = wStart + 1;
//	}
//	arr2[j] = '\0';
//}
//
//int main() {
//	char input[250], output[250];
//	cout <<"Enter a string: ";
//	cin.getline(input, 250);
//	minLengthWord(input, output);
//	cout <<"Min length word: " <<"--" <<output <<"--" <<endl;
//}

//Leader elements
//void inputArray(int arr[], int n) {
//	if (n <= 0) return;
//	cout <<"Enter array elements: ";
//	for (int i = 0; i < n; i++) {
//		cin >>arr[i];
//	}
//}
//
//void leaderElements(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		bool isLeader = true;
//		for (int j = i + 1; j < n; j++) {
//			if (arr[j] > arr[i]) {
//				isLeader = false;
//				break;
//			}
//		}
//		if (isLeader) cout <<arr[i] <<" ";
//	}
//	cout <<endl;
//}
//
//int main() {
//	int n, arr[100];
//	cout <<"Enter the size of the array: ";
//	cin >>n;
//	inputArray(arr, n);
//	cout <<"Leader elements: ";
//	leaderElements(arr, n);
//}

//Spiral print
void inputArray(int arr[][100], int m, int n) {
	if (m <= 0 || n <= 0) return;
	cout <<"Enter array elements: " <<endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >>arr[i][j];
		}
	}
}

int main() {
	int m, n, arr[100][100];
	cout <<"Enter the size of the array: ";
	cin >>m >>n;
	inputArray(arr, m, n);
	
	//Spiral print
	// if we won't use the direction then in a very specific case when no. of rows is less then the no. of cols, values beyond spiral print also gets printed.
	int direction = 0; // 0 --> left to right, 1 --> top to down, 2 --> right to left, 3 --> down to top
	int top = 0, right = n - 1, down = m - 1, left = 0;
	cout <<endl;
	while (top <= down && left <= right) {
		if (direction == 0) {
			for (int i = left; i <= right; i++) {
				cout <<arr[top][i] <<" ";
			}
			top = top + 1;
		} else if (direction == 1) {
			for (int j = top; j <= down; j++) {
				cout <<arr[j][right] <<" ";
			}	
			right = right - 1;
		} else if (direction == 2) {
			for (int k = right; k >= left; k--) {
				cout <<arr[down][k] <<" ";
			}
			down = down - 1;
		} else if (direction == 3) {
			for (int l = down; l >= top; l--) {
				cout <<arr[l][left] <<" ";
			}
			left = left + 1;
		}
		direction = (direction + 1) % 4;
	}
}
