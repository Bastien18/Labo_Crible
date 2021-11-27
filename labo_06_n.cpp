/*
-----------------------------------------------------------------------------------
Nom du fichier : labo_06_n.cpp
Nom du labo    : labo_06b
Auteur(s)      : Theodros Mulugeta, Alexis Gonzalez / HEIG-VD
               : Emilie Bressoud et Bastien Pillonel
Date           : 21.11.2021
But            : Le programme reprodruit le comportement exacte du crible
                 d'eratosth�ne, les valeurs sont donc consid�r�s comme premi�res au
                 d�part puis �limin�es au fur et � mesure. Le programme permet �
                 l'utilisateur de trouver tous les nombres premiers dans
                 l'intervalle qu'il aura choisi. 3 tableaux seront
                 ensuite pr�sent�s.

Remarque(s)    : - Un warning est pr�sent pour la taille du tableau "tableau" car
                   elle ne peut pas �tre une constante. Sa valeur n'est pas connue
                   avant la saise de l'utilisateur.



Compilateurs   :  - Mingw-w64 g++ 8.1.0
                  - MingW-w64 g++ 11.2.0
                  - Apple clang 13.0.0
-----------------------------------------------------------------------------------
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "annexe.h"
#include "crible_eratosthene.h"
#include "complement.h"

using namespace std;

int main() {

	// ************************************************
	// Constantes
	const string       MESSAGE_BIENVENUE   = "Bienvenue, ce programme va vous "
														  "permettre de trouver des nombres "
														  "premiers";
	const unsigned int VALEUR_MIN          = 1;
   const unsigned int VALEUR_MAX          = 100;
   const unsigned int CAPACITE            = 100;

	const string       MESSAGE_NBRE_VALEUR = "nbre de valeurs";
   const string       MESSAGE_ERREUR      = "Saisie incorrect";

	const bool         INIT_VALEUR_TABLEAU = false;
	const string       INIT_TABLEAU        = "intialisation du tableau";
	const string       CRIBLAGE_TABLEAU    = "criblage du tableau";
   const string       PHRASE_FINAL_DEBUT  = "Il y a ";
   const string       PHRASE_FINAL_FIN    = " nbres premiers";

   const bool         AFFICHER_EN_COLONNE = true;
   unsigned const int ELEMENT_PAR_LIGNE   = 10;
   const char         SYMBOLE_PREMIER     = 'X';
   const char         SYMBOLE_NON_PREMIER = 'O';

	const string       QUITTER_PROGRAMME   = "Pressez Enter pour quitter";

	// ************************************************
	// Variables
	unsigned int       valeurSaisie;
	int                largeur_setw;


	// ************************************************
	// 1. Debut du programme
	// ************************************************

	// Affichage du message de bienvenue
	cout << MESSAGE_BIENVENUE << endl << endl;


	// ************************************************
	// 2. Choix de la valeur de l'intervalle
	// ************************************************

	// R�cup�ration de la valeur saisie
	valeurSaisie = (unsigned)testSaisie(VALEUR_MIN,
													VALEUR_MAX,
													MESSAGE_NBRE_VALEUR,
													MESSAGE_ERREUR);

	cout << endl;

   bool tableau[valeurSaisie];

   // Calcul du setw en fonction du nombre saisie par l'utilisateur
   // On fait - 1 pour les nombres tels que 100, 1000 etc.
   // Pour ne pas avoir un setw trop grand
   largeur_setw = nbrDeDigitDansUnNombre(valeurSaisie - 1) + 1;


	// ************************************************
	// 3. Recherche des nombres premiers et affichage
	// ************************************************

	// 3.1 Initialisation du tableau de bool�ens avec false comme valeur
	initialisationTableauBooleen(tableau, valeurSaisie, INIT_VALEUR_TABLEAU);
	// 3.2 Affichage du tableau initialis� � false
   afficherTableauBoolEnChar(INIT_TABLEAU,
                             tableau,
                             valeurSaisie,
                             AFFICHER_EN_COLONNE,
                             ELEMENT_PAR_LIGNE,
                             largeur_setw,
									  SYMBOLE_PREMIER,
									  SYMBOLE_NON_PREMIER);

   cout << endl << endl;


	// 3.3 Criblage du tableau et r�cup�ration du total de nombres premiers
	unsigned int totalNbrPremiers = criblageTableau(tableau, valeurSaisie);
	// 3.4 Affichage du tableau cribl�
	afficherTableauBoolEnChar(CRIBLAGE_TABLEAU,
                             tableau,
                             valeurSaisie,
                             AFFICHER_EN_COLONNE,
                             ELEMENT_PAR_LIGNE,
                             largeur_setw,
									  SYMBOLE_PREMIER,
									  SYMBOLE_NON_PREMIER);

   cout << endl << endl;
   // 3.5 Affichage du total de nombres premiers
   cout << PHRASE_FINAL_DEBUT << totalNbrPremiers << PHRASE_FINAL_FIN;
	// 3.6 Affichage du tableau des nombres premiers en int
	afficherTableauBoolEnIntDePosition("",
                                      tableau,
                                      valeurSaisie,
                                      AFFICHER_EN_COLONNE,
                                      ELEMENT_PAR_LIGNE,
                                      largeur_setw);

	cout << endl << endl;

   //Complement

   //creation du tableau vide
   unsigned tab1er[CAPACITE];

   //remplissage du tableau comportant seulement les nombres premiers
   nbre1er(tableau, valeurSaisie, tab1er, totalNbrPremiers);

   //affiche la liste des nombres premiers
   put(tab1er, totalNbrPremiers);

   // ************************************************
	// 4. Fin du programme
	// ************************************************

	// Affichage de la phrase de fin
	cout << QUITTER_PROGRAMME;

	// Vidage du buffer
	viderBuffer();

	return EXIT_SUCCESS;

}
