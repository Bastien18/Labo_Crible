/*
-----------------------------------------------------------------------------------
Nom du fichier : crible_eratosthene.h
Nom du labo    : labo_06_n
Auteur(s)      : Theodros Mulugeta, Alexis Gonzalez / HEIG-VD
Date           : 21.11.2021
But            : Contient le prototype de la fonction criblageTableau

Remarque(s)    : /


Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO_06_N_CRIBLE_ERATOSTHENE_H
#define LABO_06_N_CRIBLE_ERATOSTHENE_H

// nom         criblageTableau
// but         Modifie les valeurs booléenes en true lorsque nous avons un nombre
// 				premier.

// param       tabParam[]     Recois le tableau qui vient d'être initialisé en false
// param       taille         Valeur saisie par l'utilisateur, elle correspond
//                            à la taille du tableau
// return      unsigned int   Correspond au total de nombres premiers
// exception   n/a
unsigned int criblageTableau(bool tabParam[], unsigned int taille);

#endif //LABO_06_N_CRIBLE_ERATOSTHENE_H
