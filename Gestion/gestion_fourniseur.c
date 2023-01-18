//
//  gestion_fourniseur.c
//  Gestion_Stock
//
//  Created by Alexandre Puiseux on 07/02/2023.
//

#include "gestion_produit.h"

int rechercher_fourniseur(int nb, FOUR * Fourniseur , FOUR four_recheche )
{
    int i = 0;
    int result = -1;
    
    
    while(i < nb && (four_recheche.code =! Fourniseur[i].code) )
    {
        i++;
    }
    
    if (i < nb)
    {
        result = i;
    }
    return result;
}
