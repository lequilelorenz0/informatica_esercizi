#include <stdio.h>

int main() {
    // Definiamo la dimensione manualmente
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    // Iteriamo attraverso l'array e sommiamo i suoi elementi
    for (int i = 0; i < 5; i++) { // Usiamo direttamente la dimensione nota
        sum += arr[i]; 
    }

    // Stampiamo il risultato
    printf("La somma degli elementi è: %d\n", sum);

    return 0;
}
