#include <iostream>
using namespace std;

int main() {
	//relational operators with floating point numbers
	
	//in c++, during calculations upto 15 places after the decimal points are considered.
	cout <<"upto 15 places: " <<(2 < 2.000000000000001) <<endl;
	cout <<"upto 16 places: " <<(2 < 2.0000000000000001) <<endl;
	
	// however if the floating point numbers are stored in float type then only six decimal places after point are considered.
	float a = 2.000001;
	float b = 2.0000001;
	
	//for double and long double type again 15 decimal places after the point are considered.
	double c = 2.000001;
	double d = 2.0000001;
	
	cout <<"float - upto 6 places: " << (2 < a) <<endl;
	cout <<"float - upto 7 places: " << (2 < b) <<endl;
	
	cout <<"double - upto 6 places: " << (2 < c) <<endl;
	cout <<"double - upto 7 places: " << (2 < d) <<endl;
	
	double e = 2.000000000001;
	double f = 2.0000000000001;
	
	cout <<"double - upto 12 places: " << (2 < e) <<endl;
	cout <<"double - upto 13 places: " << (2 < f) <<endl;
	
	double g = 2.000000000000001;
	double h = 2.0000000000000001;
	
	cout <<"double - upto 15 places: " << (2 < g) <<endl;
	cout <<"double - upto 16 places: " << (2 < h) <<endl;
	
	long double i = 2.000000000000001;
	long double j = 2.0000000000000001;
	
	cout <<"long double - upto 15 places: " << (2 < i) <<endl;
	cout <<"long double - upto 16 places: " << (2 < j) <<endl;
	
	//cout only prints upto 5 places after the decimal point.
	cout <<2.222222 <<endl;
}