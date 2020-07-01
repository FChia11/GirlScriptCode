// 1 - WRITE A FUNCTION TO CALCULATE THE VOLUME OF A CYLINDER

#include <iostream>
#include<math.h>
using namespace std;

static double pi=3.1415926535;
int main()
{
float radius,height,volume;
cout<<"Enter radius and height of the cylinder: ";
cin>>radius;
cin>>height;
volume=3.14*radius*radius*height;
cout<<"Volume of cylinder is: " <<volume;
return 0;
}

// 2- WRITE A FUNCTION getAverage() THAT TAKES AN ARRAY AND SIZE AND RETURNS THE AVERAGE OF ITS ELEMENTS

#include <iostream>
using namespace std;

double getAverage(int arr[], int size);

int main ()
{
   int balance[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   double avg;

   avg = getAverage( balance, 10 ) ;

   cout << "Average is: " << avg << endl; 

   return 0;
}

// 3- TICTACTOE 

#include <iostream>
using namespace std;

char square[9] = {'0','1','2','3','4','5','6','7','8'};

int checkwin();
void board();

int main()
{
	int player = 1,i,choice;

    char mark;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

// HINT: PRINT A 2D ARRAY FOR TICTACTOE

#include <iostream>
using namespace std; 
int main()
{
    int myArray[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int width = 3, height = 3;

    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            std::cout << myArray[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}



