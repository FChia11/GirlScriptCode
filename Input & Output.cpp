# STANDARD INPUT (CIN)

// CIN IN USE 

#include <iostream>
using namespace std;

int main ()

{
	int i; 
	cout << "Enter an integer value: ";
	cin >> i; 
	cout << "The value entered is " << i; 
	cout << "and its double is " << i*2 << ".\n";
	
	return 0; 
}

// CIN AND STRINGS 

#include <iostream>
using namespace std; 

int main ()

{
	string mystring;
	cout << "What's your name'? ";
	getline (cin, mystring);
	cout << "Hello " << mystring << "\.n";
	cout << "What is your favourite hobby? ";
	getline (con, mystring);
	cout << "I like " << mystring << "too!\n";
	return 0;
}

// STRINGSTREAMS

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()

{
	string mystring;
	float price = 0;
	int quantity = 0;
	
	cout << "Initial price: ";
	getline (cin, mystring);
	stringstream(mystring) >> price; 
	cout << "Initial quantity: ";
	getline (cin, mystring);
	stringstream(mystring) >> quantity;
	cout << "Total price is " << price*quantity << end1;
	return 0;
}






