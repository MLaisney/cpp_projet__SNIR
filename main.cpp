/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

#include <iostream>
using namespace std;

int main()
{
    //Entrée de l'indentité 
    string nom;
    cout << "Entrez votre nom : ";
    getline (cin, nom);
    cout << nom << endl;

    // Création des questionnaires
    creerQuestionnaire("Mathematiques", "mathematiques.txt");
    creerQuestionnaire("Histoire", "histoire.txt");
    creerQuestionnaire("Geographie", "geographie.txt");
    creerQuestionnaire("Science", "science.txt");

    // Lire les questionnaires
    Questionnaire questionnaires[4];
    lireQuestionnaire("mathematiques.txt", questionnaires[0]);
    lireQuestionnaire("histoire.txt", questionnaires[1]);
    lireQuestionnaire("geographie.txt", questionnaires[2]);
    lireQuestionnaire("science.txt", questionnaires[3]);

    return 0;
}