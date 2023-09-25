#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <string>

struct Questionnaire 
{
    std::string theme;
    int bonnesReponses;
    int mauvaisesReponses;
};

//Fonctions des questionnaires
void creerQuestionnaire(std::string theme, std::string nomFichier);
void lireQuestionnaire(std::string nomFichier, Questionnaire& questionnaire);
void analyserQuestionnaires(Questionnaire questionnaires[], int nbQuestionnaires, std::string nom);
void genererRapport(std::string nom, Questionnaire questionnaires[], int nbQuestionnaires);

#endif // FONCTIONS_H