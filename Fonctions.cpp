/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

#include "Fonctions.h"
#include <iostream>
#include <fstream>

void demanderIdentite(std::string& nom) {
    std::cout << "Entrez votre nom : ";
    std::getline(std::cin, nom);
}

void genererQuestionnaire(int& bonnesReponses, int& mauvaisesReponses) {
    bonnesReponses = 0;
    mauvaisesReponses = 0;

    for(int i = 1; i <= 20; ++i) {
        int reponseUtilisateur;
        int reponseCorrecte;

        // Générer une question (par exemple, une opération mathématique)
        int a = rand() % 10 + 1;
        int b = rand() % 10 + 1;
        char operation = rand() % 4; // 0: +, 1: -, 2: *, 3: /

        
        switch (operation) {
            case 0:
                reponseCorrecte = a + b;
                std::cout << "Question " << i << ": " << a << " + " << b << " = ?";
                break;
            case 1:
                reponseCorrecte = a - b;
                std::cout << "Question " << i << ": " << a << " - " << b << " = ?";
                break;
            case 2:
                reponseCorrecte = a * b;
                std::cout << "Question " << i << ": " << a << " * " << b << " = ?";
                break;
            case 3:
                reponseCorrecte = a / b;
                std::cout << "Question " << i << ": " << a << " / " << b << " (arrondi à l'entier le plus proche) = ?";
                break;
        }

        std::cin >> reponseUtilisateur;

        if (reponseUtilisateur == reponseCorrecte) {
            std::cout << "Bonne réponse !" << std::endl;
            bonnesReponses++;
        } else {
            std::cout << "Mauvaise réponse. La réponse correcte était : " << reponseCorrecte << std::endl;
            mauvaisesReponses++;
        }
    }
}
