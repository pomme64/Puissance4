#ifndef PUISSANCE_4_H_INCLUDED
#define PUISSANCE_4_H_INCLUDED

#include "menu.c"
#include "afficheGrille.c"
#include "choix_j.c"
#include "initialisationgrille.c"
#include "choix_j2.c"

void menu ();
void afficheGrille (char** grille);
int choix_j1 (char j[15], char** grille,int hc0,int hc1,int hc2, int hc3, int hc4, int hc5, int hc6);
void initialisationGrille(char** grille);
int choix_j2 (char j[15],char** grille,int hc0,int hc1,int hc2, int hc3, int hc4, int hc5, int hc6);




#endif // MAIN_H_INCLUDED
