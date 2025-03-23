#include <stdio.h>

// Funzione per ordinare un array usando il Bubble Sort
void ordina(int v[], int n) {
    int temp;
    // Ciclo esterno: controlla ogni elemento dell'array
    for (int i = 0; i < n - 1; i++) {
        // Ciclo interno: confronta ogni coppia di elementi adiacenti
        for (int j = 0; j < n - i - 1; j++) {
            // Se gli elementi sono fuori ordine, li scambia
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

// Funzione per stampare un array
void stampaArray(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]); // Stampa l'elemento corrente
    }
    printf("\n");
}

int main() {
    // Definizione e inizializzazione dell'array
    int v[] = {5, 2, 8, 1, 3};
    int n = 5; // Lunghezza dell'array

    // Stampa l'array prima dell'ordinamento
    printf("Array prima dell'ordinamento:\n");
    stampaArray(v, n);

    // Chiamata alla funzione per ordinare l'array
    ordina(v, n);

    // Stampa l'array dopo l'ordinamento
    printf("Array dopo l'ordinamento:\n");
    stampaArray(v, n);

    return 0; // Fine del programma
}
