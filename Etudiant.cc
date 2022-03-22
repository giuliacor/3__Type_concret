//
// Created by utente on 22/03/22.
//

using namespace std;
#include <iostream>

#include "Etudiant.h"

//implementation
Etudiant construct(){
    Etudiant e;
    cout << "Prenom: ";
    cin >> e.prenom;
    cout << "Nom famille: ";
    cin >> e.nom_famille;
    cout << "age: ";
    cin >> e.age;
    string section;
    bool loop(true);
    do {
        cout << "Section: ";
        cin >> section;
        if (section.size() == 2) {
            e.section = section;
            loop = false;
        }
    }while(loop);
    return e;
}
bool compare(Etudiant e1, Etudiant e2){
    if ((e1.prenom==e2.prenom) &&
        (e1.nom_famille==e2.nom_famille) &&
        (e1.age==e2.age) &&
        (e1.section==e2.section))
        return true;
    return false;
}
void affiche(Etudiant e){
    cout << "Etudiante: " << e.prenom << " "
        << e.nom_famille << " "
        << e.age << " "
        << e.section << endl;
}