//
//  main.c
//  Gestion_Stock
//
//  Created by Alexandre Puiseux on 10/01/2023.
//
#include "gestion_produit.h"

int main()
{
    //Déclaration des variables
    FOUR Fourniseur [MAX_SIZE_TAB_PRODUIT];
    
    int nb;
    int result;
    int choix;
    int fin = 1;
    
    affiche_gestion_Fourniseur ();
    printf("\n\n\n");
    
    Chargement();
    
    while(fin != 0)
    {
        do {
            printf("\nQue voulez vous faire ?\n");
            printf("\t 1 - Afficher la liste des fourniseurs \n");
            printf("\t 2 - Trier la liste des fourniseurs \n");
            printf("\t 3 - Sauvegarder la nouvelle liste des fourniseurs \n");
            printf("\t 4 - Ajouter un nouveau fourniseur \n");
            printf("\t 5 - Rechercher un fourniseur \n");
            printf("\t 6 - Supprimer un fourniseur \n");
            printf("\t 7 - Afficher les produits d'un fourniseur \n");
            printf("\t 8 - Quitter\n");
            scanf("%d", &choix);
        }while(choix <= 0 || choix >= 10 );
        
        switch(choix)
        {
            case 1 :
                break;
            case 2 :
                break;
            case 3 :
                break;
            case 4 :
                break;
            case 5 :
                break;
            case 6 :
                break;
            case 7 :printf("\t\nQuelle fourniseur souhaitez vous voir les produits ? ");
                scanf("%d", &Fourniseur->code);
                
                break;
            case 8 :
                break;
            default: printf("\nPas encore fait ...");
                break;
        }
        
    }
    return 0;
}
