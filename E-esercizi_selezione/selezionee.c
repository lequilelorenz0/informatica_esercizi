#include <stdio.h>

int main() {
    float lato1, lato2, lato3;

    // Richiedi l'input all'utente
    printf("Inserisci la misura del primo lato del triangolo: ");
    scanf("%f", &lato1);

    printf("Inserisci la misura del secondo lato del triangolo: ");
    scanf("%f", &lato2);

    printf("Inserisci la misura del terzo lato del triangolo: ");
    scanf("%f", &lato3);

    // Controlla il tipo di triangolo
    if (lato1 == lato2 && lato2 == lato3) {
        printf("Il triangolo è equilatero.\n");
    } else if (lato1 == lato2 || lato1 == lato3 || lato2 == lato3) {
        printf("Il triangolo è isoscele.\n");
    } else {
        printf("Il triangolo è scaleno.\n");
    }

    return 0; 
}
