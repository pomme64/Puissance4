#include<stdio.h>
#include<stdlib.h>


#define ROW 6
#define COL 7


/* Initialisation du tableau toutes les cases prennent la valeur 0*/
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
