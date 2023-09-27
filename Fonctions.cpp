/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

//appel des librairies
#include "Fonctions.h"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;
//configuration de la fonction de l'indentité
void demanderIdentite(string& nom) {
    cout << "Entrez votre nom : ";
    getline(std::cin, nom);
}
//configuration de la fonction des questions/réponses
void genererQuestionnaire(int& bonnesReponses, int& mauvaisesReponses) {
    bonnesReponses = 0;
    mauvaisesReponses = 0;

    for(int i = 1; i <= 20; ++i) {
        //initialisation des variables réponses
        int reponseUtilisateur;
        int reponseCorrecte;

        /*initialisation des variables
        par une valeur aléatoire*/ 
        int a = rand() % 10 + 1;
        int b = rand() % 10 + 1;
        char operation = rand() % 4;

        switch (operation) { //ecriture des questions
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

        cin >> reponseUtilisateur; //recupération des réponses de l'utilisateur

        if (reponseUtilisateur == reponseCorrecte) { //comparaison
            cout << "Bonne réponse !" << endl; //bonne réponse
            bonnesReponses++; 
        } else {//mauvaise réponse
            cout << "Mauvaise réponse. La réponse correcte était : " << reponseCorrecte << endl;
            mauvaisesReponses++;
        }
    }
}
