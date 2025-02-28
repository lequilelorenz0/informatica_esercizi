#include <stdio.h>

int main() {
    int num1, num2;

    // Richiedi l'input all'utente
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);

    // Controlla che i numeri siano distinti
    if (num1 == num2) {
        printf("Errore: i due numeri devono essere distinti.\n");
        
    }

    // Determina e stampa il maggiore dei due numeri
    if (num1 > num2) {
        printf("Il maggiore dei due numeri è: %d\n", num1);
    } else {
        printf("Il maggiore dei due numeri è: %d\n", num2);
    }

    return 0; // Termina il programma con successo
}
