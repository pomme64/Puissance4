#include<stdio.h>
#include<stdlib.h>

void choix_j (char j[15]) {
  
  int choix_col;
  int i;
  char** grille=NULL;
  grille=malloc(ROW * sizeof(int));
  for (i=0; i<COL; i++) {
    grille[i]=malloc(COL * sizeof(int));
  }

  printf("A %s de jouer ! Dans quelle colonne voulez-vous jouer ?\n",j);
  scanf("%d",&choix_col);
  if (choix_col<0 || choix_col>7) {
    do {
      printf("Vous devez rentrer un chiffre entre 0 et 6 pour choisir une colonne valide. Veuillez recommencer : ");
      scanf("%d", &choix_col);
    }while(choix_col<0 || choix_col>7);
  }
  grille[0][choix_col]='X';





}
