// HOMEWORKS - WEEK 1


// 1 - WRITE A PROGRAM TO ENTER 3 NUMBERS AND PRINT THE LARGEST NUMBER

//Tentative
#include <iostream>
using namespace std;

int main()
{    
    float 8, 7, 2;

    cout << "Enter three numbers: ";
    cin >> 8 >> 7 >> 2;

    if(8 >= 7 && 8 >= 2)
    {
        cout << "Maximum number: " << 8;
    }

    if(7 >= 8 && 7 >= 2)
    {
        cout << "Maximum number: " << 7;
    }

    if(2 >= 8 && 2 >= 7) {
        cout << "Maximum number: " << 2;
    }

    return 0;
}

// 2 - WRITE A PROGRAM TO ENTER A NUMBER AND CHECK WHETHER IT IS DIVISIBLE BY 7 OR NOT 

#include<iostream> 
using namespace std; 
  
// Function to find that number divisible by 7 or not 
int check(string str) 
{ 
    // Compute sum of digits 
    int n = str.length(); 
    int digitSum = 0; 
    for (int i=0; i<n; i++) 
        digitSum += (str[i]-'0'); 
  
    // Check if sum of digits is divisible by 7. 
    return (digitSum % 7 == 0); 
} 
  
// Driver code 
int main() 
{ 
    string str = "14"; 
    check(str)?  cout << "The number is divisible by 7" : cout << "The number is not divisible by 7"; 
    return 0; 
} 

// 3 - WRITE A PROGRAM TO ENTER A CHARACTER. CHECK WHETHER THE CHARACTER IS A VOWEL

#include <iostream> 
using namespace std; 
  
void vowelOrConsonant(char x) 
{ 
    if (x == 'a' || x == 'e' || x == 'i' ||  
        x == 'o' || x == 'u' || x == 'A' ||  
        x == 'E' || x == 'I' || x == 'O' || x == 'U') 
        cout << "Character is a vowel" << endl; 
    else
        cout << "<Character is a consonant>" << endl; 
} 
  
// Driver code 
int main() 
{ 
    vowelOrConsonant('A');  
    return 0; 
} 

// 4 - FIND THE DISCRIMINANT (b^2 - 4ac) AND DETERMINE WHETHER IT HAS REAL, IMAGINARY OR NO ROOTS

// CPP program to calculate Discriminant 
#include <iostream> 
using namespace std; 

void discriminant(int a, int b, int c){ 

	int discriminant = (b*b) - (4*a*c); 
	if(discriminant > 0){ 
		cout<<"Discriminant is "<<discriminant 
			<<" which is Positive"<<endl; 
			
		cout<<"Real roots"; 
	} 
	else if(discriminant == 0){ 
		cout<<"Discriminant is "<<discriminant 
			<<" which is Zero"<<endl; 
			
		cout<<"No roots"; 
	} 
	else if(discriminant < 0){ 
		cout<<"Discriminant is "<<discriminant 
			<<" which is Negative"<<endl; 
			
		cout<<"Imaginary roots"; 
	} 
} 

// Driver Code 
int main(){ 
	int a = 2, b = 5, c = -3; 

	// function call to print discriminant 
	discriminant(a, b, c); 
	return 0; 
} 


// BONUS QUESTION: FIND THE ROOTS OF AN EQUATION OF THE FORM AX^2 + BX + C IF THEY ARE REAL. 

#include<iostream> 
using namespace std; 
  
// Prints roots of quadratic equation ax*2 + bx + x 
void findRoots(int a, int b, int c) 
{ 
     // If a is 0, then equation is not quadratic, but 
     // linear 
     if (a == 0) 
     { 
        cout << "Invalid"; 
        return; 
     } 
  
     int d  = b*b - 4*a*c; 
     double sqrt_val = sqrt(abs(d)); 
  
     if (d > 0) 
     { 
         cout << "Real roots"; 
         cout << (double)(-b + sqrt_val)/(2*a) << "\n"
              << (double)(-b - sqrt_val)/(2*a); 
     } 
     else if (d == 0) 
     { 
         cout << "No roots"; 
         cout << -(double)b / (2*a); 
     } 
     else // d < 0 
     { 
         cout << "Imaginery roots"; 
         cout << -(double)b / (2*a) << " + i" << sqrt_val 
              << "\n"  << -(double)b / (2*a) << " - i"
              << sqrt_val; 
     } 
} 
  
// Driver code 
int main() 
{ 
    int a = 1, b = 5, c = 6; 
    findRoots(a, b, c); 
    return 0; 
}


