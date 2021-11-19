/*
-----------------------------------------------------------------------------------
File name     : saisie.cpp
Authors       : Émilie Bressoud,
Creation date : 18.11.2021

Description   : premiere fonction : vérifie l'entrée de l'utilisateur. Si l'utilisateur entre une valeur non
               fonction vider_buffer, qui vide à chaque fois le buffer après une entrée.

Remarque(s)     :

Compilateur     :
                - Apple clang 13.0.0
                - Mingw-w64 g++ 11.1.0???
-----------------------------------------------------------------------------------
*/

#include <iostream> //
#include <limits>   // utilise pour vider le buffer
#include <string>   // utiliser pour les messages en type string

using namespace std;
void viderBuffer() {
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

unsigned saisie(const unsigned& min, const unsigned& max, const string& message, const string&
            messageErreur) {
   bool erreur;
   unsigned saisieUtilisateur;

   do {
      cout << message;
      cin >> saisieUtilisateur;

      erreur = cin.fail() || saisieUtilisateur < min || saisieUtilisateur > max;

      if(erreur) {
         cout << messageErreur << min << " et "
              << max << endl;
         cin.clear();
      }
      viderBuffer();
   } while(erreur);
   cout << endl;
   return saisieUtilisateur;

}
