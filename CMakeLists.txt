#Déclaration du projet
project(Puissance4)

#Déclaration de l'éxécutable
add_executable(
  puissance4
  src/puissance4.c
  src/menu.c
  src/initialisationgrille.c
  src/afficheGrille.c
  src/choix_j.c
  src/choix_j2.c
  src/verif.c
  include/puissance4.h
  include/verif.h
)