#include <stdio.h>

// Prototipo della funzione
float area_rettangolo(float x, float y);

int main() {
    float base, altezza, area;

    
    printf("Inserisci la base del rettangolo: ");
    scanf("%f", &base);

    printf("Inserisci l'altezza del rettangolo: ");
    scanf("%f", &altezza);

    // Calcolo dell'area
    area = area_rettangolo(base, altezza);

    // Output del risultato
    printf("L'area del rettangolo è: %.2f\n", area);

    return 0;
}

// Definizione della funzione
float area_rettangolo(float base, float altezza) {
    return base * altezza;
}
