#include "puissance4.h"

int main (){
    printf("C'est le puissance 4 !\n\n");

    int int_lignes = 6;
    int int_colonnes = 7;
    int **tabMain = NULL;
    int int_pionPlace;
    int int_joueur;
    int int_gagner;


    int_joueur = ChoixJoueur();
    tabMain = Allouer(int_lignes, int_colonnes);
    Initialisation(tabMain, int_lignes, int_colonnes);
    int_pionPlace = Jouer(tabMain,int_lignes, int_colonnes, int_joueur);
    int_gagner = AGagne(tabMain, int_lignes, int_colonnes);
    TourDeJeu(tabMain, int_lignes, int_colonnes, int_gagner, int_joueur);
    Affichage(tabMain, int_lignes, int_colonnes);
    
    
    Libere(tabMain, int_lignes, int_colonnes);

    return 0;
}
    