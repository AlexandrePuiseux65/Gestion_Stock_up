//
//  gestion_produit.h
//  Gestion_Stock
//
//  Created by Alexandre Puiseux on 10/01/2023.
//


#ifndef GESTION_PRODUIT_H_INCLUDED
#define GESTION_PRODUIT_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_SIZE_TAB_PRODUIT 100

//Différente structure que on utilise :
struct Produit{
    char nom[40];
    char designation[60];
    float prix;
};typedef struct Produit PROD;

struct Date{
    int jour;
    int mois;
    int annee;
};typedef struct Date DATE;

struct Detail_produit{
    int code;
    float prix_TVA;
    float QteStq;
    DATE Date_limite_Data;
};typedef struct Detail_produit DET_PROD;

struct Adresse{
    int Numero_rue;
    char nomRue [30];
    char ville [30];
    int codePostale;
    char pays [30];
};typedef struct Adresse ADRE;

struct Fournisseur{
    int code;
    ADRE Adresse_fourniseur;
    long telephone;
    PROD Produit[10];
};typedef struct Fournisseur FOUR;



//Mettre les diffÈrentes fonctions de gestion produit

//COde pour afficher
void affiche_produit(PROD prd); //fonction d'affichage de produit
void affiche_liste_produit(PROD* listeProd, int nb); //fonction d'affichage de produit

//Code pour Saisir
PROD saisir_produit(void); // fonction de saisie de produit
void saisir_liste_produit(int nb, PROD * listeProd); //fonction saisie de liste produit

//Code de Tri
void tri_liste_produit(int nb, PROD* listeProduit);
void permutation (PROD* listeProduit, PROD prdTmp, int i, int posimax);

//Code pour fichier et la sauvegarde des produit
void sauvegarde(PROD* listProduit, int nb);

//Code pour une nouveau Produit
void inserer_un_produit(int nb,PROD* listeProduit, PROD new_prod);
int rechercher_produit(int nb, PROD*listProduit, PROD prd_recheche );//rechercher un produit dans une liste de produit
int supprimer_produit(int nb, PROD*listProduit, PROD prd_recheche );
void copieProd(PROD prdSource, PROD*prDdestination);

//Code Bonnus
void Chargement();

#endif // GESTION_PRODUIT_H_INCLUDED
