/*
-----------------------------------------------------------------------------------
Nom du fichier : annexe.cpp
Nom du labo    : labo_06_n
Auteur(s)      : Theodros Mulugeta, Alexis Gonzalez / HEIG-VD
Date           : 21.11.2021
But            : Contient les fonctions qui sont les moins propres à ce projet et
                 qui pourraient être reutilisées dans d'autres projets. Exemple:
                 Vider buffer

Remarque(s)    : /


Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>
#include "annexe.h"

unsigned const int ZERO_DE_DEPART = 0;

using namespace std;

// Saisie utilisateur
int testSaisie(int           minValeur,
					int           maxValeur,
					const string& MESSAGE_SAISIE,
					const string& MESSAGE_ERREUR){

   bool erreur;
   int saisie;

	// Message de saisie avec l'intervalle
	cout << MESSAGE_SAISIE << "[" << minValeur << ".." << maxValeur << "]" << " : ";

	do {
		// Saisie
      cin >> saisie;

      // Vérification de la saisie
      erreur = (cin.fail()) or (saisie < minValeur) or
					(saisie > maxValeur);

		// Message d'erreur s'il y a une erreur
      if (erreur) {
         cout << MESSAGE_ERREUR << endl;
         cin.clear();
      }

		viderBuffer();

   } while (erreur);

   return saisie;
}


// Vidage du buffer
void viderBuffer(){
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // vide buffer
}


// Calcul le nombre de digit dans un chiffre
int nbrDeDigitDansUnNombre(unsigned int nbrAEvaluer){

	return int(log10(nbrAEvaluer)) + 1;
}


// Initialisation du tableau
void initialisationTableauBooleen(bool         tabParam[],
											 unsigned int taille,
											 bool         valeurBooleene){

	// Remplissage des éléments du tableau avec false ou true
	for(unsigned i = 0; i < taille; ++i){
		tabParam[i] = valeurBooleene;
	}

}


// Affichage d'un tableau de booléen en char
void afficherTableauBoolEnChar(const string &TITRE,
										 const bool   TAB_PARAM[],
										 unsigned int taille,
										 bool         afficherEnColonne,
										 unsigned int nbrColonne,
										 int          largeurSetw,
										 char         caracterePourTrue,
										 char         caracterePourFalse){

	cout << TITRE << endl;

	// Affichage en colonne
	if(afficherEnColonne){
		for(unsigned int i = ZERO_DE_DEPART; i < taille; ++i){
			// Affichage du char
			if(TAB_PARAM[i]){
				cout << setw(largeurSetw) << caracterePourTrue;
			} else {
				cout << setw(largeurSetw) << caracterePourFalse;
			}
			// Pour le retour à la ligne
			if(((i + 1) % nbrColonne == 0) && (i + 1 < taille)){
				cout << endl;
			}

		}
	}
	// Affichage en ligne
	else {
		for(unsigned int i = ZERO_DE_DEPART; i < taille;){
			if(TAB_PARAM[i]){
				cout << setw(largeurSetw) << caracterePourTrue;
			} else {
				cout << setw(largeurSetw) << caracterePourFalse;
			}
			++i;
		}
	}
}


// Affichage d'un tableau de booléen en int
void afficherTableauBoolEnIntDePosition(const std::string& TITRE,
													 const bool         TAB_PARAM[],
													 unsigned int       taille,
													 bool               afficherEnColonne,
													 unsigned int       nbrColonne,
													 int                largeurSetw){

	cout << TITRE << endl;

	// Affichage en colonne
	if(afficherEnColonne){
		// Compteur pour le retour à la ligne
		unsigned int compteur = ZERO_DE_DEPART;
		// Début de la boucle
		for(unsigned int i = ZERO_DE_DEPART; i < taille; ++i){
			// Affichage du int
			if(TAB_PARAM[i]){
				cout << setw(largeurSetw) << i + 1;
				compteur++;
			}
			// Pour le retour à la ligne
			if(compteur == nbrColonne){
				cout << endl;
				compteur = ZERO_DE_DEPART;
			}
		}
	}
	// Affichage en ligne
	else {
		for(unsigned int i = ZERO_DE_DEPART; i < taille;){
			if(TAB_PARAM[i]){
				cout << setw(largeurSetw) << i + 1;
			}
			++i;
		}
	}
}