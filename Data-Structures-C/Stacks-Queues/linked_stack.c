#include <stdio.h>
#include<stdlib.h>

typedef struct noeud {
    int valeur ;
    struct noeud* suivant;
} noeud;

typedef noeud* pile;

pile creation() {
    return NULL;
}

int estvide(pile p) {
    return p == NULL;
}

pile empiler (pile p,int x) {
    pile nouveau=(pile)malloc(sizeof(noeud));
    if (nouveau==NULL) {
        printf("erreur d'allocation mémoire");
        return p;
    }
    nouveau->valeur = x;
    nouveau->suivant = p;
    return nouveau;
}

pile depiler(pile p) {
    if (estvide(p)) {
        printf("pile vide");
        return NULL;
    }
    pile tmp = p;
    p = p->suivant;
    free(tmp);
    return p;
}

int longueur(pile p) {
    pile tmp = p;
    int l=0;
    while (tmp != NULL) {
        l++;
        tmp = tmp->suivant;
    }
    return l;
}


int sommet(pile p) {
    if (estvide(p)) return -1;
    return p->valeur;
}


void afficher(pile p) {
    if (estvide(p)){
        printf("Pile vide \n");
        return;
    }
    pile courant = p;
    while (courant != NULL){
        printf("%d ->",courant->valeur);
        courant = courant->suivant;
    }
    printf("NULL\n");
}


void decomposer(pile *p,pile *p2,pile *p3) {
    pile tmp = creation();
    while (*p != NULL) {
        tmp= empiler(tmp,sommet(*p));
        if (sommet(*p) % 2 == 0) {
            *p2 = empiler(*p2,sommet(*p));
        }
        else {
            *p3=empiler(*p3,sommet(*p));
        }
        *p=depiler(*p);
    }
    while (tmp != NULL) {
        *p=empiler(*p,sommet(tmp));
        tmp=depiler(tmp);
    }

}




pile fusion(pile p1,pile p2) {
    pile tmp=creation();
    while (p1!=NULL && p2!=NULL) {
        if (sommet(p1)<sommet(p2)) {
            tmp=empiler(tmp,sommet(p1));
            p1=depiler(p1);
        }
        else {
            tmp=empiler(tmp,sommet(p2));
            p2=depiler(p2);
        }
    }

    while (p2!=NULL){
        tmp=empiler(tmp,sommet(p2));
        p2=depiler(p2);
    }
    
    while (p1!=NULL){
        tmp=empiler(tmp,sommet(p1));
        p1=depiler(p1);
    }
    
    
    pile p3=creation();
    while (tmp!=NULL) {
        p3=empiler(p3,sommet(tmp));
        tmp=depiler(tmp);
    }
    free(tmp);
    return p3;
}



