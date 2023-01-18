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
    PROD listeProd[MAX_SIZE_TAB_PRODUIT];
    PROD new_prod ;
    PROD prd_recherche ;
    
    int nb;
    int result;
    int choix;
    int fin = 1;
    
    do
    {
        printf("Introduire le nombre de produit : ");
        scanf("%d",&nb);
    }
    while(nb<=0||nb>MAX_SIZE_TAB_PRODUIT);//Blindage
    
    //saisie des données
    saisir_liste_produit(nb,listeProd);
    
    while(fin != 0)
    {
        do {
            printf("\nQue voulez vous faire ?\n");
            printf("\t 1 - Afficher la liste \n");
            printf("\t 2 - Trier la liste \n");
            printf("\t 3 - Sauvegarder la liste \n");
            printf("\t 4 - Ajouter un nouveau produit \n");
            printf("\t 5 - Rechercher un produit \n");
            printf("\t 6 - Quitter\n");
            printf("\t 7 - Test : Chargement\n");
            scanf("%d", &choix);
        }while(choix <= 0 || choix >= 10);
        
        switch(choix)
        {
            case 1 : affiche_liste_produit(listeProd,nb);
                break;
            case 2 : tri_liste_produit(nb, listeProd);
                break;
            case 3 : sauvegarde(listeProd, nb);
                break;
            case 4 : inserer_un_produit(nb, listeProd, new_prod);
                break;
            case 5 :result = rechercher_produit(nb, listeProd, prd_recherche);
                if (result != 0)
                {
                    printf("\nLe produit que vous rechercher est a la position numero : %d ", result);
                }else{
                    printf("\nLe produit que vous rechercher est a la position numero : %d ", result);
                }
            case 6 : printf("Merci :)\n");
                fin = 0;
                break;
            case 7 : Chargement();
                break;
            default: printf("\nPas encore fait ...");
                break;
        }
        
    }
    //TO FINISH

    return 0;
}
