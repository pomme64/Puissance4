#include<stdio.h>
#include<stdlib.h>

/**
 * The function check verifies the alignements of the pawns and return the result.

 * \brief : Determinesif the player wons.
 * @method grille: It's the table of game.
 * @method j : It represents the lines of the table.
 * @method k : It represents the columns of the table.
 * @param i : It represents the columns of the table.
 * @param pleine : It represents if the columns of line 6 is full.
 * @return 1 : Player one won.
 * @return 2 : Player two won.
 * @return 6 : Nobody won.
 */




int check(char** grille, int j, int k)
{

  int i;
  int pleine=0;
  
  if (j<=2 && j>=0) {
    if((grille[j][k]=='X') && (grille[j+1][k]=='X') && (grille[j+2][k]=='X') && (grille[j+3][k]=='X')) {
      return 1;
    }
    else {
      if ((grille[j][k]=='O') && (grille[j+1][k]=='O') && (grille[j+2][k]=='O') && (grille[j+3][k]=='O')) {
    	return 2;
      }
    }
  }

  if (k>=3 && k<=6) {
    if((grille[j][k]=='X') && (grille[j][k-1]=='X') && (grille[j][k-2]=='X') && (grille[j][k-3]=='X')) {
      return 1;
    }
    else {
      if ((grille[j][k]=='O') && (grille[j][k-1]=='O') && (grille[j][k-2]=='O') && (grille[j][k-3]=='O')){
	return 2;
      }
    }
  }
  if (k<=3 && k>=0) {
    if((grille[j][k]=='X') && (grille[j][k+1]=='X') && (grille[j][k+2]=='X') && (grille[j][k+3]=='X')) {
      return 1;
    }
    else {
      if((grille[j][k]=='O') && (grille[j][k+1]=='O') && (grille[j][k+2]=='O') && (grille[j][k+3]=='O')) {
	return 2;
      }
    }
  }
  if ((k>=1) && (k<=4)) {
    if((grille[j][k]=='X') && (grille[j][k+1]=='X') && (grille[j][k+2]=='X') && (grille[j][k-1]=='X')) {
      return 1;
    }
    else {
      if((grille[j][k]=='O') && (grille[j][k+1]=='O') && (grille[j][k+2]=='O') && (grille[j][k-1]=='O')) {
	return 2;
      }
    }
  }
  if((k>=2) && (k<=5)) {
    if((grille[j][k]=='X') && (grille[j][k+1]=='X') && (grille[j][k-2]=='X') && (grille[j][k-1]=='X')) {
      return 1;
    }
    else {
      if((grille[j][k]=='O') && (grille[j][k+1]=='O') && (grille[j][k-2]=='O') && (grille[j][k-1]=='O')) {
	return 2;
      }
    }
  }
  

  if((j>=3) && (k<=3)) {
    if((grille[j][k]=='X') && (grille[j-1][k+1]=='X') && (grille[j-2][k+2]=='X') && (grille[j-3][k+3]=='X')) { 
      return 1;
    }
    else {
      if ((grille[j][k]=='O') && (grille[j-1][k+1]=='O') && (grille[j-2][k+2]=='O') && (grille[j-3][k+3]=='O')) {
	return 2;
      }
    }
  }	  
  
  if((j>=3) && (k>=3)) {		    
    if((grille[j][k]=='X') && (grille[j-1][k-1]=='X') && (grille[j-2][k-2]=='X') && (grille[j-3][k-3]=='X')) {
      return 1;
    }
    else{
      if ((grille[j][k]=='O') && (grille[j-1][k-1]=='O') && (grille[j-2][k-2]=='O') && (grille[j-3][k-3]=='O')){
	return 2;
      }
    }
  }
  
  if((j>=2) && (j<=4) && (k>=1) && (k<=4)) {		    
    if((grille[j][k]=='X') && (grille[j-1][k+1]=='X') && (grille[j-2][k+2]=='X') && (grille[j+1][k-1]=='X')) {
      return 1;
    }
    else{
      if ((grille[j][k]=='O') && (grille[j-1][k+1]=='O') && (grille[j-2][k+2]=='O') && (grille[j+1][k-1]=='O')){
	return 2;
      }
    }
  }
  
  if((j>0) && (j<=3) && (k>1) && (k<=5)) {		    
    if((grille[j][k]=='X') && (grille[j-1][k+1]=='X') && (grille[j+1][k-1]=='X') && (grille[j+2][k-2]=='X')) {
      return 1;
    }
    else{
      if ((grille[j][k]=='O') && (grille[j-1][k+1]=='O') && (grille[j+1][k-1]=='O') && (grille[j+2][k-2]=='O')){
	return 2;
      }
    }
  }
  
  if((j>=0) && (j<=2) && (k>=3) && (k<=6)) {		    
    if((grille[j][k]=='X') && (grille[j+1][k-1]=='X') && (grille[j+2][k-2]=='X') && (grille[j+3][k-3]=='X')) {
      return 1;
    }
    else{
      if ((grille[j][k]=='O') && (grille[j+1][k-1]=='O') && (grille[j+2][k-2]=='O') && (grille[j+3][k-3]=='O')){
	return 2;
      }
    }
  }
  
  if((j>=0) && (j<=2) && (k>=3) && (k<=6)) {		    
    if((grille[j][k]=='X') && (grille[j+1][k+1]=='X') && (grille[j+2][k+2]=='X') && (grille[j+3][k+3]=='X')) {
      return 1;
    }
    else{
      if ((grille[j][k]=='O') && (grille[j+1][k+1]=='O') && (grille[j+2][k+2]=='O') && (grille[j+3][k+3]=='O')){
	return 2;
      }
    }
  }
  
  if((j>1) && (j<=4) && (k>1) && (k<=5)) {
    if((grille[j][k]=='X') && (grille[j+1][k+1]=='X') && (grille[j-2][k-2]=='X') && (grille[j-1][k-1]=='X')) {
      return 1;
    }
    else{
      if ((grille[j][k]=='O') && (grille[j+1][k+1]=='O') && (grille[j-2][k-2]=='O') && (grille[j-1][k-1]=='O')){
	return 2;
      }
    }
  }
  
  if((j>0) && (j<=3) && (k>0) && (k<=4)) {		    
    if((grille[j][k]=='X') && (grille[j+1][k+1]=='X') && (grille[j+2][k+2]=='X') && (grille[j-1][k-1]=='X')) {
      return 1;
    }
    else{
      if ((grille[j][k]=='O') && (grille[j+1][k+1]=='O') && (grille[j+2][k+2]=='O') && (grille[j-1][k-1]=='O')){
	return 2;
      }
    }
  }
  
  for (i=0;i<7;i++){
    if ((grille[0][i]=='X') || (grille[0][i]=='O')) {
      pleine=pleine+1;
    }
  }
  if (pleine == 7) {
    return 6;
  }

  return 0;
}
