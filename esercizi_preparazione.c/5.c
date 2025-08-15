#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Il numero deve essere positivo.\n");
        return 1;
    }

    printf("I divisori di %d sono:\n", numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}