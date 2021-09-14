#include <iostream>
using namespace std;

int a = 1; // it is always recommended not to use the global variable.
int b;
int c = 5;
void Func() {
	cout <<endl;
	cout <<"a - 1: " <<a <<endl;
	a = a + 1;
	cout <<"a - 1: " <<a <<endl;
	cout <<endl;
}

void Func1() {
	cout <<endl;
	cout <<"b - 1: " <<b <<endl;
	b = b + 1;
	cout <<"b - 1: " <<b <<endl;
	cout <<endl;
}

void Func2() {
	cout <<endl;
	cout <<"c - 1: " <<c <<endl;
	c = c + 1;
	cout <<"c: " <<c <<endl;
	cout <<endl;
}
void Func3(int c) {
	cout <<endl;
	cout <<"c - 2: " <<c <<endl;
	c = c + 1;
	cout <<"c - 2: " <<c <<endl;
	cout <<endl;
}

void Func4() {
	cout <<endl;
	cout <<"Global c: " <<c <<endl;
	cout <<endl;
}
int main() { // compiler will first search for the local variable, if a local variable is not found then it will search for the global varibable, if global variable is also not found then an error willbe thrown on us.
	cout <<"a: " <<a <<endl;
	a = a + 1;
	cout <<"a: " <<a <<endl;
	Func();
	cout <<"a: " <<a <<endl;
	
	cout <<endl;
	cout <<"b: " <<b <<endl;
	b = b + 1;
	cout <<"b: " <<b <<endl;
	Func1();
	cout <<"b: " <<b <<endl;
	
	cout <<endl;
	int c = 7;
	cout <<"c: " <<c <<endl;
	c = c + 1;
	cout <<"c: " <<c <<endl;
	Func2();
	Func3(c);
	Func4();
}
