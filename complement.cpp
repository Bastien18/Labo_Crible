/*
-----------------------------------------------------------------------------------
Nom du fichier : complement.cpp
Nom du labo    : labo_06_n
Auteur(s)      : Emilie Bressoud
Date           : 21.11.2021
But            : remplissage d'un tableau contenant seulement les nombres
                  premiers et l'affichage de la liste de ces derniers.

Remarque(s)    :


Compilateurs   :  - MingW-w64 g++ 11.2.0
                  - Apple clang 13.0.0
-----------------------------------------------------------------------------------
*/

#include <iostream>
#include "complement.h"

using namespace std;

void nbre1er(const bool tab[], size_t tailleInitial, unsigned tab1er[],
             size_t tailleNbre1er) {
   size_t posNbr1er = 0;

   //parcourt le tableau de booléens et remplit le tableau des nombres
   // premiers si dans le tableau des booléens la valeur est egale a true
   for (unsigned pos = 0; pos != tailleInitial; ++pos) {
      unsigned nombrePremier = pos + 1;//les nombres sont decale de 1 par
                                       // rapport a la position dans le tableau
      if (tab[pos]){
         tab1er[posNbr1er] = nombrePremier;
         ++posNbr1er;
      }
      if (posNbr1er == tailleNbre1er) {
         break;
      }
   }
}


//affiche la liste des nombres premiers
void put(unsigned tab[], size_t taille){
   cout << "complement ..." << endl;
   cout << "[";
   for(unsigned pos = 0; pos < taille; ++pos){
      cout << tab[pos];
      if(pos != taille - 1){
         cout <<", ";
      }
   }
   cout << "]" << endl;
}

