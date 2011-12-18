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
  int hc0,hc1,hc2,hc3,hc4,hc5,hc6;
  int choix_col,choix_col2;
  int gagne=0;
  hc0=hc1=hc2=hc3=hc4=hc5=hc6=5;  
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
  do {
  choix_col=choix_j1(j1,grille,hc0,hc1,hc2,hc3,hc4,hc5,hc6);
  afficheGrille(grille);
  switch(choix_col) {
  case 0:
    hc0=hc0-1;
    break;
  case 1:
    hc1=hc1-1;
    break;
  case 2:
    hc2=hc2-1;
    break;
  case 3:
    hc3=hc3-1;
    break;
  case 4:
    hc4=hc4-1;
    break;
  case 5:
    hc5=hc5-1;
    break;
  case 6:
    hc6=hc6-1;
    break;
  default :
    break;
  }
  choix_col2=choix_j2(j2,grille,hc0,hc1,hc2,hc3,hc4,hc5,hc6);
  afficheGrille(grille);
  switch(choix_col) {
  case 0:
    hc0=hc0-1;
    break;
  case 1:
    hc1=hc1-1;
    break;
  case 2:
    hc2=hc2-1;
    break;
  case 3:
    hc3=hc3-1;
    break;
  case 4:
    hc4=hc4-1;
    break;
  case 5:
    hc5=hc5-1;
    break;
  case 6:
    hc6=hc6-1;
    break;
  default :
    break;
  }
  }while ((gagne !=1) || (gagne != 2));
  free(grille);
    return 0;
}
