#include <stdio.h>

// Prototipi delle funzioni
float area_rettangolo(float x, float y);
int mcd(int a, int b);
int somma_divisori(int numero);
void menu();

// Funzione principale
int main() {
    menu(); // Avvia il menu
    return 0;
}

// Definizione della funzione per calcolare l'area del rettangolo
float area_rettangolo(float base, float altezza) {
    return base * altezza;
}

// Definizione della funzione per calcolare il MCD (algoritmo di Euclide)
int mcd(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

// Definizione della funzione per calcolare la somma dei divisori
int somma_divisori(int numero) {
    int somma = 0;
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            somma += i;
        }
    }
    return somma;
}

// Definizione della funzione menu
void menu() {
    int scelta;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Calcola l'area di un rettangolo\n");
        printf("2. Calcola il MCD di due numeri\n");
        printf("3. Calcola la somma dei divisori di un numero\n");
        printf("0. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1: {
                float base, altezza;
                printf("Inserisci la base del rettangolo: ");
                scanf("%f", &base);
                printf("Inserisci l'altezza del rettangolo: ");
                scanf("%f", &altezza);
                float area = area_rettangolo(base, altezza);
                printf("L'area del rettangolo è: %.2f\n", area);
                break;
            }
            case 2: {
                int num1, num2;
                printf("Inserisci il primo numero: ");
                scanf("%d", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &num2);
                int risultato = mcd(num1, num2);
                printf("Il massimo comune divisore di %d e %d è: %d\n", num1, num2, risultato);
                break;
            }
            case 3: {
                int numero;
                printf("Inserisci un numero: ");
                scanf("%d", &numero);
                int somma = somma_divisori(numero);
                printf("La somma dei divisori di %d è: %d\n", numero, somma);
                break;
            }
            case 0:
                printf("Uscita dal programma. Arrivederci!\n");
                break;
            default:
                printf("Opzione non valida. Riprova.\n");
                break;
        }
    } while (scelta != 0);
}
