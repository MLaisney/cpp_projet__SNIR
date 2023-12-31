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
    getline(cin, nom);
}
//configuration de la fonction des questions/réponses
void genererQuestionnaire(int& bonnesReponses, int& mauvaisesReponses) {
    bonnesReponses = 0;
    mauvaisesReponses = 0;

    cout << "Entrez aux questionnaire avec vos reponses. Attention ! Si vous mettez un nombre decimal le programme se fermera automatiquement." << endl;

    for(int i = 1; i <= 20; ++i) {
        //initialisation des variables réponses
        int reponseUtilisateur;
        int reponseCorrecte;

        /*initialisation des variables
        par une valeur aléatoire*/ 
        int a = rand() % 10 + 1;
        int b = rand() % 10 + 1;
        char operation = rand() % 4; //choix de l'opération de façon aléatoire

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
            cout << "Bonne reponse !" << endl; //bonne réponse
            bonnesReponses++; 
        } else {//mauvaise réponse
            cout << "Mauvaise reponse. La reponse correcte etait : " << reponseCorrecte << endl;
            mauvaisesReponses++;
        }
    }
    cout << "Le questionnaire est fini ! Vous pouvez voir le nombre de bonne et mauvaise reponse dans le fichier resultat.txt" << endl;
}