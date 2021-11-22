/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : Labo_crible_GroupeO
  Auteur(s)   : Emilie Bressoud & Bastien Pillonel
  Date        : 19.11.2021
  But         : Ce programme demande à l'utilisateur de saisir un nombre de
                valeur puis il affiche une matrice du nombre de valeur avant
                le crible et une nouvelle après crible. Enfin, il affiche le
                nombre total de nombres premiers ainsi que la liste de ces
                derniers.

  Remarque(s) : Ce programme est subdivisé en plusieurs fichiers:
                - 1 librairie mettant à dispo les ss-prgm utile à la gestion
                    de tableau 1 dimension
                - 1 librairie mettant à dispo les ss-prgm utile à la saisie
                    utilisateur
                - 1 librairie annexe avec les ss-prgm à utilisation diverse
                - 1 fichier mettant à dispo les ss-prgm utile à la démo du
                    crible

  Compilateur : MingW-w64 g++ 11.2.0 et Apple Clang 13.0.0
  ---------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include "annexe.h"
#include "crible.h"
#include "saisie.h"

using namespace std;

int main() {

   //-----------------------------------------------------------------------
   // Déclaration des variables et constantes
   //-----------------------------------------------------------------------
   const string   MSG_BIENVENUE     =  "Demo du crible d'Eratosthene",
                  MSG_SAISIE        =  "nbre de valeurs",
                  MSG_ERREUR_SAISIE =  "Erreur dans la saisie veuillez recommencez",
                  MSG_INIT          =  "initialisation du tableau",
                  MSG_CRIBLAGE      =  "criblage du tableau",
                  MSG_FIN           =  "Presser ENTER pour quitter";

   const unsigned MIN_VALEUR  =  2,
                  MAX_VALEUR  =  100;

   //-----------------------------------------------------------------------
   // Msg de bienvenue
   //-----------------------------------------------------------------------
   cout  << MSG_BIENVENUE  << endl;

   //-----------------------------------------------------------------------
   // Saisie du nombre de valeur
   //-----------------------------------------------------------------------
   unsigned tableauCrible[MAX_VALEUR]  =  {},
            tailleTableauCrible;

   tailleTableauCrible  = saisie(MIN_VALEUR, MAX_VALEUR, MSG_SAISIE, MSG_ERREUR_SAISIE);

   //-----------------------------------------------------------------------
   // Affichage avant le crible
   //-----------------------------------------------------------------------
   afficheCrible(MSG_INIT, tableauCrible, tailleTableauCrible, true);

   //-----------------------------------------------------------------------
   // Criblage tableau
   //-----------------------------------------------------------------------
   criblerTableau(tableauCrible, tailleTableauCrible);

   //-----------------------------------------------------------------------
   // Affichage après le crible
   //-----------------------------------------------------------------------
   afficheCrible(MSG_CRIBLAGE, tableauCrible, tailleTableauCrible, false);

   //-----------------------------------------------------------------------
   // Affichage des nombres premiers
   //-----------------------------------------------------------------------
   afficheNombrePremier(tableauCrible, tailleTableauCrible);

   //-----------------------------------------------------------------------
   // Fin du programme
   //-----------------------------------------------------------------------
   finProgramme(MSG_FIN);

   return EXIT_SUCCESS;
}
