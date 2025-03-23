#include <stdio.h>

// Funzione per fare lo shift a sinistra di un array
void shiftSinistra(int v[], int n) {
    int temp = v[0]; // Salvo il primo elemento dell'array
    // Ciclo per spostare ogni elemento di una posizione a sinistra
    for (int i = 0; i < n - 1; i++) {
        v[i] = v[i + 1]; // Sposto l'elemento successivo in posizione corrente
    }
    v[n - 1] = temp; // Inserisco il primo elemento alla fine dell'array
}

// Funzione per stampare un array
void stampaArray(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]); // Stampa l'elemento corrente
    }
    printf("\n"); // Va a capo dopo la stampa dell'array
}

int main() {
    // Definizione e inizializzazione dell'array
    int v[] = {5, 2, 8, 1, 3};
    int n = 5; // Lunghezza dell'array

    // Stampa l'array prima dello shift
    printf("Array prima dello shift a sinistra:\n");
    stampaArray(v, n);

    // Eseguo lo shift a sinistra
    shiftSinistra(v, n);

    // Stampa l'array dopo lo shift
    printf("Array dopo lo shift a sinistra:\n");
    stampaArray(v, n);

    return 0; // Termina il programma correttamente
}
