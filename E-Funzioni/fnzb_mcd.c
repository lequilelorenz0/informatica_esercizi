#include <stdio.h>

// Prototipo della funzione
int mcd(int a, int b);

int main() {
    int num1, num2, risultato;

    // Input dell'utente
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    // Calcolo del MCD
    risultato = mcd(num1, num2);

    // Output del risultato
    printf("Il massimo comune divisore di %d e %d è: %d\n", num1, num2, risultato);

    return 0;
}

// Definizione della funzione
int mcd(int a, int b) {
    // Algoritmo di Euclide
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

