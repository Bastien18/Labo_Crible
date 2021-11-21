/*
  ---------------------------------------------------------------------------
  Fichier     : tableauC.h
  Nom du labo : Labo_crible_GroupeO
  Auteur(s)   : Emilie Bressoud & Bastien Pillonel
  Date        : 19.11.2021
  But         : Fichier de déclaration des sous-programme utiliser pour la
                gestion de tableau 1 dimension

  Remarque(s) : -

  Compilateur : MingW-w64 g++ 11.2.0 et Apple Clang 13.0.0
  ---------------------------------------------------------------------------
*/

#ifndef LIBRAIRIE_TABLEAUC_H
#define LIBRAIRIE_TABLEAUC_H

//-------------------------------------------------------------------
// remplirTableau
//-------------------------------------------------------------------
// Description: Rempli le tableau de la valeur entière passée en
// paramètre.
//
// Paramètres:
// Nom: tab[]     Description:   tableau à remplir
// Nom: taille    Description:   taille du tableau
// Nom: valeur    Description:   valeur à laquelle le tableau sera
//                               rempli
//
// Retourne: -
//-------------------------------------------------------------------
void remplirTableau(unsigned tab[], unsigned taille, unsigned valeur);

//-------------------------------------------------------------------
// recherche
//-------------------------------------------------------------------
// Description: Cherche la première occurence dans le tableau de la
// valeur passé en paramètre
//
// Paramètres:
// Nom: tab    Description:   Tableau dans lequelle se fait la recherche
// Nom: taille Description:   Taille du tableau
// Nom: val    Description:   Valeur cherchée
// Nom: pos    Description:   Position à laquelle commence la recherche
//
// Retourne: La position de la première valeur correspondante trouvée
//-------------------------------------------------------------------
unsigned recherche(const unsigned tab[], unsigned taille, unsigned val, unsigned
pos = 0);
#endif //LIBRAIRIE_TABLEAUC_H
