#include <iostream>
#include <string>
#include "saisie.h"
#include "affichage.h"
#include "crible_1.h"

int main() {

   const std::string   MSG_ERREUR = "Veuillez entrer une valeur entre ";
   const std::string   MSG_VALEUR_ENTREE = "nbre de valeurs [1...100] : ";

   const std::string   MSG_INITIALISATION = "initialisation du tableau";
   const std::string   MSG_CRIBLAGE = "criblage du tableau";
   const std::string   MSG_FIN = "Presser ENTER pour quitter";

   const unsigned       COLONNE = 10u;
   const unsigned       MIN = 1u;
   const unsigned       MAX = 100u;

   unsigned int         valeurSaisie;


   debutDeProgramme();

   unsigned capacite = saisie(MIN, MAX, MSG_VALEUR_ENTREE, MSG_ERREUR);
   unsigned tab[MAX] = {};

   //affichage du premier tableau
   affichage(COLONNE, tab, capacite, MSG_INITIALISATION);

   remplirTableau(tab, capacite);

   //affichage du second tableau
   affichage(COLONNE, tab, capacite, MSG_CRIBLAGE);

   //affichage nombres premiers

   affichage2(COLONNE, tab, capacite);

   //fin de programme
   std::cout << MSG_FIN << std::endl;
   viderBuffer();
   return EXIT_SUCCESS;
}
