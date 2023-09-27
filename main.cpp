/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

#include "Fonctions.h"

int main() {
    std::string nom;
    demanderIdentite(nom);

    int bonnesReponses = 0;
    int mauvaisesReponses = 0;
    genererQuestionnaire(bonnesReponses, mauvaisesReponses);

    std::ofstream fichier("resultats.txt");
    if (fichier.is_open()) {
        fichier << "Nom : " << nom << std::endl;
        fichier << "Bonnes réponses : " << bonnesReponses << std::endl;
        fichier << "Mauvaises réponses : " << mauvaisesReponses << std::endl;
        fichier.close();
    } else {
        std::cerr << "Impossible d'ouvrir le fichier pour enregistrer les résultats." << std::endl;
    }

    return 0;
}
