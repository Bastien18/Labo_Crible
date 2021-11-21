/*
  ---------------------------------------------------------------------------
  Fichier     : annexe.cpp
  Nom du labo : Labo_crible_GroupeO
  Auteur(s)   : Emilie Bressoud & Bastien Pillonel
  Date        : 19.11.2021
  But         : Fichier de définition des sous-programme annexes

  Remarque(s) : -

  Compilateur : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include "annexe.h"
#include <iostream>
#include <limits>

using namespace std;

// Vidage buffer
void viderBuffer(){
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Fin de programme
void finProgramme(const string& MSG_FIN){
   cout  << MSG_FIN;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   exit(EXIT_SUCCESS);
}