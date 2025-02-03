#include <stdio.h>

// Prototipo della funzione
int numero_cifre(int x);

// Funzione principale
int main() {
    int numero;
    printf("Inserisci un numero positivo (maggiore di 0): ");
    scanf("%d", &numero);

    int cifre = numero_cifre(numero);
    printf("Il numero di cifre in %d è: %d\n", numero, cifre);

    return 0;
}

// Definizione della funzione
int numero_cifre(int numero) {
    // Controllo se il numero è valido
    if (numero <= 0) {
        printf("Numero non valido. Inserire un numero positivo maggiore di 0: ");
        scanf("%d", &numero);
    }

    int cont = 0;
    while (numero > 0) {
        numero=numero/10; // Rimuovo l'ultima cifra
        cont++;
    }
    return cont;
}
