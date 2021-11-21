/*
  ---------------------------------------------------------------------------
  Fichier     : saisie.h
  Nom du labo : Labo_crible_GroupeO
  Auteur(s)   : Emilie Bressoud & Bastien Pillonel
  Date        : 19.11.2021
  But         : Fichier de déclaration des sous-programme utilisés pour la
                saisie utilisateur

  Remarque(s) : -

  Compilateur : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#ifndef LABO_CRIBLE_SAISIE_H
#define LABO_CRIBLE_SAISIE_H

#include <string>

//-------------------------------------------------------------------
// saisie
//-------------------------------------------------------------------
// Description: Fait la saisie utilisateur d'un unsigned tant que
// la valeur saisie n'est pas du type unsigned ou dans le range min et
// max.
//
// Paramètres:
// Nom: min             Description: Valeur minimale de saisie
// Nom: max             Description: Valeur maximale de saisie
// Nom: MSG_SAISIE      Description: Message de saisie
// Nom: MSG_ERREUR      Description: Message en cas de mauvaise saisie
//
// Retourne: - La valeur saisie
//-------------------------------------------------------------------
unsigned saisie(unsigned min, unsigned max, const std::string& MSG_SAISIE,
                const std::string& MSG_ERREUR);

#endif //LABO_CRIBLE_SAISIE_H
