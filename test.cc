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
        epfl.push_back(construct());
        cout << "Un autre etudiant ? (s/n) ";
        cin >> N;
        if (N == 's') loop = true;
        else loop = false;
    }while (loop);
    //verification doublons
    for (int i=0; i<epfl.size()-1; ++i) {
        for (int j=i+1; j<epfl.size(); ++j) {
            if (compare(epfl[i], epfl[j])) cout << "no\n";
        }
    }
    //affichage
    for(auto etu : epfl)
        affiche(etu);
    return 0;
}


