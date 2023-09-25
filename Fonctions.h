#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <string>

using namespace std;

struct Questionnaire 
{
    std::string theme;
    int bonnesReponses;
    int mauvaisesReponses;
};

//Fonctions des questionnaires
void creerQuestionnaire(string theme, string nomFichier);
void lireQuestionnaire(string nomFichier, Questionnaire& questionnaire);
void analyserQuestionnaires(Questionnaire questionnaires[], int nbQuestionnaires, string nom);
void genererRapport(string nom, Questionnaire questionnaires[], int nbQuestionnaires);

#endif // FONCTIONS_H