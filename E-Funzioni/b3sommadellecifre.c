#include <stdio.h>

// Funzione che calcola la somma delle cifre di un numero
int sommaCifre(int numero) {
    int somma = 0;
    
    
    while (numero != 0) {
        somma += numero %10;  // Aggiunge l'ultima cifra alla somma
        numero /= 10;           // Rimuove l'ultima cifra
    }
    
    return somma;
}

int main() {
    int numero;
    
    // Chiede all'utente di inserire un numero
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);
    
    // Calcola e stampa la somma delle cifre
    printf("La somma delle cifre di %d è %d.\n", numero, sommaCifre(numero));
    
    return 0;
}
