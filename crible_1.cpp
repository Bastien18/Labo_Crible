#include <iostream>
#include "affichage.h"

void chercherRemplacer(unsigned tab[], unsigned capacite, unsigned diviseur) {
   for( unsigned pos = 2; pos < capacite; ++pos) {
      bool pasnombrePremier = pos % diviseur == 0 && pos != diviseur;
      if (pasnombrePremier) {
         tab[pos] = 1;
      }
   }
}

void estNombrePremier(unsigned tab[], unsigned capacite){
   //exception
   tab[1] = 0;
   for (unsigned diviseur = 2; diviseur < capacite; ++diviseur) {
      chercherRemplacer(tab, capacite, diviseur);
   }
}

void remplirTableau(unsigned tab[], unsigned capacite) {

   for(unsigned pos = 0; pos < capacite; ++pos) {
      tab[pos] = pos;
   }
   estNombrePremier(tab, capacite);


}
