/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

#ifndef FONCTIONS_H
#define FONCTIONS_H
//appel des librairies
#include <string>

using namespace std;
//repertoire des fonctions
void demanderIdentite(string& nom);
void genererQuestionnaire(int& bonnesReponses, int& mauvaisesReponses);
#include "Fonctions.cpp"

#endif // FONCTIONS_H