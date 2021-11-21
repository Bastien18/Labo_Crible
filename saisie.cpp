/*
  ---------------------------------------------------------------------------
  Fichier     : saisie.cpp
  Nom du labo : Labo_crible_GroupeO
  Auteur(s)   : Emilie Bressoud & Bastien Pillonel
  Date        : 19.11.2021
  But         : Fichier de définitions des sous-programme utilisés pour la
                saisie utilisateur

  Remarque(s) : -

  Compilateur : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include "saisie.h"
#include "annexe.h"
#include <iostream>

using namespace std;

unsigned saisie(unsigned min, unsigned max, const string& MSG_SAISIE,
                const string& MSG_ERREUR) {
   bool erreur;
   unsigned saisieUtilisateur;

   do {
      cout  << MSG_SAISIE   << " [" << min << ".." << max << "] : ";
      cin   >> saisieUtilisateur;

      erreur = cin.fail() || saisieUtilisateur < min || saisieUtilisateur > max;

      if(erreur) {
         cout << MSG_ERREUR << endl;
         cin.clear();
      }
      viderBuffer();
   } while(erreur);
   cout << endl;
   return saisieUtilisateur;
 }