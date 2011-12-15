#include<stdio.h>
#include<stdlib.h>

#define COL 7
#define ROW 6

void afficheGrille () {
  
  int i,j;
  char** grille=NULL;
 grille=malloc(ROW * sizeof(int));
  for (i=0; i<COL; i++) {
   grille[i]=malloc(COL * sizeof(int));
  }

  
  printf("\t\t  0   1   2   3   4   5   6\n");
  printf("\t\t|---|---|---|---|---|---|---|\n");
  
  for(i=0; i<ROW; i++) {
    printf("\t\t");
    for(j=0; j<COL; j++) {
      
      printf("|  %c ",grille[i][j]);
    }
    printf("|");
    printf("\n");
 }

  printf("\t\t|---|---|---|---|---|---|---|\n");
  printf("\t\t  0   1   2   3   4   5   6\n");

}
