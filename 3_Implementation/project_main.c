#include "tttoperations.h"

int main()
 
{

  
int i, square;

for(i = 0; i < 9; i++) board[ i ] = ' ';
DisplayBoard();

while(Findwinner == ' ') {
printf("\n%c\n", Findwinner);

if(currentPlayer == 0 || currentPlayer == 1) {
printf("\nPlayer X\n");    
          printf("Enter an available square in the board");
          scanf("%d", &square);  

if(Checkboard(square, currentPlayer) == 1)  {
 currentPlayer = 1;
   } 

   else {
currentPlayer = 2;
          }
} 

else 
{
printf("\nPlayer 0\n");
printf("Enter an available square in the board");
scanf("%d", &square); 

if(Checkboard(square, currentPlayer) == 1)
  {
 currentPlayer = 2;
   } 
   
   else {
currentPlayer = 1;
          }
} 

DisplayBoard();
Checkwin();

}

return (0);

};
