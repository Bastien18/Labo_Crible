/*
  ---------------------------------------------------------------------------
  Fichier     : crible.h
  Nom du labo : Labo_crible_GroupeO
  Auteur(s)   : Emilie Bressoud & Bastien Pillonel
  Date        : 19.11.2021
  But         : Fichier de déclaration des sous-programme utilisés pour la
                demonstration du crible d'Eratosthène

  Remarque(s) : -

  Compilateur : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#ifndef MAIN_CPP_CRIBLE_H
#define MAIN_CPP_CRIBLE_H

#include <string>

//-------------------------------------------------------------------
// listeEntierNaturel
//-------------------------------------------------------------------
// Description: Rempli un tableau de la liste des entiers naturel dans
// l'ordre croissant entre l'entier 1 et n entier (taille du tableau)
//
// Paramètres:
// Nom: tab[]    Description: Tableau a remplir d'entier naturel
// Nom: taille   Description: Taille du tableau
//
// Retourne: -
//-------------------------------------------------------------------
void listeEntierNaturel(unsigned tab[], unsigned taille);

//-------------------------------------------------------------------
// criblerTableau
//-------------------------------------------------------------------
// Description: Crible un tableau selon la méthode d'Eratosthène.
//
// Paramètres:
// Nom: tab    Description: Tableau à cribler
// Nom: taille Description: Taille du tableau à cribler
//
// Retourne: -
//-------------------------------------------------------------------
void criblerTableau(unsigned tab[], unsigned taille);

//-------------------------------------------------------------------
//
//-------------------------------------------------------------------
// Description:   Affiche le tableau sous forme de matrice pour
// l'affichage du crible
//
// Paramètres:
// Nom: MSG_AFFICHAGE   Description: Msg à l'utilisateur
// Nom: tab             Description: Tableau à afficher
// Nom: taille          Description: Taille du tableau
// Nom: isInit          Description: Indique si c'est l'affichage à l'init
//                                   après le crible
// Nom: colonne         Description: Nbr de colonne fixe de la matrice
//
// Retourne: -
//-------------------------------------------------------------------
void afficheCrible(const std::string& MSG_AFFICHAGE, const unsigned tab[],
                   unsigned taille, bool isInit, unsigned colonne = 10);

//-------------------------------------------------------------------
// combienNombrePremier
//-------------------------------------------------------------------
// Description: Compte combien de il y de nombre premier dans un
// tableau criblé => élément non nul dans le tableau puisqu'il n'y
// restera plus que des nombres premiers.
//
// Paramètres:
// Nom: tab    Description:   Tableau dans lequel on va aller compter
//                            le nombre de nombre premier
// Nom: taille Description:   Taille du tableau
//
// Retourne: -
//-------------------------------------------------------------------
unsigned combienNombrePremier(const unsigned tab[], unsigned taille);

//-------------------------------------------------------------------
// afficheNombrePremier
//-------------------------------------------------------------------
// Description: Affiche combien il y de nombres premier dans le
// tableau et les affiches à la suite
//
// Paramètres:
// Nom: tab    Description:   Tableau utilisé pour l'affichage
// Nom: taille Description:   Taille du tableau
//
// Retourne: -
//-------------------------------------------------------------------
void afficheNombrePremier(const unsigned tab[], unsigned taille);

#endif //MAIN_CPP_CRIBLE_H
