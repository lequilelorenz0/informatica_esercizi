#include <stdio.h>

int main() {
    int num1, num2;

    // Richiedi l'input all'utente
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);


    if (num1 == num2) {
        printf("I due numeri sono uguali: %d\n", num1);
    } else {
    
        if (num1 > num2) {
            printf("Il maggiore dei due numeri è: %d\n", num1);
            printf("Il minore dei due numeri è: %d\n", num2);
        } else {
            printf("Il maggiore dei due numeri è: %d\n", num2);
            printf("Il minore dei due numeri è: %d\n", num1);
        }
    }

    return 0; 
}
