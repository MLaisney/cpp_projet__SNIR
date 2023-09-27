/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

#include <iostream>
#include "Fonctions.h"
using namespace std;

int main()
{
    //Initialisation du nombre de bonnes et mauvaises réponse
    int bonnesReponses = 0;
    int mauvaisesReponses = 0;
    
    //Entrée de l'indentité 
    string nom;
    cout << "Entrez votre nom : ";
    getline (cin, nom);
    cout << nom << endl;

    genererQuestionnaire(bonnesReponses, mauvaisesReponses);
    //Affichage des résultats
    ofstream fichier("resultats.txt");
    if (fichier.is_open()) {
        fichier << "Nom : " << nom << endl;
        fichier << "Bonnes réponses : " << bonnesReponses << endl;
        fichier << "Mauvaises réponses : " << mauvaisesReponses << endl;
        fichier.close();
    } else {
        cerr << "Impossible d'ouvrir le fichier pour enregistrer les résultats." << endl; //Message d'erreur
    }

    return 0;
}