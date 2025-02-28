#include <stdio.h>

// Funzione per calcolare la potenza base^esponente
int potenza(int base, int esponente) {
    int risultato = 1;
    for (int i = 0; i < esponente; i++) {
        risultato *= base;
    }
    return risultato;
}

int main() {
    int base, esponente;

    // Richiesta dei valori all'utente
    printf("Inserisci la base: ");
    scanf("%d", &base);
    printf("Inserisci l'esponente (numero intero non negativo): ");
    scanf("%d", &esponente);

    if (esponente < 0) {
        printf("L'esponente deve essere un numero non negativo.\n");
    } else {
        printf("%d elevato alla %d è %d\n", base, esponente, potenza(base, esponente));
    }

    return 0;
}
