#include<stdio.h>
#include<stdlib.h>



int check(char** grille, int j, int k)
{
  /*Verification d'un alignement vertical*/
  
  if((grille[j][k]=='X') && (grille[j][k-1]=='X') && (grille[j][k-2]=='X') && (grille[j][k-3]=='X')) {
    return 1;
  }
  else {
      if ((grille[j][k]=='O') && (grille[j][k-1]=='O') && (grille[j][k-2]=='O') && (grille[j][k-3]=='O')) {
	return 2;
      }
      else { 
  /*Verification d'un alignement horizontal*/
  
	if((grille[j][k]=='X') && (grille[j+1][k]=='X') && (grille[j+2][k]=='X') && (grille[j+3][k]=='X')) {
	  return 1;
	}
	else {
	  if ((grille[j][k]=='O') && (grille[j+1][k]=='O') && (grille[j+2][k]=='O') && (grille[j+3][k]=='O')){
	    return 2;
      }
	  else {
	    
	    if((grille[j][k]=='X') && (grille[j-1][k]=='X') && (grille[j-2][k]=='X') && (grille[j-3][k]=='X')) {
	      return 1;
	    }
	    else {
	      if ((grille[j][k]=='O') && (grille[j-1][k]=='O') && (grille[j-2][k]=='O') && (grille[j-3][k]=='O')){
		return 2;
	      }
	      else {    
    
		/*Verification d'un alignement diagonal de haut en bas*/
		
		if((grille[j][k]=='X') && (grille[j+1][k+1]=='X') && (grille[j+2][k+2]=='X') && (grille[j+3][k+3]=='X')) {
		  return 1;
		}
		else {
		  if ((grille[j][k]=='O') && (grille[j+1][k+1]=='O') && (grille[j+2][k+2]=='O') && (grille[j+3][k+3]=='O')) {
		    return 2;
		  }
		  else {
    
    
		    /*Verification d'un alignement diagonal de bas en haut*/
		    
		    if((grille[j][k]=='X') && (grille[j+1][k-1]=='X') && (grille[j+2][k-2]=='X') && (grille[j+3][k-3]=='X')) {
		      return 1;
		    }
		    else{
		      if ((grille[j][k]=='O') && (grille[j+1][k-1]=='O') && (grille[j+2][k-2]=='O') && (grille[j+3][k-3]=='O')){
			return 2;
		      }
		      else { 
			return -1;
		      }
		    }
		  }
		}
	      }
	    }
	  }
	}
      }
  }
}
