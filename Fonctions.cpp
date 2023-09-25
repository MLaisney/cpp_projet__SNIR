#include "Fonctions.h"
#include <iostream>
#include <fstream>

using namespace std;

// Fonction de la création des fichiers
void creerQuestionnaire(string theme, string nomFichier)
{
    // Si le fichier est bon.
    ofstream fichier(nomFichier);
    if (fichier.is_open())
    {
        int bonnesReponses, mauvaisesReponses;
        cout << "Questionnaire sur le theme : " << theme << endl;
        cout << "Nombre de bonnes reponses : ";
        cin >> bonnesReponses;
        cout << "Nombre de mauvaises reponses : ";
        cin >> mauvaisesReponses;
        fichier << theme << endl;
        fichier << bonnesReponses << endl;
        fichier << mauvaisesReponses << endl;
        fichier.close(); // Fermeture du fichier après fermeture. 
    }
    // Si le fichier n'est pas bon.
    else 
    {
        cout << "Erreur lors de l'ouverture du fichier";
    }
}