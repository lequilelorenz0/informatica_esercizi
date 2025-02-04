#include <stdio.h>

// Funzione che calcola la somma dei divisori di un numero
int sommaDivisori(int numero) {
    int somma = 0;
    
    // Calcola la somma dei divisori  del numero
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {  // Se i è un divisore di numero
            somma += i;
        }
    }
    
    return somma;
}

// Funzione che trova e stampa le coppie di numeri amici nel range 0-1500
void NumeriAmici(int max) {
    for (int i = 1; i <= max; i++) {
        int somma_i = sommaDivisori(i);
        if (somma_i > i && somma_i <= max) {  // Evita duplicati e numeri fuori range
            int somma_somma_i = sommaDivisori(somma_i);
            if (somma_somma_i == i) {  // Verifica se i e somma_i sono numeri amici
                printf("Coppia di numeri amici: %d e %d\n", i, somma_i);
            }
        }
    }
}

int main() {
    int max = 1500;

    // Trova e stampa le coppie di numeri amici
    NumeriAmici(max);
    
    return 0;
}

