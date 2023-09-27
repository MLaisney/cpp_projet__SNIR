/*Nom : Questionnaire des SNIR
Par : Laisney Melvyn, le 25/09/2023*/

//appel des librairies
#include "Fonctions.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

// Programme principal
int main()
{
    string nom;
    demanderIdentite(nom); //appel de la fonction pour l'identite

//initialisation à 0 des variables
    int bonnesReponses = 0;
    int mauvaisesReponses = 0;
    genererQuestionnaire(bonnesReponses, mauvaisesReponses); //appel de la fonction du questionnaire

    ofstream fichier("resultats.txt");
    if (fichier.is_open()) { //ouverture du fichier 
        fichier << "Nom : " << nom << endl; //écriture du fichier 
        fichier << "Bonnes réponses : " << bonnesReponses << endl;
        fichier << "Mauvaises réponses : " << mauvaisesReponses << endl;
        fichier.close(); //fermeture du fichier
    } else { //affichage du message d'erreur d'ouverture
        cout << "Impossible d'ouvrir le fichier pour enregistrer les résultats." << endl;
    }

    return 0;
}
