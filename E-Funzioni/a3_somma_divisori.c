#include <stdio.h>

// Prototipo della funzione
int somma_divisori(int numero);

int main() {
    int numero, somma;

    // Input dell'utente
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    // Calcolo della somma dei divisori
    somma = somma_divisori(numero);

    // Output del risultato
    printf("La somma dei divisori di %d è: %d\n", numero, somma);

    return 0;
}

// Definizione della funzione
int somma_divisori(int numero) {
    int somma = 0;

    // Trova tutti i divisori di 'numero'
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            somma += i;
        }
    }

    return somma;
}
