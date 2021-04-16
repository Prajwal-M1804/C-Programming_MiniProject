#include "unity.h"


/* Modify these two lines according to the project */
#include "ttt_operations.h"
#define PROJECT_NAME    "ttt"

/* Prototypes for all the test functions */

void DisplayBoard();
int Checkboard(int,int);
void Checkwin();

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(DisplayBoard);
  RUN_TEST(Checkboard);
  RUN_TEST(Checkwin);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void DisplayBoard()
 {
printf("\t|\t|\n");
     printf("%c\t|%c\t|%c\n", board[0], board[1], board[2]);
     printf("--------|-------|--------\n");
     printf("\t|\t|\n");
     printf("%c\t|%c\t|%c\n", board[3], board[4], board[5]);
     printf("--------|-------|--------\n");
     printf("%c\t|%c\t|%c\n", board[6], board[7], board[8]);
     printf("\t|\t|\n");
};


int Checkboard(int square, int player)
 {

if((player == 0 || player == 1) && board[square-1] == ' ') {
board[ square - 1 ] = 'X';
return 0;
     }

else if(board[square-1] == ' ' && player == 2) {
board[square-1] = 'O';
return 0;
} 
else 
return 1;  
     }


void Checkwin() 
{
int i, count = 0;
 if(board[ 0 ] == 'X' && board[ 1 ] == 'X' && board[ 2 ] == 'X') {
Findwinner = 'X';
} 
else if(board[ 3 ] == 'X' && board[ 4 ] == 'X' && board[ 5 ] == 'X') {
Findwinner = 'X';
} 
else if(board[ 6 ] == 'X' && board[ 7 ] == 'X' && board[ 8 ] == 'X') {
Findwinner = 'X';
} 
else if(board[ 0 ] == 'X' && board[ 3 ] == 'X' && board[ 6 ] == 'X') {
Findwinner = 'X';
 } 
 else if(board[ 1 ] == 'X' && board[ 4 ] == 'X' && board[ 7 ] == 'X') {
Findwinner = 'X';
} 
else if(board[ 2 ] == 'X' && board[ 5 ] == 'X' && board[ 8 ] == 'X') {
 Findwinner = 'X';
} 
else 
if(board[ 0 ] == 'O' && board[ 1 ] == 'O' && board[ 2 ] == 'O') {
Findwinner = 'O';
 } 
 else if(board[ 3 ] == 'O' && board[ 4 ] == 'O' && board[ 5 ] == 'O') {
Findwinner = 'O';
} 
else if(board[ 6 ] == 'O' && board[ 7 ] == 'O' && board[ 8 ] == 'O') {
Findwinner = 'O';
}
 else if(board[ 0 ] == 'O' && board[ 3 ] == 'O' && board[ 6 ] == 'O') {
Findwinner = 'O';
} 
else if(board[ 1 ] == 'O' && board[ 4 ] == 'O' && board[ 7 ] == 'O') {
Findwinner = 'O';
} 
else if(board[ 2 ] == 'O' && board[ 5 ] == 'O' && board[ 8 ] == 'O') {
Findwinner = 'O';
}     
if(board[ 0 ] == 'X' && board[ 4 ] == 'X' && board[ 8 ] == 'X') {
Findwinner = 'X';
} 
else if(board[ 2 ] == 'X' && board[ 4 ] == 'X' && board[ 6 ] == 'X') {
Findwinner = 'X';
     }
 if(board[ 0 ] == 'O' && board[ 4 ] == 'O' && board[ 8 ] == 'O') {
 Findwinner = 'O';
} 
else if(board[ 2 ] == 'O' && board[ 4 ] == 'O' && board[ 6 ] == 'O') {
 Findwinner = 'O';
     }

if(Findwinner == 'X') {
printf("\nPlayer X WON the game\n");
        return; 
     }
if(Findwinner == 'O') {
printf("\nPlayer O WON the game\n");
        return; 
     }
     
 for(i = 0; i < 9; i++) 
         if(board[i] != ' ') 
               count++;
 if(count == 9) {
Findwinner = 'C';
        printf("\nTie GAME\n");
        return;
     } 
     }











































































