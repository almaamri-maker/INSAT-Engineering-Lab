#include<stdio.h>
#include<stdlib.h>

typedef struct Noeud {
    int valeur;
    struct Noeud* suivant;
    struct Noeud* precedent;
} Noeud;

typedef Noeud* liste;

liste creation () {
    return NULL;
}

liste ajoutdeb(liste l ,int x ){
    liste l1 = (liste)malloc(sizeof(Noeud));
    if(l1==NULL) return l;
    l1->valeur = x;
    l1->precedent = NULL;
    l1->suivant = l;
    if (l != NULL) {
        l->precedent = l1;
    }
    return l1;
}

liste ajoutfin(liste l ,int x ){
    liste lf = (liste)malloc(sizeof(Noeud));
    lf->valeur = x;
    lf->suivant = NULL;
    lf->precedent = NULL;
    if (l==NULL)
        return lf;
    liste l1 = l;;
    while (l1->suivant != NULL)
    {
        l1=l1->suivant;
    }
    lf->precedent=l1;
    l1->suivant=lf;
    return(l);
}

liste ajoutpos(liste l,int pos,int x){
    liste a=l;
    liste l1;
    l1=(liste)malloc(sizeof(Noeud));
    l1->valeur=x;
    l1->precedent=NULL;
    l1->suivant=NULL;
    for(int i=1;i<pos-1;i++){
        a=a->suivant;
    }
    l1->suivant=a->suivant;
    a->suivant=l1;
    l1->precedent=a;
    a->suivant->precedent=l1;
    return l;
}
liste suppdeb(liste l){
    if (l==NULL) return NULL;
    liste l1=l->suivant;
    if (l1 != NULL) {
        l1->precedent=NULL;
    }
    free(l);
    return(l1);
}
liste suppfin(liste l){
    if (l==NULL) return NULL;
    if (l->suivant==NULL) {
        free(l);
        return NULL;
    }
    liste l1=l;
    liste l2=NULL;
    while (l1->suivant!=NULL)
    {
        l2=l1;
        l1=l1->suivant;
    }
    l2->suivant=NULL;
    free(l1);
    return(l2);
}
liste suppos(liste list,int pos){
    int i;
    liste a=list;
    liste l=NULL;
    for(i=1;i<pos-1;i++)
    {
        l=a;
        a=a->suivant;
    }
    liste l1=a->suivant;
    l->suivant=l1;
    l1->precedent=l;
    free(a);
    return(list);
}

void affichage(liste l){
    if(l==NULL){
        printf("liste vide");
        return;
    }
    liste l1=l;
    while(l1 != NULL){
        printf("%d ",l1->valeur);
        l1 = l1->suivant;
    }
    printf("\n");
}
void affichageprec(liste l) {

    if(l==NULL){
        printf("liste vide");
        return;
    }
    liste l1 = l;
    while (l1->suivant != NULL) {
        l1 = l1->suivant;
    }
    while (l1 != NULL) {
        printf("%d ",l1->valeur);
        l1=l1->precedent;
    }
    printf("\n");
}

