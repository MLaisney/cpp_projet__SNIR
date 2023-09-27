/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

#include "Fonctions.h"
#include <iostream>
#include <fstream>

using namespace std;

void demanderIdentite(string& nom)
{
    cout << "Entre votre nom : ";
    getline(cin, nom);
}

void genererQuestionnaire(int& bonnesResponses, int& mauvaisesReponses)
{
    bonnesResponses = 0;
    mauvaisesReponses = 0;

    for(int i = 1; i <=20; i++)
    {
        int reponseUtilisateur;
        int reponseCorrecte;

        int a = rand() % 10+1;
        int b = rand() % 10+1;
        char operation = rand() % 4;

        switch (operation)
        {
        case 0:
            reponseCorrecte = a + b;
            cout << "Question " << i << ":" << a << "+" << b << "= ?";
            break;
        
        default:
            break;
        }

        cin >> reponseUtilisateur;
        if(reponseUtilisateur == reponseCorrecte)
        {
            cout << "Bonne réponse !" << endl;
            bonnesResponses++;
        }
        else
        {
            cout << "Mauvaise réponse. La réponse correcte était : " << reponseCorrecte << endl;
            mauvaisesReponses++;
        }
}
}
