#include <iostream>
#include <string>
using namespace std;

//int main() {
	//Tertory operator
//	//Exp - 1
//	int a, b, max;
//	cout <<"Enter two numbers: ";
//	cin >>a >>b;
//	bool flag = false;
//	max = a > b && flag ? a : b; // having a paranthesis around the condition statement is not compulsary but recommended.
//	cout <<"Max: " <<max <<endl;

	//Age estimation
//	string name;
//	int age;
//	cout <<"Enter your name: ";
//	getline(cin, name);
//	cout <<"Enter your age: ";
//	cin >>age;
//	cout <<endl;
//	
//	//More than 100
//	string flag = (age > 100) ? "true" : "false";
//	cout <<"Is " <<name <<" more than 100 years old: " <<flag <<endl;

	//traffic light signal
//	string color;
//	cout <<"Enter the color of the traffic light: ";
//	getline(cin, color);
//	cout <<endl;
//	
//	string action = (color == "red") ? "Stop" : "Drive Safely";
//	cout <<"Action: " <<action <<endl;

	//Random guess
//	int n;
//	cout <<"Enter a number: ";
//	cin >>n;
//	
//	string flag = ( n >= 13 && n <= 25 ) ? "Yes" : "No";
//	cout <<"Is " <<n <<" lies in between 13 and 25 (Both inlcuded): " <<flag <<endl;

	//Maximum
//	int a, b, max;
//	cout <<"Enter two numbers: ";
//	cin >>a >>b;
//	
//	max = (a > b) ? a : b;
//	cout <<"Maximum: " <<max <<endl;
	
	//Minimum
//	int a, b, min;
//	cout <<"Enter two numbers: ";
//	cin >>a >>b;
//	
//	min = (a > b) ? b : a;
//	cout <<"Minimum: " <<min <<endl;
//}

/*
//Whenever c++ encounters an inline function then it will copy the body of the function at the place where the given function was invoked (however this copying action entirely depands upon the compiler, usually compiler will copy the code only if the body of the function contains a few lines inside of it ( if 1 line is there cmpiler will absolutely copy the code, if 2 or 3 lines are there then it may or may not copy and if more than 3 lines are there then it will definately not copy the code -- it is a general standard), following set of rules are applied so that compiled file wont become too bulky).
//We tend to use inline functions becuase calling a function will produce some performance lag however this lag is so minute that it can be ignored almost all the time.
inline int maximum (int a, int b) {
	return (a > b) ? a : b;
}

inline int minimum (int a, int b) {
	return (a > b) ? b : a;
}
//minimum (int a, int b) { //Here no error is thrown on us as C++ considers int as the default datatype
//	return (a > b) ? b : a;
//}

inline int increment (int x) {
	cout <<endl;
	cout <<"x: " <<x <<endl;
	x = x + 1;
	cout <<"x: " <<x <<endl;
	cout <<endl;
	return x;
}

int main() {
//	int n;
//	cout <<"Enter a number: ";
//	cin >>n;
//	int n1 = increment(n);
//	cout <<"n: " <<n <<", n1: " <<n1 <<endl;
	
	int a, b;
	cout <<"Enter two numbers: ";
	cin >>a >>b;
	
	int max = maximum (a, b);
	cout <<"Maximum: " <<max <<endl;
	
	int min = minimum (a, b);
	cout <<"Minimum: " <<min <<endl;
}
*/

//Default arguments
int sum (int a, int b, int c, int d = 0, int e) {  //all non default argument must be present before the deault ones.
	return a + b + c + d + e;
}

int sum1 (int a, int b, int c = 0, int d = 0) {
	return a + b + c + d;
}

int sum2 (int a = 0, int b = 0, int c = 0, int d = 0) {
	return a + b + c + d;
}

int main() {
	int result = sum1 ( 1, 2, 3, 4 );
	int result1 = sum1 ( 1, 2, 3 );
	int result2 = sum1 ( 1, 2);
	
	cout <<"Result: " <<result <<endl;
	cout <<"Result1: " <<result1 <<endl;
	cout <<"Result2: " <<result2 <<endl;
	
	int result3 = sum2 ( 1, 2, 3, 4);
	int result4 = sum2 ();
	
	cout <<endl;
	cout <<"Result3: " <<result3 <<endl;
	cout <<"Result4: " <<result4 <<endl;
}
