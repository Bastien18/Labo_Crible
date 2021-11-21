/*
  ---------------------------------------------------------------------------
  Fichier     : crible.cpp
  Nom du labo : Labo_crible_GroupeO
  Auteur(s)   : Emilie Bressoud & Bastien Pillonel
  Date        : 19.11.2021
  But         : Fichier de définitions des sous-programme utilisés pour la
                demonstration du crible d'Eratosthène

  Remarque(s) : -

  Compilateur : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include "crible.h"
#include "tableauC.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Déclaration des variables et constantes
const char           CROIX    =  'X',
                     CERCLE   =  'O';

const unsigned       ESPACEMENT_CRIBLE_AFFICHAGE         =  2,
                     ESPACEMENT_NOMBRE_PREMIER_AFFICHAGE =  4;

const string         MSG_AFFICHAGE_NBR_PREMIER_1   =  "Il y a ",
                     MSG_AFFICHAGE_NBR_PREMIER_2   =  " nombres premier";

// Rempli un tableau avec la liste des entier naturel de 1 à n entier (taille)
void listeEntierNaturel(unsigned tab[], unsigned taille){
   for(unsigned i = taille; i > 0; --i){
      remplirTableau(tab, i, taille);
      --taille;
   }
}

// Crible le tableau d'entier naturel selon la méthode d'Eratosthène
void criblerTableau(unsigned tab[], unsigned taille){
   unsigned pos   =  0,
            multiple,
            positionMultiple;

   listeEntierNaturel(tab, taille);

   tab[pos] =  0; // Cas spécial pour le chiffre 1 mis à zéro d'office
   ++pos;

   // Pour toutes les positions du tableau dont l'élément est différent de 0
   for(; (tab[pos] * tab[pos]) <= taille; ++pos){
      if(tab[pos] != 0){
         multiple =  tab[pos];

         // On cherche tout ces multiples sauf lui même
         for(unsigned i = 2; (i * multiple) <= taille; ++i){
            positionMultiple  = recherche(tab, taille, (i * multiple), pos);

            if(positionMultiple != taille)
               tab[positionMultiple]   =  0;    // Mise à 0 des multiples si ça
                                                // n'a pas déjà été fait
         }
      }
   }
}

// Affichage du crible
void afficheCrible(const string& MSG_AFFICHAGE, const unsigned tab[],
                   unsigned taille, bool isInit, unsigned colonne){

   cout  << MSG_AFFICHAGE;

   for(unsigned i = 0; i < taille; ++i){
      if(!(i % colonne))
         cout  << endl;

      cout  << setw(ESPACEMENT_CRIBLE_AFFICHAGE)
            // Lorsque c'est l'affichage de l'init on rempli la matrice de cercle
            // Lorsque ce n'est pas l'init les éléments à 0 dans le tableau sont
            // non premier donc représenter avec une croix et les nbre premiers
            // avec un cercle
            << (!tab[i] && !isInit ? CROIX : CERCLE);
   }
   cout  << endl  << endl;
}

// Calcul combien de nombre premier dans un tableau criblé
unsigned combienNombrePremier(const unsigned tab[], unsigned taille){
   unsigned compteur = 0;

   for(unsigned i = 0; i < taille; ++i){
      if(tab[i])
         ++compteur;
   }
   return compteur;
}

// Affiche les nombres premier d'un tableau criblé
void afficheNombrePremier(const unsigned tab[], unsigned taille){
   cout  << MSG_AFFICHAGE_NBR_PREMIER_1
         << combienNombrePremier(tab,taille)
         << MSG_AFFICHAGE_NBR_PREMIER_2   << endl;

   for(unsigned i = 0; i < taille; ++i){
      if(tab[i])
         cout  << setw(ESPACEMENT_NOMBRE_PREMIER_AFFICHAGE) << tab[i];
   }
   cout  << endl  << endl;
}

