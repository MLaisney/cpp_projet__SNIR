/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

#include "Fonctions.h"
using namespace std;

int main() {
    std::string nom;
    demanderIdentite(nom);

    int bonnesReponses = 0;
    int mauvaisesReponses = 0;
    genererQuestionnaire(bonnesReponses, mauvaisesReponses);

    std::ofstream fichier("resultats.txt");
    if (monFlux.is_open())
    {
        monFlux << "Nom : " << nom << endl;
        monFlux << "Bonnes réponses : " << bonnesReponses << endl;
        monFlux << "Mauvaises réponses : " << mauvaisesReponses << endl;
        monFlux.close();
    } 
    else {
        cerr << "Impossible d'ouvrir le fichier pour enregistrer les résultats." << endl; //Message d'erreur
    }

    return 0;
}