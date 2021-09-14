#include <iostream>
#define PI 3.14 // PI can be used anywhere isnide the file.
//using namespace std;
//
//// Circumefrence of the circle
//void circumfrence (int radius) {
//	cout <<"Circumfrence: " <<2 * PI * radius <<endl;
//}
//
////Area of the circle
//void area (int radius) {
//	cout <<"Area: " <<PI * radius * radius <<endl;
//}
//
//int main() {
//	int radius;
//	cout <<"Enter the radius of the circle: ";
//	cin >>radius;
//	circumfrence(radius);
//	area(radius);
//}

//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//
//int x = 1;
//float y = 2.5;
//char ch = 'A';
//string str = "SomeRandomText";
//
//void Func() {
//	cout <<endl;
//	cout <<"y - 1: " <<y <<endl;
//	cout <<endl;
//}
//
//void Func1() {
//	cout <<endl;
//	x = x * 2;
//	str[3] = 'X';
//	cout <<"x: " <<x <<endl;
//	cout <<"str[3]: " <<str[3] <<endl;
//	cout <<endl;
//}
//
//int main() {
//	cout <<"x: " <<x <<endl;
//	cout <<"y: " <<y <<endl;
//	cout <<"ch: " <<ch <<endl;
//	cout <<"str: " <<str <<endl;
//	
//	int y = 2;
//	y = y + 2;
//	cout <<"y: " <<y <<endl;
//	
//	Func();
//	Func1();
//	cout <<"x: " <<x <<endl;
//	cout <<"y: " <<y <<endl;
//	cout <<"ch: " <<ch <<endl;
//	cout <<"str: " <<str <<endl;
//	
//	ch = ch + 5;
//	cout <<"ch: " <<ch <<endl;
//}


//More Experiments (macros) -- Macros are just like Find and Replace
//Exp - 1
//#include <iostream>
//#define PI 3.14;
//using namespace std;
//
//int main() {
//	cout <<"PI: " <<PI <<endl; //PI is replaced with '3.14;' over here hence the complete statement becomes 'cout <<"PI: " <<3.14; <<endl;' clearly a semicolon appears before endl hence an error ( [Error] expected primary-expression before '<<' token) will be thrown on us (It is always recommended not to use ';' at the end of macros to avoid these silly errors).
//}

//Exp - 2
//#include <iostream>
//using namespace std;
//
//#define PI 3.14
//
//float area (int radius) {
//	float circleArea = PI * radius * radius; //Actual statement -- 'float circleArea = 3.14 * radius * radius;'
//	return circleArea;
//}
//
//int main() {
//	cout <<"PI: " <<PI <<endl <<endl;
////	PI = PI + 1; // Error -- As PI is replace with 3.14 before compilation hence what we are trying to do over here is '3.14 = 3.14 + 1;' which is clearly an invaid expression ([Error] lvalue required as left operand of assignment).
//	
//	int radius;
//	cout <<"Enter the radius of the circle: " <<endl;
//	cin >>radius;
//	cout <<"Circumfrence: " <<2 * PI * radius <<endl; // The actual statement which compiler will excute becomes 'cout <<"Circumfrence: " <<2 * 3.14 * radius <<endl;'
//	float circleArea = area(radius);
//	cout <<"Area: " <<circleArea <<endl;
//}

//Exp - 3
//#include <iostream>
//using namespace std;
//
//#define Random "SomeRandomText"

//#define random 'SomeRandomText' // no error is produced over here as multi character constants are vaid values in c++ (how they are dealt with -- no idea).

////#define val double int arr[] = { 1, 2, 3, 4, 5 } //	[Error] two or more data types in declaration of 'arr' in expansion of val. Here must note that this error will only be thrown if we will use val anywhere inside our code (Compiler will try to expand/evaluate the macro only if it is used anyehere inside the code file).

////#define val x int arr[] = { 1, 2, 3, 4, 5 } // [Error] 'x' was not declared in this scope.

//# define val = 24 // if a macro with the same name is defined more than one time then the later one will be used in the code (Here in this case #define val int arr[] = { 1, 2, 3, 4, 5 } will be cosidered as a replacemnet statement form val).
//#define val int arr[] = { 1, 2, 3, 4, 5 }
//
//int main() {
//	cout <<"Random: " <<Random <<endl;
//	cout <<"random: " <<random <<endl;
////	cout <<'SomeRandomText' <<endl;  //In Both c, and c++ muti-charcater constants are of int type and have implementation defined values, hence whenever we try to print a muticharacter constant some interger value is printed onto the screen.
////	cout <<'Some' <<endl;
//	val; // The actual statement evaluated by the compiler is 'int arr[] = { 1, 2, 3, 4, 5 };', therefore we are able to acess arr[1] in the next line.
//	cout <<arr[1] <<endl;
//}

//Exp - 4
//#include <iostream>
//using namespace std;
//
//#define Multiply(a, b) a * b
//
//int main() {
//	cout <<"Multiply(5, 3): " <<Multiply (5, 3) <<endl;
//	cout <<"Multiply(5 + 3, 2 * 3): " <<Multiply ( 5 + 3, 2 * 3) <<endl; //the given statement wil not be evaluated as 'cout <<"Mutliply ( 5 + 3, 2 * 3): " <<8 * 6 <<endl' insted it will be evaluaed as 'cout <"Multiply ( 5 + 3, 2 * 3): " << 5 + 3 * 2 * 3 <<endl;' hence result is 23 not 49. The best way to remove this unambigitous behaviour is defining the macro like '#define Multiply ( a , b ) (a) * (b)'.
//}

//Exp - 5
//#include <iostream>
//using namespace std;
//
//#define Multiply(a, b) a * b
//#define Multiply1(a, b) (a) * (b)
//
//#define val char val[] = "SomeRandomText" //Error name of the decleration identifier and the macr identifier could not be same.
// 
//int main() {
//	cout <<"Multiply (3 + 5, 2 * 7): " <<Multiply (3 + 5, 2 * 7) <<endl; //The statement after replacement becomes: cout <<"Multiply (3 + 5, 2 * 7): " <<3 + 5 * 2 * 7 <<endl;
//	cout <<"Multiply1 (3 + 5, 2 * 7): " <<Multiply1 (3 + 5, 2 * 7) <<endl; //The statement after replacement becomes: cout <<"Multiply1 (3 + 5, 2 * 7): " <<(3 + 5) * (2 * 7) <<endl;
//	cout <<"val: " <<val <<endl;
//}

// Multiline macro (warning: dont type space or any other charcater after '\' otherwise backslach starts escaping that charcater insted of new line charcater. 
//#define function void Func (int x) { \
//		cout <<endl; \
//		cout <<"x - 1: " <<x <<endl; \
//		x = x + 1; \
//		cout <<"x - 1: " <<x <<endl; \
//		cout <<endl; \
//	}
//
//function;
//
//int main() {
//	int x = 1;
//	cout <<"x: " <<x <<endl;
//	Func (x);
//	cout <<"x: " <<x <<endl;
//}

// Exp - 7
//#define msg
//
//int main() {
//	cout <<"--" <<msg <<"--" <<endl;
//}

//Exp - 8

#define var int x = 1

var;

void Func () {
	cout <<endl;
	cout <<"x - 1: " <<x <<endl;
	x = x + 1;
	cout <<"x - 1: " <<x <<endl;
	cout <<endl;
}

int main() {
	cout <<"x: " <<x <<endl;
	x = x + 2;
	cout <<"x: " <<x <<endl;
	Func();
	cout <<"x: " <<x <<endl;
}
