#include<stdio.h>
#include<stdlib.h>

#define COL 7
#define ROW 6

/**
 * This function prints the table of game and his values.

 * \brief : It's a print of table of game.
 * @method grille : It's the table of game.
 * @param i : It represents the line of the table.
 * @param j : It represents the column of the table.
 */

void afficheGrille (char** grille) {
  
  int i,j;
  
  
  
  printf("\t\t  0   1   2   3   4   5   6\n");
  printf("\t\t|---|---|---|---|---|---|---|\n");
  
  for(i=0; i<ROW; i++) {
    printf("\t\t");
    printf("|");
    for(j=0; j<COL; j++) {
      
      printf(" %c |",grille[i][j]); 
    }
    printf("\n");
    
  }
  
  printf("\t\t|---|---|---|---|---|---|---|\n");
  printf("\t\t  0   1   2   3   4   5   6\n");
}
