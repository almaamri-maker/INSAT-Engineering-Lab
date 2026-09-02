#include <stdio.h>
#include <stdlib.h>

typedef struct noeud {
    int valeur;
    struct noeud *suivant;
} noeud;

typedef struct {
    noeud* tete;
    noeud* queue;
} file ;

void creation(file *f) {
    f->tete=NULL;
    f->queue=NULL;
}

int est_vide(file *f) {
    return ( f == NULL || f->tete == NULL)
}

void  enfiler(file *f,int x) {
    if (f == NULL) return;
    noeud* nouv=(noeud*)malloc(sizeof(noeud));
    if (nouv == NULL) {
        return;
    }
    nouv->valeur=x;
    nouv->suivant=NULL;
    
    if (f->tete == NULL) {
        f->tete=nouv;
        f->queue=nouv;
    }else {
        f->queue->suivant=nouv;
        f->queue=nouv;
    }
}

void defiler(file *f) {
    if (est_vide(f)) {
        return;}
    noeud* tmp = f->tete;
    f->tete = f->tete->suivant;
    if (f->tet == NULL){
        f->queue = NULL;
    }
    free(tmp);
}

void afficher(file *f) {
    if (est_vide(f)){
        printf("file vide\n");
        return;
    }
    noeud *courant = f->tete;
    while(courant !=NULL){
        printf("%d-> ", courant->valeur);
        courant = courant->suivant;
    }
    printf("NULL\n");
}
