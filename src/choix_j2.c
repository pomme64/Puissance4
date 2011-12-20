#include<stdio.h>
#include<stdlib.h>

/**
 * This function ask the user to enter a number of column in oder to place the pion.
 * It call to an other function who determine if the player won.
 * It return a resultat.

 *\brief :It's the function of the user's choise column.
 *@method grille : It's the table of the game.
 *@method j : It's the player concerned.
 *@param choix_col : It's the user's choise of the column.
 *@param gagne : It's the variable who calls the other function.
 *@param i : It's the line of the table.
 *@return gagne
 */

int choix_j2 (char j[15], char** grille) {
  
  int choix_col;
  int i=5;
  int gagne=-1;  

  printf("A %s de jouer ! Dans quelle colonne voulez-vous jouer ?\n",j);
  scanf("%d",&choix_col);
  if (choix_col<0 || choix_col>7) {
    do {
      printf("Vous devez rentrer un chiffre entre 0 et 6 pour choisir une colonne valide. Veuillez recommencer : ");
      scanf("%d", &choix_col);
    }while(choix_col<0 || choix_col>7);
  }
  if ((grille[0][choix_col]=='X') || (grille[0][choix_col]=='O')) {
    do {
      printf("La colonne est pleine!\n\n");
      printf("Choisissez une autre colonne!  ");
      scanf("%d", &choix_col);
    }while((grille[0][choix_col]=='X') || (grille[0][choix_col]=='O'));
  }
  
  if(grille[i][choix_col]==' ') {
      grille[i][choix_col]='O';
      gagne=check(grille,i,choix_col);
  }
  else {
    if(grille[i-1][choix_col]==' ') {
      grille[i-1][choix_col]='O';
	 gagne=check(grille,i-1,choix_col);
    }
    else {
      if (grille[i-2][choix_col]==' ')   {
	grille[i-2][choix_col]='O';
	  gagne=check(grille,i-3,choix_col);
      }
      else {
	if (grille[i-3][choix_col]==' ') {
	  grille[i-3][choix_col]='O';
	    gagne=check(grille,i-3,choix_col);
	}
	else {
	  if (grille[i-4][choix_col]==' ') {
	    grille[i-4][choix_col]='O';
	    gagne=check(grille,i-4,choix_col);
	  }
	  else {
	    if (grille[i-5][choix_col]==' ') {
		grille[i-5][choix_col]='O';
		gagne=check(grille,i-5,choix_col);
	    }
	  }
	}
      }
    }
  }
  return(gagne);
}
