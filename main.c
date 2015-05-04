#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30
#define FNAME "elenco.csv"

// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) {
    FILE *puntafile;
    studente elenco;
    int i;
    puntafile=fopen("elenco.csv", "w");
    
    if (puntafile == NULL) {
        printf("Impossibile aprire il file.");
    }
    else {
        fprintf(puntafile, "Nome;Cognome;Eta';Classe\n");
        for (i=0;i<N;i++) {
            printf("Studente %d:\n", i+1);
            printf("Nome: ");
            scanf("%s", elenco.nome);
            printf("Cognome: ");
            scanf("%s", elenco.cognome);
            printf("Eta': ");
            scanf("%d", &elenco.eta);
            printf("Classe: ");
            scanf("%s", elenco.classe);
            fprintf(puntafile, "%s;%s;%d;%s\n", elenco.nome, elenco.cognome, elenco.eta, elenco.classe);
        }
    }
    return (EXIT_SUCCESS);
}