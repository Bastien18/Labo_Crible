/*
  ---------------------------------------------------------------------------
  Fichier     : tableauC.cpp
  Nom du labo : Labo_crible_GroupeO
  Auteur(s)   : Emilie Bressoud & Bastien Pillonel
  Date        : 19.11.2021
  But         : Fichier de définition des sous-programmes utilisés pour la
                gestion de tableau 1 dimension

  Remarque(s) : -

  Compilateur : MingW-w64 g++ 11.2.0 et Apple Clang 13.0.0
  ---------------------------------------------------------------------------
*/

#include "tableauC.h"

using namespace std;

// Rempli un tableau avec une valeur passée en paramètre
void remplirTableau(unsigned tab[], unsigned taille, unsigned valeur){
   for(unsigned i = 0; i < taille; ++i){
      tab[i] = valeur;
   }
}

// Cherche la première occurence d'une valeur dans un tableau
unsigned recherche(const unsigned tab[], unsigned taille, unsigned val,
                   unsigned pos){
   for(; pos < taille; ++pos){
      if(tab[pos] == val){
         return pos;
      }
   }
   return taille;
}