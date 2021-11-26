/*
-----------------------------------------------------------------------------------
Nom du fichier : crible_eratosthene.cpp
Nom du labo    : labo_06_n
Auteur(s)      : Theodros Mulugeta, Alexis Gonzalez / HEIG-VD
Date           : 21.11.2021
But            : Contient la fonction propre � ce laboratoire qui permet de calculer
                 les nombres premiers selon le crible d�Eratosth�ne.

Remarque(s)    : - La capacit� des tableaux n'est pas indiqu�e car c'est la taille
                   elle-m�me qui fait office de capacit�.

                 - Une gestion de l'overflow est pr�vue pour les int.



Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/


#include <limits>
#include <cstdlib>
#include "crible_eratosthene.h"

const int DEUX = 2;
const int ZERO_DE_DEPART = 0;

// Criblage du tableau
unsigned int criblageTableau(bool tabParam[], unsigned int taille){

	// - 1 Car le 1 n'est pas pris en charge
	unsigned int totalNbrPremiers = taille - 1;

	// Initialisation de 1 comme non premier et 2 comme premier
	tabParam[0] = false;
	tabParam[1] = true;

	// Tous les chiffres � partir de 2 sont consid�r� premiers
	// Pour simuler l'�limination du crible d�Eratosth�ne
	for (unsigned int i = DEUX; i < taille; i++){
		tabParam[i] = true;
	}

	// Phase d'�limination
	// La phase d�bute avec le premier nombre premier : 2
	for (unsigned int nbrPremier = DEUX; nbrPremier < taille; nbrPremier++){

		// Gestion de l'overflow
		if(std::numeric_limits<int>::max() / DEUX > nbrPremier){

			// Initalise le premier multiple du nombre premier
			unsigned int multipleNbrePremier = DEUX * nbrPremier;

			// D�but de la boucle qui va �l�miner chaque multiple du nombre premier
			while (multipleNbrePremier <= taille) {

				// Elimine le multiple du nombre premier de notre tableau
				// On soustrait de 1 car on souhaite commencer � 1 et non 0

				// On pose la condition pour ne pas �craser 2 fois le m�me chiffre
				if(tabParam[multipleNbrePremier - 1]){
					tabParam[multipleNbrePremier - 1] = false;
					--totalNbrPremiers;
				}

				// Passe au multiple suivant du nombre premier en ajoutant le
				// nombre premier lui-m�me
				multipleNbrePremier += nbrPremier;

			}
		} else {
			// En cas d'overflow
			return EXIT_FAILURE;

		}

	}

	return totalNbrPremiers;
}