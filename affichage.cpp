// Fichier     nom du fichier (.h / .cpp)
// Auteur
// Date        ...
//
// But         description détaillée du projet
//
// Remarque
//
// Modifs      Date / Auteur / Raison
//
// Compilateur
#include <iostream>
#include <iomanip> //utilisé pour setw()
#include <string>
using namespace std;

//variables

const int      PRECISION = 3;// utilise pour setw()
const char     X = 'X';//pour afficher X

void debutDeProgramme(){
const string   MESSAGE_DE_BIENVENU = "Ce programme ... ";
   cout << MESSAGE_DE_BIENVENU << endl;
}
//**********************************************************************************************************

void x_ou_0(unsigned int pos, unsigned tab[], unsigned capacite){
   unsigned valeur = tab[pos];

   if(valeur == 1){
      cout << X;
   }else{
      cout << 0;
   }

}

//**********************************************************************************************************

void affichage(const unsigned nbre_colonne, unsigned tab[], unsigned capacite, const string& message){
   unsigned pos, colonne = 1;
   cout << message << endl;

   for (pos = 0; pos < capacite; ++colonne) {
      cout << setw(PRECISION) << left;// alignement à gauche pour toute les valeurs
      x_ou_0(pos, tab, capacite);
      if(colonne == nbre_colonne){
         cout << endl;
         colonne = 0;
      }
      ++pos;
   }
   cout << endl;
}



void affichage2(const unsigned nbre_colonne, unsigned tab[], unsigned capacite){
   unsigned pos, colonne = 1;
   cout << "il y a " << endl;

   for (pos = 0; pos < capacite; ++pos) {
      cout << setw(PRECISION) << right;// alignement à gauche pour toute les valeurs
      if(tab[pos] != 0){// a corriger
         cout << pos;
      }
      if(colonne == nbre_colonne){
         cout << endl;
         colonne = 0;
      }
      ++colonne;
   }
   cout << endl;
}


