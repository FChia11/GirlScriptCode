// ITERATION STATEMENTS (WHILE LOOP)

#include <iostream>
using namespace std;

int main ()

{
	int n = 10; 
	
	while n > 0
	
	{
	cout << n << ", "; 
	--n;
	}
	
	cout << "Off you go!\n";
}

//ITERATION STATEMENTS (DO WHILE LOOP)

#include <iostream>
using namespace std;

int main ()

{
	string mystring; 
	do {
		cout << "Enter text: ";
		getline (cin, mystring);
		cout << "You entered: " << mystring << '\n';
		} while (mystring != "See you later!");
}

//ITERATION STATEMENTS (FOR LOOP) 

#include <iostream>
using namespace std;

int main ()

 {
	for (int n=10; n>0; n--)
	{cout << n << ", "; 
	}
	cout << "See you later!\n";
}

//RANGE-BASED LOOPS 

#include <iostream>
#include <string>
using namespace std;

int main ()

{
	string mystring {"Hola!!"}

	for (char c: mystring)
	{
	cout << "[" << c << "]"; 
	}
	cout << "\n";
}

//JUMP STATEMENTS (BREAK)

#include <iostream>
using namespace std;

int main ()

{
	for (int n=10; n>0; n--)
	 {
	cout << n << ", ";
	if (n==3)
	{
		cout << "revert countdown!";
		break;
	}
	}

}

// JUMP STATEMENT (CONTINUE)

#include <iostream>
using namespace std;

int main ()

{
	for (int n=10; n>0; n--)
	if (n==5) continue; 
	cout << n << ", ";
	}		 
	cout << "liftoff!\n";
}


// JUMP STATEMENT (GOTO)

#include <iostream>
using namespace std;

int main ()
{
	int n = 10; 
mylabel: 
	cout << n << ", ";
	n--;
	if (n>0) goto mynewlabel;
	cout << "liftoff!\n";
}





