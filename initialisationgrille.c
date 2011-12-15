#include<stdio.h>
#include<stdlib.h>


#define ROW 6
#define COL 7


/* Initialisation du tableau toutes les cases prennent la valeur 0*/
void initialisationGrille () {

  char** grille=NULL;
  int i,j;
 grille=malloc(ROW * sizeof(int));
  for (i=0; i<COL; i++) {
   grille[i]=malloc(COL * sizeof(int));
  }

    for(i=0;i<ROW;i++)
        {
	  for(j=0;j<ROW;j++)
          {
            grille[i][j]=' ';
          }
        }

}
