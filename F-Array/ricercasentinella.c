#include <stdio.h>

int ricercaConSentinella(int v[], int n, int x) {
    v[n] = x; // Inserisco la sentinella alla fine dell'array
    int i = 0;
    while (v[i] != x) {
        i++;
    }
    if (i < n) {
        return i; // Elemento trovato, restituisco la posizione
    } else {
        return -1; // Elemento non trovato
    }
}

int main() {
    int v[] = {5, 2, 8, 1, 3};
    int n = 5; // Lunghezza dell'array
    int x = 8;

    // Aggiungo spazio per la sentinella
    int vConSentinella[6];
    for (int i = 0; i < n; i++) {
        vConSentinella[i] = v[i];
    }

    int risultato = ricercaConSentinella(vConSentinella, n, x);

    if (risultato != -1) {
        printf("Elemento %d trovato in posizione %d.\n", x, risultato);
    } else {
        printf("Elemento %d non trovato.\n", x);
    }

    return 0;
}
