#include<stdio.h>
#include<stdlib.h>

typedef struct Noeud {
    int valeur;
    struct Noeud *suivant;
} Noeud;

typedef Noeud* liste;

liste creation() {
    return NULL;
}

liste insertion_debut(liste l, int x) {
    liste nouvnoeud = malloc(sizeof(Noeud));
    if (nouvnoeud == NULL) return l;
    nouvnoeud->valeur = x;
    nouvnoeud->suivant = l;
    return nouvnoeud;
    
}

liste insertion_fin(liste l, int x) {
    liste nouvnoeud = malloc(sizeof(Noeud));
    if (nouvnoeud == NULL) return l;
    nouvnoeud->valeur=x;
    nouvnoeud->suivant=NULL;
    if (l==NULL)
        return nouvnoeud;
    liste courant = l;
    while (courant->suivant!=NULL) {
        courant = courant->suivant;
    }
    courant->suivant = nouvnoeud;
    return l;
}

int taille_liste(liste l) {
    liste courant = l;
    int taille = 0;
    while (courant != NULL) {
        taille++;
        courant = courant->suivant;
    }
    return taille;
}

liste insertion_milieu(liste l, int x, int pos) {
    int taille = taille_liste(l);
    if (pos < 1 || pos > taille+1) {
        return l;
    }
    if (pos==1) {
        return insertion_debut(l,x);
    }
    liste nouvnoeud = malloc(sizeof(Noeud));
    if (nouvnoeud == NULL) return l;
    nouvnoeud->valeur = x;
    nouvnoeud->suivant = NULL;
    if (l==NULL) {
        return nouvnoeud;
    }
    
    liste courant=l;
    for (int i = 1; i < pos - 1; i++) {
        courant = courant->suivant;
    }
    nouvnoeud->suivant = courant->suivant;
    courant->suivant = nouvnoeud;
    return l;
}

liste suppression_debut(liste l) {
    if (l==NULL) {
        return NULL;
    }
    liste noeud = l;
    l = l->suivant;
    free(noeud);
    return l;
}

liste suppression_fin(liste l) {
    if (l == NULL) {
        return NULL;
    }
    if (l->suivant == NULL){
        free(l);
        return NULL;
    }
    liste courant=l;
    while (courant->suivant->suivant != NULL) {
        courant = courant->suivant;
    }
    free(courant->suivant);
    courant->suivant=NULL;
    return l;
}

liste suppression_milieu(liste l,int pos) {
    int taille=taille_liste(l);
    if (pos==1)
        return suppression_debut(l);
    if (pos==taille)
        return suppression_fin(l);
    if (pos<1 || pos>taille+1)
        return l;
    liste courant=l;
    for (int i = 1; i < pos - 1; i++) {
        courant = courant->suivant;
    }
    liste noeud = courant->suivant;
    courant->suivant = noeud->suivant;
    free(noeud);
    return l;
}

void affichage(liste l) {
    liste courant = l;
    while (courant != NULL) {
        printf("%d ->",courant->valeur);
        courant = courant->suivant;
    }
    printf("NULL\n";)
}
