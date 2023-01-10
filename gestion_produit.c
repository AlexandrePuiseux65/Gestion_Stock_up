//
//  gestion_produit.c
//  Gestion_Stock
//
//  Created by Alexandre Puiseux on 10/01/2023.
//

#include "gestion_produit.h"

/**fonction d'affichage de produit
*/
void affiche_produit(PROD prd){
    printf("%s|%s|%f\n",prd.nom, prd.designation, prd.prix);
}
/*
Fonction d'affichage d'une liste de produit de taille nb
Cette fonction affiche ‡ partir d'un tableau de produit "listeProd"
PassÈ en argument de la fonction
le type de retour est vide (void)
*/
void affiche_liste_produit(PROD* listeProd, int nb){
    int i;
    for(i =0; i< nb;i++ ){
        affiche_produit(listeProd[i]);
    }
}
 /* Fonction de saisie de produit
    Elle saisie un produit temporaire et le retourne ‡ la fin de la saisie
 */
PROD saisir_produit(void){
    PROD prdtmp;
    printf("Introduire le nom : ");
    scanf("%s",prdtmp.nom);
    //prdtmp.nom[39] = '\0';
    fflush(stdin);
    printf("Introduire la designation : ");
    scanf("%s",prdtmp.designation);
    //prdtmp.nom[59] = '\0';
    fflush(stdin);
    printf("Introduire le prix : ");
    scanf("%f",&prdtmp.prix);

    return prdtmp;
}
/*
Fonction de saisie d'une liste de produit de taille nb
*/

void saisir_liste_produit(int nb, PROD * listeProd){
    int i;
    for(i=0; i< nb;i++){
        listeProd[i] = saisir_produit();
    }
}


void inserer_un_produit(int nb,PROD* listeProduit, PROD new_prod){

//TO DO

}

//rechercher un produit dans une liste de produit
//retourne l'index du produit dans le tableau listeProduit
//sinon -1
int rechercher_produit(int nb, PROD*listProduit, PROD prd_recheche ){
//to DO

    return 0;
}

int supprimer_produit(int nb, PROD*listProduit, PROD prd_recheche ){

//to do
    return 0;
}
