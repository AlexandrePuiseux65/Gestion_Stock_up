//
//  Fichier_sauvegarde.c
//  Gestion_Stock
//
//  Created by Alexandre Puiseux on 16/01/2023.
//


#include "gestion_produit.h"


void sauvegarde(FOUR* listFournisseur, int nb)
{
    // Création et ouverture d'un fichier
    int i;
    int j;
    FILE* sauvegarde = NULL;
    sauvegarde = fopen("ListedesFournisseurs.txt", "w");

    if(sauvegarde == NULL)
    {
        printf("ERREUR DANS LE FICHIER DE SAUVEGARDE");
        system("cls");
    }
    else
    {
        for(i=0; i<nb; i++)
        {
            //
            fprintf(sauvegarde," - Code Fournisseur %d\n",listFournisseur[i].code);
            fprintf(sauvegarde," - Telephone %ld",listFournisseur[i].telephone);
            fprintf(sauvegarde,"\t - Adresse :%d %s %s %d %s\n",listFournisseur[i].Adresse_fourniseur.Numero_rue,listFournisseur[i].Adresse_fourniseur.nomRue,listFournisseur[i].Adresse_fourniseur.ville,listFournisseur[i].Adresse_fourniseur.codePostale,listFournisseur[i].Adresse_fourniseur.pays);
                
            for(j=0; j<10; j++)
            {
                fprintf(sauvegarde,"\t\t -> %s | %s | %f\n",listFournisseur[i].Produit[j].nom,listFournisseur[i].Produit[j].designation,listFournisseur[i].Produit[j].prix );
                fprintf(sauvegarde,"\t\t -> Code %d\n",listFournisseur[i].Produit[j].detaille_produit.code);
                fprintf(sauvegarde,"\t\t -> TVA %f\n",listFournisseur[i].Produit[j].detaille_produit.prix_TVA);
                fprintf(sauvegarde,"\t\t -> Quantitée %f\n",listFournisseur[i].Produit[j].detaille_produit.QteStq);
                fprintf(sauvegarde,"\t - Date Limite %d : %d : %d \n",listFournisseur[i].Produit[j].detaille_produit.Date_limite_Data.jour,listFournisseur[i].Produit[j].detaille_produit.Date_limite_Data.mois,listFournisseur[i].Produit[j].detaille_produit.Date_limite_Data.annee);
            }
        if (fgetc(sauvegarde)=='EOF')
        {
            printf("Fin de fichier\n");
        }
        }
    }
    
    fclose(sauvegarde);
}

