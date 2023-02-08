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
    FOUR new_Fourniseur;
    
    int nb = 0;
    int result;
    int choix;
    int fin = 1;
    
    affiche_gestion_Fourniseur ();
    printf("\n\n\n");
    do{
        printf("Nombre de fourniseur a ajoutez : ");
        scanf("%d", &nb);
        
    }while(nb < 0 || nb  >MAX_SIZE_TAB_PRODUIT);
    
    saisir_liste_fourniseur(nb, Fourniseur);
    
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
            case 1 : affiche_liste_fourniseur(Fourniseur, nb);
                break;
            case 2 :tri_liste_fourniseur(nb, Fourniseur);
                break;
            case 3 :sauvegarde(Fourniseur, nb);
                break;
            case 4 :inserer_fourniseur(nb,Fourniseur,new_Fourniseur);
                nb ++;
                break;
            case 5 :
                printf("Code du fourniseur rechercher : ");
                scanf("%d", &new_Fourniseur.code);
                result = rechercher_fourniseur(nb, Fourniseur, new_Fourniseur);
                printf("\nLe Fourniseur que vous rechercher est a la position numero : %d \n", result +1);
                affiche_fourniseur(Fourniseur[result]);
                break;
            case 6 :nb-=supprimer_fourniseur(nb, Fourniseur, new_Fourniseur);
                printf("\nVoici votre nouvelle liste :\n");
                affiche_liste_fourniseur(Fourniseur, nb);
                break;
            case 7 :printf("\t\nQuelle fourniseur souhaitez vous voir les produits ? ");
                scanf("%d", &Fourniseur->code);
                break;
            case 8 : // accet au Produit
                break;
            default: printf("\nPas encore fait ...");
                break;
        }
        
    }
    return 0;
}
