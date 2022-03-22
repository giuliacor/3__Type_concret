/*!
 * \author  Giulia
 * \date    22/03/22
 * \brief   sére 3 exercice 2
 */

#ifndef INC_3__TYPE_CONCRET_ETUDIANT_H
#define INC_3__TYPE_CONCRET_ETUDIANT_H
using namespace std;
#include <string>

//definition du type Etudiant: todo porquoi ici et pas juste dans le .cc ?
struct Etudiant{
    string nom_famille;
    string prenom;
    int age;
    string section;
};

//declarations de fonctions
Etudiant construct();
bool compare(Etudiant e1, Etudiant e2);
void affiche(Etudiant e);

#endif //INC_3__TYPE_CONCRET_ETUDIANT_H
