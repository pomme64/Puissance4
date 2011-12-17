#include<stdio.h>
#include<stdlib.h>

#include"puissance4.h"

#define COL 7
#define ROW 6

int main () {
  
  char j1[15];
  char j2[15];
  int i,j;
  char** grille=NULL;
  grille=malloc(ROW * sizeof(int));
  for (i=0; i<COL; i++) {
   grille[i]=malloc(COL * sizeof(int));
  }


  menu();
  
  printf("Choisissez le nom du joueur 1 : ");
  scanf("%s",j1);
  printf("Choisissez le nom du joueur 2 : ");
  scanf("%s",j2);
  
  printf("Que la partie commence ! Que le meilleur gagne !\n\n\n");

  initialisationGrille();

  afficheGrille();
  
  choix_j(j1);

  afficheGrille();

  free(grille);
    return 0;
}
