
// tableau de 1 à 100, O représente les nbres 1er
#include <iostream>
#include "crible_eratosthene.h"
#include "complement.h"

using namespace std;
//
//const bool O = true;
//const bool X = false;
//const bool CRIBLE_INITIAL[] = {X, O, O, X, O, X, O, X, X, X,
//                               O, X, O, X, X, X, O, X, O, X,
//                               X, X, O, X, X, X, X, X, O, X,
//                               O, X, X, X, X, X, O, X, X, X,
//                               O, X, O, X, X, X, O, X, X, X,
//                               X, X, O, X, X, X, X, X, O, X,
//                               O, X, X, X, X, X, O, X, X, X,
//                               O, X, O, X, X, X, X, X, O, X,
//                               X, X, O, X, X, X, X, X, O, X,
//                               X, X, X, X, X, X, O, X, X, X};
//const size_t TAILLE_INITIAL = sizeof(CRIBLE_INITIAL) / sizeof(bool);
//
//
// tableau de nbre 1er

size_t nbre1er(const bool tab[], const size_t tailleInitial, unsigned tab1er[], const size_t capacite) {
   unsigned posNbr1er = 0;

   //parcourt le tableau de booléens et remplit le tableau des nombres premiers
   for (unsigned pos = 0; pos < tailleInitial; ++pos) {
      if (tab[pos]) {
         tab1er[posNbr1er] = pos + 1;
         ++posNbr1er;
         if (posNbr1er == capacite) {
            return posNbr1er;
         }
      }
   }
   return posNbr1er;
}


//affiche la liste des nombres premiers
void put(int tab[], size_t taille){
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

