#include<stdio.h>
#include<stdlib.h>

#include"puissance4.h"

#define COL 7
#define ROW 6
#define N 20

int main () {
  
  char* j1=NULL;
  char* j2=NULL;
  int i;
  char** grille=NULL;
  int gagne=-1;
  j1=malloc(N * sizeof(int));
  j2=malloc(N * sizeof(int));
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
  
  initialisationGrille(grille);
  afficheGrille(grille);
  while ((gagne !=1) || (gagne != 2)) {
    gagne=choix_j1(j1,grille);
    afficheGrille(grille);
    if (gagne == 1) {
      break;
    }
 
    gagne=choix_j2(j2,grille);
    afficheGrille(grille);
    if (gagne == 2) {
      break;
    }
    if (gagne == 6) {
      break;
    }
  }
  switch(gagne) {
  case 6:
    printf("La grille est pleine!! Match nul!!\n");
    break;
  case 1:
    printf("Félicitation !! %s a gagné !!\n",j1);
    break;
  case 2:
    printf("Félicitation !! %s a gagné !!\n",j2);
    break;
  default :
    break;
  } 
  free(grille);
  return 0;
}
