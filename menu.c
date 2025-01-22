#include <stdio.h>

int main() {
    int scelta;

    do {
        // Visualizzo il menu
        printf("\nMenu:\n");
        printf("1. verdure\n");
        printf("2. carne\n");
        printf("3. dolci\n");
        printf("0. Uscita\n");
        printf("Inserisci la tua scelta:.");

        // Legge la scelta dell'utente
        scanf("%d", &scelta);

        // Gestisce la scelta dell'utente
        switch (scelta) {
            case 1:
                printf("Hai scelto: le verdure\n");
                break;
            case 2:
                printf("Hai scelto la carne\n");
                break;
            case 3:
                printf("Hai scelto: i dolci\n");
                break;
            case 0:
                printf("Stai uscendo dal programma...\n");
                break;
            default:
                printf("Scelta non valida, leggi bene.\n");
                break;
        }

    } while (scelta != 0); // Continuo finché l'utente non sceglie 0

    //saluto finale
    printf("\nGrazie per aver provato il nostro menù. Arrivederci!\n");

    return 0;
}
