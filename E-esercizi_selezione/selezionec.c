#include <stdio.h>

int main() {
    float spesa, importo_finale;

   
    printf("Inserisci l'ammontare della spesa: ");
    scanf("%f", &spesa);

    if (spesa > 100) {
        importo_finale = spesa * 0.90; // Sconto del 10%
    } else if (spesa > 50) {
        importo_finale = spesa * 0.95; // Sconto del 5%
    } else {
        importo_finale = spesa; // Nessuno sconto
    }

    // Visualizza l'importo effettivo da pagare
    printf("L'importo effettivo da pagare è: %.2f euro\n", importo_finale);

    return 0;
}
