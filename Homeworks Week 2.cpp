// 1 - WRITE A PROGRAM TO ENTER A CHARACTER AND CHECK IF IT IS A VOWEL, USING A SWITCH STATEMENT. 

#include <iostream>  
using namespace std;
int main() 
{
	int choice;
	cout << "Enter 1, 2 or 3: ";
	cin >> choice;
	switch (choice)
	{
	case 1: 
		cout << "Choice 1"; 
		break;
	
	default: 
		cout << "Not 1, 2 or 3"; 
		break;
	}
	
}

// 2 - WRITE A PROGRAM TO ENTER A NUMBER AND PRINT ITS MULTIPLICATION TABLE
 
#include <iostream>  
using namespace std;
  
int main() 
{ 
    int n = 7;   
    for (int i = 1; i <= 10; ++i)  
        cout << n << " * " << i << " = "  
             << n * i << endl; 
     
    return 0; 
} 


// 3 - WRITE A PROGRAM THAT CALCULATES THE FACTORIAL OF A NUMBER

#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
// 4 - WRITE A PROGRAM TO ENTER A NUMBER AND PRINT THE SUM OF SUM OF ITS DIGITS

#include <iostream>  
using namespace std;  
int main()  
{  
int n,sum=0,m;    
cout<<"Enter a number: ";    
cin>>n;    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
cout<<"Sum of Digits is: "<<sum<<endl;    
return 0;  
} 

// Alternatively (4)

# include<iostream> 
using namespace std; 
/* Function to get sum of digits */
class gfg 
{ 
	public: 
	int getSum(int n) 
	{ 
	int sum = 0; 
	while (n != 0) 
	{ 
	sum = sum + n % 10; 
	n = n/10; 
	} 
return sum; 
} 
}; 
//driver code 
int main() 
{ 
gfg g; 
int n = 132; 
cout<< g.getSum(n); 
return 0; 
} 

// 5 - DISPLAY SUM AND AVERAGE OF ARRAY ELEMENTS. 

# include<iostream> 
using namespace std; 

int main ()
{  	const int SIZE = 6;
	double arr [SIZE] = (7, 5, 6, 12, 35, 27);
	
	double sum = 0;
	
	for (int i = 0; i < SIZE; i++)
		sum += arr[i];
	
	cout << "The numbers are: " << end1;
	 for (int i = 0; i < 6; ++i) {
        cout << SIZE[i] << "  ";
    }

	cout << "Their sum = " << sum << end1; 
	cout << "Their average = " << sum / SIZE <<  end1; 
	 
   	return 0;  
} 

// 6 - 3X3 BOX. 2D ARRAY WITH 0'S AND 1'S. CHECK IF THE ROW HAS THE SAME ELEMENTS, IF IT DOES, PRINT OUT THE ROW NUMBER. 

# include<iostream> 
using namespace std; 

// Specify number of rows and columns 
#define M 3 
#define N 3 

// Returns common element in all rows of mat[M][N]. If there is no 
// common element, then -1 is returned 
int findCommon(int mat[M][N]) 
{ 
	return -1; 
} 

// Driver Code 
int main() 
{ 
	int mat[M][N] = { 
		{ 1, 1, 1 }, 
		{ 0, 1, 0 }, 
		{ 1, 0, 0 }, 
	}; 
	int result = findCommon(mat); 
	if (result == -1) 
		cout << "No common element"; 
	else
		cout << "1st row has the same element(1)" << result; 
	return 0; 
} 



