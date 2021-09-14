#include <iostream>
using namespace std;

//int main() {
////	int arr[] = { 1, 2, 3, 4, 5 };
////	int arr1[] = arr; // not allowed
////	int arr1[] = { arr }; // not allowed
//	
//	//Refrence type
//	int i = 5, k = 9;
////	int& j; //refrence variable must be declared and initialized at the same time.
//	int& j = i;
//	cout <<"&i: " <<&i <<", i: " <<i <<", &j: " <<&j <<", j: " <<j <<endl;
//	j = i;
//	j++;
//	cout <<"i: " <<i <<", j: " <<j <<endl;
//	i++;
//	cout <<"i: " <<i <<", j: " <<j <<endl;
//	i = k;
//	cout <<"i: " <<i <<", j: " <<j <<", k: " <<k <<endl;
//	
//}

//void increment(int x) {
//	cout <<endl;
//	cout <<"&x: " <<&x <<", x: " <<x <<endl;
//	x = x + 1;
//	cout <<"&x: " <<&x <<", x: " <<x <<endl;
//	cout <<endl;
//}
//
//void increment1 (int& x) {
//	cout <<endl;
//	cout <<"&x: " <<&x <<", x: " <<x <<endl;
//	x = x + 1;
//	cout <<"&x: " <<&x <<", x: " <<x <<endl;
//	cout <<endl;
//}

//int main() {
//	int i = 7;
////	cout <<"&i: " <<&i <<", i: " <<i <<endl;
////	increment(i);
////	cout <<"&i: " <<&i <<", i: " <<i <<endl;
//
////	int& j = i;
////	cout <<"&i: " <<&i <<", i: " <<i <<", &j: " <<&j <<", j: " <<j <<endl;
////	increment(j); // although we are passing a refrence type of variable into the function but as the function is accepting a normal parameter hence it will again create a seprate memory location and the value of j is copied over there.
////	cout <<"&i: " <<&i <<", i: " <<i <<", &j: " <<&j <<", j: " <<j <<endl;
//	
//	cout <<"&i: " <<&i <<", i: " <<i <<endl;
//	increment1(i);
//	cout <<"&i: " <<&i <<", i: " <<i <<endl;
//	
//	cout <<"........................." <<endl;
//	
//	int& j = i;
//	cout <<"&i: " <<&i <<", i: " <<i <<", &j: " <<&j <<", j: " <<j <<endl;
//	increment1(j);
//	cout <<"&i: " <<&i <<", i: " <<i <<", &j: " <<&j <<", j: " <<j <<endl;
//}

//again
//void increment(int x) {
//	cout <<endl;
//	cout <<"&x: " <<&x <<", x: " <<x <<endl;
//	x = x + 1;
//	cout <<"&x: " <<&x <<", x: " <<x <<endl;
//	cout <<endl;
//}
//
//void increment1 (int & x) {
//	cout <<endl;
//	cout <<"&x: " <<&x <<", x: " <<x <<endl;
//	x = x + 1;
//	cout <<"&x: " <<&x <<", x: " <<x <<endl;
//	cout <<endl;
//}

//int main() {
//	int i = 7;
//	cout <<"&i: " <<&i <<", i: " <<i <<endl;
//	
//	int j = i;
//	cout <<"&i: " <<&i <<", i: " <<i <<", &j: " <<&j <<", j: " <<j <<endl;
//	j = j + 1;
//	cout <<"&i: " <<&i <<", i: " <<i <<", &j: " <<&j <<", j: " <<j <<endl;
	
	//Refrence type varibales
//	int i = 7;
//	int& j = i;
//	cout <<"&i: " <<&i <<", i: " <<i <<", &j: " <<&j <<", j: " <<j <<endl;
//	j = j + 1;
//	cout <<"&i: " <<&i <<", i: " <<i <<", &j: " <<&j <<", j: " <<j <<endl;
	
//	int i = 7;
//	cout <<"&i: " <<&i <<", i: " <<i <<endl;
//	increment(i);
//	cout <<"&i: " <<&i <<", i: " <<i <<endl;
	
//	int& j = i;
//	cout <<"&i: " <<&i <<", i: " <<i <<", &j: " <<&j <<", j: " <<j <<endl;
//	increment(j);
//	cout <<"&i: " <<&i <<", i: " <<i <<", &j: " <<&j <<", j: " <<j <<endl;

//	int i = 7;
//	cout <<endl;
//	cout <<"&i: " <<&i <<", i: " <<i <<endl;
//	increment1(i);
//	cout <<"&i: " <<&i <<", i: " <<i <<endl;
//}

//int decrement(int x) {
//	float z = 2.5;
//	return z; // z is converted into int type before return.
//}

//Never return a pointer or the refrence to a local variable from the function, it would be catstrophic.

//Bad Practice
//int* decrement1(int y) {
//	cout <<endl;
//	int w = y;
//	cout <<"&y: " <<&y <<", y: " <<y <<", &w: " <<&w <<", w: " <<w <<endl;
//	w = w + 1;
//	cout <<"&y: " <<&y <<", y: " <<y <<", &w: " <<&w <<", w: " <<w <<endl;
//	cout <<endl;
//	return &w; // here we are returning the address of the local variable and we already know that the scope of local variable is within its nearmost curly braces hence we are remembering the address of a temporary memory location which is not recommended (we have no idea about what happens with the value stored over here in later time).
//}

//int main() {
//	int i = 4;
////	int k = decrement(i);
////	cout <<"k : " <<k <<endl;
//	
//	cout <<"&i : " <<&i <<", i: " <<i <<endl;
//	int* p = decrement1(i);
//	cout <<"&i: " <<&i <<", i: " <<i <<endl;
//	cout <<"p: " <<p <<", *p: " <<*p <<endl; // value of *p is supposed to be 5 but since p is having the address of the local variable and the value of the local variable is cleared (set to zero in this case) once it is out of scope hence the value printed is 0.
//}	

//Bad practice
//int& decrement2 (int x) {
//	cout <<endl;
//	int y = x;
//	cout <<"&x: " <<&x <<", x: " <<x <<", &y: " <<&y <<", y: " <<y <<endl;
//	y = y - 1;
//	cout <<"&x: " <<&x <<", x: " <<x <<", &y: " <<&y <<", y: " <<y <<endl;
//	cout <<endl;
//	return y;
//}
//
//int main() {
//	int i = 7;
//	cout <<"&i: " <<&i <<", i: " <<i <<endl;
////	int k = decrement2(i); //here in this case the value of k is not changed because as soon as the value is returned by function we are copying that into a seprate memory location hence although the original value (refrence) returned by the function is garbage collected but our newly copied value remains the safe.
//	int& k = decrement2(i);
//	cout <<"&i: " <<&i <<", i: " <<i <<endl;
//	cout <<"&k: " <<&k <<", k: " <<k <<endl;
//	
//	int arr[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//	cout <<"&k: " <<&k <<", k: " <<k <<endl;
//}

int main() {
//	int* p = new int;
////	*p = 25;
//	cout <<p <<" " <<*p <<endl;
//	int* arr = new int[500];
//	arr[300] = 245;
//	cout <<arr[300] <<endl;
//	delete [] arr;
//	delete p;
	
	while(true) {
		long double* arr = new long double[9999];
		cout <<"arr: " <<arr <<endl;
//		delete []arr;
		delete arr;
	}
//	
//	int* p;
//	int count = 0;
//	while(true) {
////		int arr[9999];
//		int n = 25;
//		p = &n;
//		cout <<"p: " <<p <<endl;
//		if (count > 500) {
//			break;
//		}
//		count = count + 1;
////		cout <<"arr: " <<arr <<endl;
//	}
//	cout <<"p: " <<p <<" ,*p: " <<*p <<endl;
}
