/*
-----------------------------------------------------------------------------------
Nom du fichier : complement.h
Nom du labo    : labo_06b_O
Auteur(s)      : Emilie Bressoud, Bastien Pillonel
Date           : 25.11.2021
But            : Contient les prototype des fonctions de complement.cpp

Remarque(s)    : la fonction nbre1er ne retourne pas la taille des nombres
               premiers comme dans l'exemple du labo 6b, car sa taille est
               donnee dans le labo_06_n.cpp.
               la fonction put prend comme parametre un tableau en unsigned
               et non en int comme dans l'exemple, ce qui evite de faire un
               cast.

Compilateurs   :  - MingW-w64 g++ 11.2.0
                  - Apple clang 13.0.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO_06_N_COMPLEMENT_H
#define LABO_06_N_COMPLEMENT_H


// nom         nbre1er
// but         parcourt le tableau de booléens et remplit un nouveau tableau
//             contenant seulement les nombres premiers
//
// param       tab         le tableau de booléens
// param       taille      la taille du tableau de booléens
// param       tab1er      un autre tableau en unsigned
// param       taille      la taille du tableau de unsigned
// return      n/a
// exception   n/a
void nbre1er(const bool tab[], size_t tailleInitial, unsigned tab1er[],
               size_t tailleNbre1er);

// nom         put
// but         Affiche dans la console la liste des nombres premiers
//
// param       tab         le tableau en int
// param       taille      la taille du tableau
// return      n/a
// exception   n/a
void put(unsigned tab[], size_t taille);
#endif //LABO_06_N_COMPLEMENT_H
