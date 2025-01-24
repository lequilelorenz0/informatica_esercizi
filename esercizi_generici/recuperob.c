#include <stdio.h>

int main() {
    char carattere;

    // Richiede l'inserimento di un carattere
    printf("Inserisci un carattere: ");
    carattere = getchar();

    // Stampa il carattere e i suoi codici ASCII in decimale ed esadecimale
    printf("Carattere inserito: %c\n", carattere);
    printf("Codice ASCII in decimale: %d\n", carattere);
    printf("Codice ASCII in esadecimale: %x\n", carattere);

    return 0;
}
