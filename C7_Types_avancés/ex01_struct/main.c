#include <stdio.h>
#include <string.h>
typedef struct {
    char titre[100];
    char auteur[50];
    int anneePublication;
    int nbCopies;

} Livre;

Livre addBook(char *titre,
              char *auteur,
              int annee,
              int nbCopies) {
    Livre l1;
    strcpy(l1.titre, titre);
    strcpy(l1.auteur, auteur);
    l1.anneePublication = annee;
    l1.nbCopies = nbCopies;
    return l1;
}
void updateBook(Livre *l1, int changement){
    l1->nbCopies += changement;
}

void printBook(Livre l1){
    printf("Titre: %s\nAuteur: %s\nAnnée de Publication: %d\nNombre de Copies: %d\n", l1.titre, l1.auteur, l1.anneePublication, l1.nbCopies);
}
int main() {
    printf("Hello, World!\n");
    Livre livre = addBook("Le Petit Prince", "Antoine de Saint-Exupéry", 1943, 30);
    printBook(livre);
    updateBook(&livre, -5);
    printBook(livre);
    return 0;
}
