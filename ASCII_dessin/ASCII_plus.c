//
//  ASCII_plus.c
//  Gestion_Stock
//
//  Created by Alexandre Puiseux on 18/01/2023.
//


#include "gestion_produit.h"


void Chargement()
{
    printf("\n\n\t\t\t\t\t - ");
    for (int i = 0; i <2; i++)
    {
        sleep(1);
        printf("######################################################");
    }
    printf(" - \n\n");
}

void affiche_gestion ()
{
    
    printf("\t\t\t\t\t\t\t\t\t\t\t _____           _   _               _____ _             _    \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|  __ \\         | | (_)             /  ___| |           | |   \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| |  \\/ ___  ___| |_ _  ___  _ __   \\ `--.| |_ ___   ___| | __ \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| | __ / _ \\/ __| __| |/ _ \\| '_ \\   `--. \\ __/ _ \\ / __| |/ / \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| |_\\ \\  __/\\__ \\ |_| | (_) | | | | /\\__/ / || (_) | (__|   < \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t \\____/\\___||___/\\__|_|\\___/|_| |_| \\____/ \\__\\___/ \\___|_|\\_\\ \n");
}

void affiche_gestion_Fourniseur (void)
{
    
    printf("\t\t\t\t\t\t\t\t\t\t\t______ _      _     _            ______                     _                     \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|  ___(_)    | |   (_)           |  ___|                   (_)                    \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| |_   _  ___| |__  _  ___ _ __  | |_ ___  _   _ _ __ _ __  _ ___  ___ _   _ _ __ \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|  _| | |/ __| '_ \\| |/ _ \\ '__| |  _/ _ \\| | | | '__| '_ \\| / __|/ _ \\ | | | '__|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| |   | | (__| | | | |  __/ |    | || (_) | |_| | |  | | | | \\__ \\  __/ |_| | |   \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\\_|   |_|\\___|_| |_|_|\\___|_|    \\_| \\___/ \\__,_|_|  |_| |_|_|___/\\___|\\__,_|_|   \n");
}
