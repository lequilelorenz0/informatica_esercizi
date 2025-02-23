#include <stdio.h>

// Funzione per calcolare il fattoriale in modo iterativo
int fattoriale(int n) {
    int risultato = 1;
    for (int i = 1; i <= n; i++) {
        risultato *= i;
    }
    return risultato;
}

int main() {
    int numero;

    // Richiesta dell'input all'utente
    printf("Inserisci un numero intero non negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Il fattoriale è definito solo per numeri non negativi.\n");
    } else {
        printf("Il fattoriale di %d è %d\n", numero, fattoriale(numero));
    }

    return 0;
}
