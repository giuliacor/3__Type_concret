/*!
 * \author  Giulia
 * \date    22/03/22
 * \brief   sére 3 exercice 2
 */
#include <iostream>
#include <vector>

#include "Etudiant.h"

int main(){
    Etudiant e = construct();

    //costruction vector
    vector<Etudiant> epfl;
    bool loop(false);
    char N;
    do{
        construct();
        cout << "Un autre etudiant ? (s/n) ";
        cin >> N;
        if (N == 's') loop = true;
        else loop = false;
    }while (loop);
    //verification doublons
    
    //affichage
    return 0;
}


