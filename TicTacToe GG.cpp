// TIC-TAC-TOE - DEFINITIVE

#include <bits/stdc++.h>
using namespace std; 

#define PLAYER1
#define PLAYER2

#define SPACE 3 

#define PLAYER1MOVE 'O'
#define PLAYER2MOVE 'X'

// BOARD

void showBoard(char board [] [SPACE])

{ 
	printf("\n\n");
	
	printf("\t\t\t    %c  |  %c  |  %c  \n", board[0][0],
											board[0][1], board[0][2]);
	printf("\t\t\t----------------------\n");
		printf("\t\t\t    %c  |  %c  |  %c  \n", board[1][0],
											board[1][1], board[1][2]);
	printf("\t\t\t----------------------\n");
		printf("\t\t\t    %c  |  %c  |  %c  \n", board[2][0],
											board[2][1], board[2][2]);

	return;
}

// INSTRUCTIONS

void showInstructions()
{ 
	printf("\t\t\t    TIC-TAC-TOE\n\n");
	printf("Choose a cell numbered from 1 to 9 as below "
			"and play \n\n");
			
	printf("\t\t\t   1  |  2  |  3  \n");
	printf("\t\t\t------------------\n");
	printf("\t\t\t   4  |  5  |  6  \n");
	printf("\t\t\t------------------\n");
	printf("\t\t\t   7  |  8  |  9  \n\n");
	
	printf("-\t-\t-\t-\t-\t-\t-\t-\t-\t-\n\n");
	
	return;
}


// START THE GAME 

void initialise (char board[][SPACE], int moves[])
{ 
	srand(time(NULL));
	
	for (int i=0; i<SPACE; i++)
	{ 
		for (int j=0; j<SPACE; i++)
			board [i][j] = ' ';
	}
	for (int i=0; i<SPACE*SPACE; i++)
		moves[i] = i;
		
	random_shuffle (moves, moves + SPACE*SPACE);
	
	return;
}

// DECLARE THE WINNER 

void declareWinner (int whoseTurn)

{ 
		if (whoseTurn == PLAYER1)
			printf("PLAYER1 HAS WON\n");
			
		if (whoseTurn == PLAYER2)
			printf("PLAYER2 HAS WON\n");
		
		return;
}

// T FOR PLAYERS - SAME ROW 

bool rowCrossed(char board [][SPACE])

{ 		for (int i=0; i<SPACE; i++)

		{ 
			if (board [i][0] == board [i][1] &&
				board [i][1] == board [i][2] &&
				board [i][0] != ' ')
				return (true); 
		}
		return(false);
}

// T FOR PLAYERS - SAME COLUMN

bool columnCrossed(char board [][SPACE])

{ 		for (int i=0; i<SPACE; i++)

		{ 
			if (board [0][i] == board [1][i] &&
				board [1][i] == board [2][i] &&
				board [0][i] != ' ')
				return (true); 
		}
		return(false);
}
	
// T FOR PLAYERS - SAME DIAGONAL

bool diagonalCrossed(char board [][SPACE])

{ 		for (int i=0; i<SPACE; i++)

		{ 
			if (board [0][0] == board [1][1] &&
				board [1][1] == board [2][2] &&
				board [0][0] != ' ')
				return (true); 
				
			if (board [0][2] == board [1][1] &&
				board [1][1] == board [2][0] &&
				board [0][2] != ' ')
				return (true); 
		}
		return(false);
}

// T - GAME OVER

bool GameOver(char board[][SPACE])

{ 
	return(rowCrossed(board) || columnCrossed(board)
			|| diagonalCrossed(board));
}

// PLAY THE GAME 

void PlayTheGame(int whoseTurn)

{ 
	char board[SPACE][SPACE];
	
	int moves [SPACE*SPACE];
	
	initialise(board, moves);
	
	showInstructions();
	
	int moveIndex = 0, x, y;
	
		while (GameOver(board) == false &&
				moveIndex != SPACE*SPACE)
				
		{ 
			if (whoseTurn == PLAYER1)
			{ 
				x = moves[moveIndex] / SPACE;
				y = moves[moveIndex] % SPACE;
				board[x][y] = PLAYER1MOVE;
				printf("PLAYER1 HAS PUT A %C IN CELL %D\n",
						PLAYER1MOVE, moves[moveIndex]+1);
				showBoard(board);
				moveIndex ++;
				whoseTurn = PLAYER1; 
			}
				
			else if (whoseTurn == PLAYER2)
			{ 
		    	x = moves[movesIndex] / SPACE;
				y = moves[moveIndex] % SPACE;
				board[x][y] = PLAYER2 MOVE;
				printf("PLAYER2 HAS PUT A %C IN CELL %D\n",
						PLAYER2MOVE, moves[moveIndex]+1);
				showBoard(board);
				moveIndex ++;
				whoseTurn = PLAYER2; 
			}
		}
			if (GameOver(board) == false &&
					moveIndex == SPACE * SPACE)
				printf ("IT'S A DRAW\n'");
			else
			{ 
		    	if (whoseTurn == PLAYER1)
					whoseTurn = PLAYER2;
				else if (whoseTurn == PLAYER2)
					whoseTurn = PLAYER1;
					
				declareWinner(whoseTurn);
			}
			
			return; 
}

// 3, 2, 1... GO!

int main()

{ 
		PlayTheGame(PLAYER1);
		
		return(0);
}



