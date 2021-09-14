#include <iostream>
#include <climits>
#include <cstring>
#include <string>
//C++ strings
//int main() {
	
	//Taking input inside a string
//	string str;
//	cout <<"Enter str: ";
//	cin >>str;
//	cout <<"str: " <<str <<endl;
//	
//	string str1;
//	cout <<"Enter str1: ";
	//The getline fucntion works only with teh string type and it acepts three arguments inside of it
	// 1. the input stream (file or cin) from where the data has to be read.
	// 2. string variabe in which data has to be stored.
	// 3. delimeter. 
//	getline(cin, str1, '$');
//	cout <<str1 <<endl;
	
	//Difference between getline and cin.getline()
//	char arr[11];
//	cout <<"Enter a string: ";
//	cin.getline(arr, 5, '$');
//	cout <<"arr: " <<arr <<endl;
	
	//getline() and cin.getline() are two different functions, getline is a function of <string> header file and it is supposed to work with string type only while cin.getline is a function of <iostream> header file and it is supposed to work with char arrays.
//	getline(cin, arr, '$');
//	cout <<"arr: " <<arr <<endl;

//	string str2;
//	cout <<"Enter str2: ";
//	cin.getline(str2, 5, '$'); // error
//	cout <<"str2: " <<str2 <<endl;

	//String decleration and initialization at the same time.
//	string str = 'A'; //[Error] invalid conversion from 'char' to 'const char*' [-fpermissive] (value must be encoled within double quotes).
//	string str1 = "L";
//	string str2 = "Some Random Text";
//	string str3 = "Some More Random Text";
//	cout <<"str1: " <<str1 <<endl;
//	cout <<"str2: " <<str2 <<endl;
//	cout <<"str3: " <<str3 <<endl;

	//Acessing individual indexes within a string
//	string str = "Hello World!";
//	cout <<"str: " <<str <<endl;
//	cout <<"str[7]: " <<str[7] <<endl;
//	
////	for (int i = 0; i < 21; i++) { //just like arrays string bound are also not checked, however beyond the string lenngth grabge values are stored.
////		cout <<"--" <<str[i] <<"--" <<endl;
////	}
//	
//	cout <<"str[3]: " <<str[3] <<endl;
//	cout <<"str[4]: " <<str[4] <<endl;
////	str[3] = "p"; //[Error] invalid conversion from 'char' to 'const char*' [-fpermissive]  (whenever writing a value at a particular index inside the string, it must be of character type).
////	str[4] = "pyq";
//	str[7] = 'pyq';  //'q' gets stored at str[7]
//	cout <<"str: " <<str <<endl;
////	str[3] = true; //Error
//	str[3] = 'E';
//	cout <<"str: " <<str <<endl;
	
	//String concatenation -- '+' operator is used for string cncatenation
//	string str = "Neel Prakash says ";
//	string str1 = "'I wants to pursue a carrer in research'.";
//	cout <<"str + str1: " <<str + str1 <<endl;
	
	// not work for character arrays
//	char arr[5] = "abcd";
//	char arr1[5] = "efgh";
//	cout <<arr + arr1 <<endl;  // [Error] invalid operands of types 'char [5]' and 'char [5]' to binary 'operator+'
	
	//String inbuilt functions
	//string.length()
//	string str = "Hel\\lo"; // while counting the length of the string escape sequence (\\, \n, \t) are considered as a single character.
//	cout <<"str.length(): " <<str.length() <<endl;
	
//	string.find() -- works for both string as well as charcter search (works only with string datatype)
//	string str1 = "for the people, by the people, with the people";
//	for (int i = 0; i < 55 ; i++) cout <<"i: " <<i <<": --" <<str1[i] <<"--" <<endl;
//	cout <<"str1.find(the): " <<str1.find("the") <<endl;
//	cout <<"str1.find(the): " <<str1.find("the", 20) <<endl;
//	cout <<"str1.find(thes): " <<str1.find("thes") <<endl;
//	cout <<"str1.find(z): " <<str1.find('z') <<endl; // if the value for which the search was performed is not found then 18446744073709551615 is return as value by dev c++
//	cout <<"str1.find('t'): " <<str1.find('t') <<endl;

	// string.substr(start, length) -- returns a new string
//	string str2 = "Some Random Text";
//	cout <<"str2.substr(3, 5): " <<str2.substr(3, 7) <<endl; 
//	cout <<"str2.substr(3, 17): " <<str2.substr(3, 17) <<endl; // if the length of the string goes beyond the no. of characters present after teh strat then the entire string will be returned.
//	cout <<"str2.substr(): " <<str2.substr() <<endl; //start index is assumed as 0 and the complete string will be returned.
	
	//Out of all of the function that are disucusse over here only .insert and .replace modifies the original string, rest all returns a new string.	
//	string.insert(startIndex, string)
//	string str3 = "Some Text";
//	str3.insert(5, "Random ");
//	cout <<"str3: " <<str3 <<endl;
//	str3.insert(1, 'a'); //second argument must be of string type.
//	str3.insert(1, "	"); //tab is considered as equivalent to a single whitespace by the .insert() function.
//	cout <<"str3: " <<str3 <<endl;
//	
//	// tab is counted as a single character
//	string str4 = "So	m	e";
//	cout <<"str4.length(): " <<str4.length() <<endl;

	//string.replace(startIndex, length, str2)
//	string str5 = "Some Random Text";
//	cout <<"Original str5: " <<str5 <<endl;
//	str5.replace(5, 6, "More");
//	cout <<"updated str5: " <<str5 <<endl;
//}

//Passing string into the function
//void Func(string str) {  //Strings also behaves just like other premitive types that is whenever a string is passed into the function then a clone of that string will be received by the function (not a refrence to the original string as donw in case of arrays) hence any changes made within the string inside the fucntion is not reflected inside teh original string. 
//	cout <<endl;
//	cout <<"Inside Function" <<endl;
//	cout <<"str: " <<str <<endl;
//	str[0] = 'A';
//	cout <<"updated str: " <<str <<endl;
//	cout <<endl;
//}
//
//int main() {
//	string str;
//	cout <<"Enter a string: ";
//	cin >>str;
//	cout <<"Inside main" <<endl;
//	cout <<"Before Func call: " <<str <<endl;
//	Func(str);
//	cout <<"After Func call: " <<str <<endl;
//	
//}

//Strings are actually stored in the memory with the help of pointers.
//string Func1 (string str, string str1) {
//	cout <<endl;
//	cout <<"Inside Function" <<endl;
//	cout <<"byte-size (str): " <<sizeof(str) <<", byte-size (str1): " <<sizeof(str1) <<endl; //To know the byte size of the string .size() function is used, size of function will return the size of the class instance and its data member not the byte size of the actual string.
//	cout <<"byte-size (str.size()): " <<str.size() <<", byte-size (str1.size()): " <<str1.size() <<endl;
//	cout <<"Before update: " <<"str - " <<str <<", str1 - " <<str1 <<endl;
//	str[0] = 'A';
//	str1[0] = 'B';
//	cout <<"Afetr update: " <<"str -  " <<str <<", str1 - " <<str1 <<endl;
//	return str, str1; // str1 is returned back to the original function
//}
//
//int main() {
//	cout <<"Inside main: " <<endl;
//	string str, str1;
//	cout <<"Enter str: ";
//	cin >>str;
//	cout <<"Enter str1: ";
//	cin >>str1;
//	cout <<endl;
//	cout <<"Before Function call" <<endl;
//	cout <<"str: " <<str <<", str1: " <<str1 <<endl;
//	Func1(str, str1);
//	cout <<"After Function call" <<endl;
//	cout <<"str: " <<str <<", str1: " <<str1 <<endl;
//	
//	cout <<"Func(str, str1): " <<Func1(str, str1) <<endl;
//	
//	cout <<"byte-size (str): " <<sizeof(str) <<", byte-size (str1): " <<sizeof(str1) <<endl;
//	cout <<"byte-size (str.size()): " <<str.size() <<", byte-size (str1.size()): " <<str1.size() <<endl;
//}


//It seems like that at the end of every string a null character is stored automatically -- no supporting document is found on the internet.
//int main() {
//	string str, str1, str2, str3, str4;
//	cout <<"Enter str: ";
//	cin >>str;
//	cout <<"Enter str1: ";
//	cin >>str1;
//	cout <<"Enter str2: ";
//	cin >>str2;
//	cout <<"Enter str3: ";
//	cin >>str3;
//	cout <<"Enter str4: ";
//	cin >>str4;
//	cout <<"str: " <<str <<", str1: " <<str1 <<endl;
//	cout <<"str - loop" <<endl;
//	for (int i = 0; str[i] != '\0'; i++) {
//		cout <<"--" <<str[i] <<"--" <<" ";
//	}
//	cout <<endl;
//	cout <<"str1 - loop" <<endl;
//	for (int j = 0; str1[j] != '\0'; j++) {
//		cout <<"--" <<str1[j] <<"--" <<" ";
//	}
//	cout <<endl;
//	cout <<"str2 - loop" <<endl;
//	for (int j = 0; str2[j] != '\0'; j++) {
//		cout <<"--" <<str2[j] <<"--" <<" ";
//	}
//	cout <<endl;
//	cout <<"str3 - loop" <<endl;
//	for (int j = 0; str3[j] != '\0'; j++) {
//		cout <<"--" <<str3[j] <<"--" <<" ";
//	}
//	cout <<endl;
//	cout <<"str4 - loop" <<endl;
//	for (int j = 0; str4[j] != '\0'; j++) {
//		cout <<"--" <<str4[j] <<"--" <<" ";
//	}
//}

//int main() {
//	string str = "Hello World";
//	string str1 = "Some Random Text";
//	string str2 = "Some More Random Text";
//	cout <<"str: " <<str <<", str1: " <<str1 <<", str2: " <<str2 <<endl;
//	cout <<"str - loop" <<endl;
//	for (int i = 0; str[i] != '\0'; i++) {
//		cout <<"--" <<str[i] <<"--" <<" ";
//	}
//	cout <<endl;
//	cout <<"str1 - loop" <<endl;
//	for (int j = 0; str1[j] != '\0'; j++) {
//		cout <<"--" <<str1[j] <<"--" <<" ";
//	}
//	cout <<endl;
//	cout <<"str2 - loop" <<endl;
//	for (int k = 0; str2[k] != '\0'; k++) {
//		cout <<"--" <<str2[k] <<"--" <<" ";
//	}
//	cout <<endl;
//}

//int main() {
//	string str;
//	cout <<"Enter str: ";
//	getline(cin, str);
//	cout <<"str: " <<str <<endl;
//	cout <<"str - loop" <<endl;
//	for (int i = 0; str[i] != '\0'; i++) {
//		cout <<"--" <<str[i] <<"--" <<" ";
//	}
//	cout <<endl;
//}

//int main() {
//	string str;
//	cout <<"Enter str: ";
//	getline(cin, str);
//	cout <<"str: " <<str <<endl;
//	cout <<"str - loop" <<endl;
//	for (int i = 0; str[i] != '\0'; i++) {
//		cout <<"--" <<str[i] <<"--" <<" ";
//	}
//	cout <<endl;
//}

//Clearly from the experimentation done above we can make a statement that a null charcater is always appended at the end of every string automaticaly.

//int main() {
//	string str;
//	cout <<"Enter str: ";
//	getline(cin, str);
//	cout <<"str: " <<str <<endl;
//	cout <<"str.size(): " <<str.size() <<endl;
//	cout <<"str - loop" <<endl;
//	for (int i = 0; str[i] != '\0'; i++) {
//		cout <<"--" <<str[i] <<"--" <<" ";
//	}
//	cout <<endl;
////	str = "Some More Random Text";
//	str = "Hello";
//	cout <<"updated str: " <<str <<endl;
//	cout <<"updated str.size(): " <<str.size() <<endl;
//	cout <<"updated str - loop" <<endl;
//	for (int j = 0; str[j] != '\0'; j++) {
//		cout <<"--" <<str[j] <<"--" <<" ";
//	}
//	cout <<endl;
//}

//Left shift on string
int main() {
	string str;
	cout <<"Enter a string: ";
	getline(cin, str);
	int i;
	cout <<"Enter the length by which string has to be shifted towards left: ";
	cin >>i;
	cout <<"Original string: " <<str <<endl;
	//Left shift
	int k = 0;
	for (i; str[i] != '\0'; i++) {
		str[k] = str[i];
		k = k + 1;
	}
	str.erase(k);
	cout <<"After left shift: " <<"--" <<str <<"--" <<endl;
}
