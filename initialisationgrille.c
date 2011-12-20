#include<stdio.h>
#include<stdlib.h>


#define ROW 6
#define COL 7

/**
 *It's the function who initialize the cellule of table to a space.
 
 * \brief : Initialisation of table
 * @method grille: It's the table of game.
 * @param i : It represent the line of the table.
 * @param j : It represent the column of the table.
 */

void initialisationGrille (char** grille) {

  int i,j;


    for(i=0;i<=ROW;i++)
        {
	  for(j=0;j<=ROW;j++)
          {
            grille[i][j]=' ';
          }
        }
}
