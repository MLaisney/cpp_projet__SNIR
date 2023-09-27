/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

#include "Fonctions.h"
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    string nom;
    demanderIdentite(nom);

    int bonnesReponses = 0;
    int mauvaisesReponses = 0;
    genererQuestionnaire(bonnesReponses, mauvaisesReponses);

    ofstream fichier("resultats.txt");
    if (fichier.is_open()) {
        fichier << "Nom : " << nom << endl;
        fichier << "Bonnes réponses : " << bonnesReponses << endl;
        fichier << "Mauvaises réponses : " << mauvaisesReponses << endl;
        fichier.close();
    } else {
        cout << "Impossible d'ouvrir le fichier pour enregistrer les résultats." << endl;
    }

    return 0;
}
