//
//  gestion_date.c
//  Gestion_Stock
//
//  Created by Alexandre Puiseux on 08/02/2023.
//

#include "gestion_produit.h"

DATE saisir_date (void)
{
    DATE datetmp;
    
    printf(" Jour : ");
    scanf("%d", &datetmp.jour);
    fflush(stdin);
    
    printf(" Mois : ");
    scanf("%d", &datetmp.mois);
    fflush(stdin);
    
    printf(" Anee : ");
    scanf("%d", &datetmp.annee);
    fflush(stdin);
    
    return datetmp;
}

void affiche_date(DATE datetmp){
    printf(" %d / %d / %d \n", datetmp.jour, datetmp.mois, datetmp.annee);
}

