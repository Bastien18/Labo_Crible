/*
  ---------------------------------------------------------------------------
  Fichier     : annexe.h
  Nom du labo : Labo_crible_GroupeO
  Auteur(s)   : Emilie Bressoud & Bastien Pillonel
  Date        : 19.11.2021
  But         : Fichier de déclaration des sous-programme annexes

  Remarque(s) : -

  Compilateur : MingW-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#ifndef MAIN_CPP_ANNEXE_H
#define MAIN_CPP_ANNEXE_H

#include <string>

//-------------------------------------------------------------------
// viderBuffer
//-------------------------------------------------------------------
// Description: Vide le buffer de saisie
//
// Paramètres:
// Nom: -    Description:
//
// Retourne: -
//-------------------------------------------------------------------
void viderBuffer();

//-------------------------------------------------------------------
// finProgramme
//-------------------------------------------------------------------
// Description: Stop le programme et demande à l'utilisateur de presser
// enter pour fermer le programme.
//
// Paramètres:
// Nom: MSG_FIN    Description: Instruction de fermeture du programme
//
// Retourne: -
//-------------------------------------------------------------------
void finProgramme(const std::string& MSG_FIN);

#endif //MAIN_CPP_ANNEXE_H
