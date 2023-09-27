/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void demanderIdentite(string& nom);
void genererQuestionnaire(int& bonnesReponses, int& mauvaisesReponses);

#endif // FONCTIONS_H