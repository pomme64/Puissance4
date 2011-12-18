#include<stdio.h>
#include<stdlib.h>

#define ROW 6
#define COL 7

int choix_j2 (char j[15], char** grille,int hc0,int hc1,int hc2, int hc3, int hc4, int hc5, int hc6) {
  
  int choix_col;
  int i;

  
  printf("A %s de jouer ! Dans quelle colonne voulez-vous jouer ?\n",j);
  scanf("%d",&choix_col);
  if (choix_col<0 || choix_col>7) {
    do {
      printf("Vous devez rentrer un chiffre entre 0 et 6 pour choisir une colonne valide. Veuillez recommencer : ");
      scanf("%d", &choix_col);
    }while(choix_col<0 || choix_col>7);
  }
  switch (choix_col) {
  case 0:
    grille[hc0][choix_col]='O';
    break;
  case 1:
    grille[hc1][choix_col]='O';
    break;
  case 2:
    grille[hc2][choix_col]='O';
    break;
  case 3:
    grille[hc3][choix_col]='O';
    break;
  case 4:
    grille[hc4][choix_col]='O';
    break;
   case 5:
    grille[hc5][choix_col]='O';
    break;
  case 6:
    grille[hc6][choix_col]='O';
    break;
 }
  return(choix_col);
}
