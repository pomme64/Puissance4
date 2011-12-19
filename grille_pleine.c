#include<stdio.h>
#include<stdlib.h>


void grille_pleine (char** grille) {
  int i;
  int pleine=0;
 
  for (i=0;i<7;i++){
    if ((grille[0][i]=='X') || (grille[0][i]=='O')) {
      pleine=pleine+1;
    }
  }
  if (pleine == 7) {
    printf("La grille est pleine, match nul !!");
  }  

}
