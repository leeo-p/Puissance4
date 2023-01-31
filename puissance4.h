#ifndef __puissance4_H_
#define __puissance4_H_

#include<stdio.h>
#include<stdlib.h>

int** Allouer(int lignes, int colonnes);
void Initialisation(int** tab, int lignes, int colonnes);
void Affichage(int** tab, int lignes, int colonnes);
int ChoixJoueur(void);


int Jouer(int** plateau,int lignes, int colonnes, int joueur);
int AGagne(int** tab, int lignes, int colonnes);
void TourDeJeu(int** tab, int lignes, int colonnes, int gagant, int joueur);

void Libere (int** tab, int lignes, int colonnes);



#endif