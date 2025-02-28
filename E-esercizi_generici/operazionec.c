#include <stdio.h>

int main() {
    int a, b, temporanea;

    // Richiesta dei valori delle variabili
    printf("Inserisci il valore della variabile a: ");
    scanf("%d", &a);

    printf("Inserisci il valore della variabile b: ");
    scanf("%d", &b);

    // Stampa dei valori prima dello scambio
    printf("Prima dello scambio:\n");
    printf("a = %d, b = %d\n", a, b);

    // Scambio dei valori utilizzando una variabile temporanea
    temporanea = a;
    a = b;
    b = temporanea;

    // Stampa dei valori dopo lo scambio
    printf("Dopo lo scambio:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
