/*
-----------------------------------------------------------------------------------
Nom du fichier : annexe.h
Nom du labo    : labo_06_n
Auteur(s)      : Theodros Mulugeta, Alexis Gonzalez / HEIG-VD
Date           : 21.11.2021
But            : Contient les prototype des fonctions qui sont considérées comme
                 réutilisables dans d'autres projets.

Remarque(s)    : /


Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/


#ifndef LABO_06_N_ANNEXE_H
#define LABO_06_N_ANNEXE_H

#include <string>


// nom         testSaisie
// but         Test l'entree utilisateur pour qu'elle soie comprise entre
//             [minValeur à maxValeur]. Redemande à l'utilisateur (au travers d'un
//             message d'erreur, MESSAGE_ERREUR)
//
// param       minValeur          minimum de l'interval
// param       maxValeur          maximum de l'interval
// param       MESSAGE_SAISIE     Information à l'utilisateur concernant l'interval
//                                dans lequel il peut entrer sa valeur
// param       MESSAGE_ERREUR     Message d'erreur lorsque l'utilisateur entre une
//                                valeur qui n'est pas comprise dans l'interval
// return      int                la valeur entree par l'utilisateur, ici un int
// exception   n/a
int testSaisie(int                minValeur,
					int                maxValeur,
					const std::string& MESSAGE_SAISIE,
					const std::string& MESSAGE_ERREUR);


// nom         viderBuffer
// but         Vide le buffer
// return      void
// exception   n/a
void viderBuffer();


// nom         nbrDeDigitDansUnNombre
// but         Retourne un int qui correspond aux nombres de digits du chiffre
//
// param       nbrAEvaluer         Le nombre à évaluer
// return      int
// exception   n/a
int nbrDeDigitDansUnNombre(unsigned int nbrAEvaluer);


// nom         initialisationTableauBooleen
// but         Initialise le tableau avec des booléens
//
// param       tabParam[]          Tableau à initialiser
// param       taille              Taille du tableau
// param       valeurBooleene      Valeur booléenne d'initialisation pour le tableau
// return      void
// exception   n/a
void initialisationTableauBooleen(bool         tabParam[],
											 unsigned int taille,
											 bool         valeurBooleene);


// nom         afficherTableauBoolEnChar
// but         Afficher un tableau à une dimension de booléen en char
//       		Soit sur une ligne, soit par colonne.
//
// param       TITRE                Message à l'utilisateur, pas obligatoire
// param       TAB_PARAM            Tableau à afficher
// param       taille               Taille du tableau passé en parametre
// param       afficherEnColonne    Affiche le tableau sur colonnes si true
// param       nbrColonne           Nombre de colonne pour les
//                                  valeurs de notre tableau
// param       largeurSetw          Définit la largeur des setw
// param       caracterePourTrue    Symbole char pour la valeur true
// param       caracterePourFalse   Symbole char pour la valeur false
// return      void
// exception   n/a
void afficherTableauBoolEnChar(const std::string& TITRE,
										 const bool         TAB_PARAM[],
										 unsigned int       taille,
										 bool               afficherEnColonne,
										 unsigned int       nbrColonne,
										 int                largeurSetw,
										 char               caracterePourTrue,
										 char               caracterePourFalse);


// nom         afficherTableauBoolEnIntDePosition
// but         Afficher un tableau à une dimension de int en fonction de la position.
// 				Soit sur une ligne, soit par colonne.
//
// param       TITRE                Message à l'utilisateur, pas obligatoire
// param       TAB_PARAM            Tableau à afficher
// param       taille               Taille du tableau passé en parametre
// param       afficherEnColonne    Affiche le tableau sur colonnes si true
// param       nbrColonne           Nombre de colonne pour afficher les
//                                  valeurs de notre tableau
// param       largeurSetw          Définit la largeur des setw
// return      void
// exception   n/a
void afficherTableauBoolEnIntDePosition(const std::string& TITRE,
													 const bool         TAB_PARAM[],
													 unsigned int       taille,
													 bool               afficherEnColonne,
													 unsigned int       nbrColonne,
													 int                largeurSetw);


#endif //LABO_06_N_ANNEXE_H
