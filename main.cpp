/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

#include <iostream>
using namespace std;

int main()
{
    string nom; //Entrée de l'indentité 
    cout << "Entrez votre nom : ";
    getline (cin, nom);
    cout << nom << endl;

    // Création des questionnaires
    creerQuestionnaire("Mathematiques", "mathematiques.txt");
    creerQuestionnaire("Histoire", "histoire.txt");
    creerQuestionnaire("Geographie", "geographie.txt");
    creerQuestionnaire("Science", "science.txt");

    return 0;
}