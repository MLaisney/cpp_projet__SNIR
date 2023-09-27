/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

#include "Fonctions.h"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void demanderIdentite(string& nom) {
    cout << "Entrez votre nom : ";
    getline(std::cin, nom);
}

void genererQuestionnaire(int& bonnesReponses, int& mauvaisesReponses) {
    bonnesReponses = 0;
    mauvaisesReponses = 0;

    for(int i = 1; i <= 20; ++i) {
        int reponseUtilisateur;
        int reponseCorrecte;

        // Générer une question
        int a = rand() % 10 + 1;
        int b = rand() % 10 + 1;
        char operation = rand() % 4;

        
        switch (operation) {
            case 0:
                reponseCorrecte = a + b;
                cout << "Question " << i << ": " << a << " + " << b << " = ?";
                break;
            case 1:
                reponseCorrecte = a - b;
                cout << "Question " << i << ": " << a << " - " << b << " = ?";
                break;
            case 2:
                reponseCorrecte = a * b;
                cout << "Question " << i << ": " << a << " * " << b << " = ?";
                break;
            case 3:
                reponseCorrecte = a / b;
                cout << "Question " << i << ": " << a << " / " << b << " (arrondi à l'entier le plus proche) = ?";
                break;
        }

        cin >> reponseUtilisateur;

        if (reponseUtilisateur == reponseCorrecte) {
            cout << "Bonne réponse !" << endl;
            bonnesReponses++;
        } else {
            cout << "Mauvaise réponse. La réponse correcte était : " << reponseCorrecte << endl;
            mauvaisesReponses++;
        }
    }
}
