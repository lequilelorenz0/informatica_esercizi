#include <stdio.h>

// Funzione che stampa la sequenza di Fibonacci fino al numero n
void fibonacci(int n) {
    int num1= 0, num2= 1, termsucc;
    
    if (n <= 0) {
        printf("Inserisci un numero positivo.\n");
        return;
    }

    printf("Sequenza di Fibonacci fino a %d: ", n);
    
    printf("%d ", num1);  // Stampa il primo numero
    for (int i = 1; i < n; i++) {
        termsucc= num1 + num2;
        printf("%d ", termsucc);
        num1 = num2;
        num2 = termsucc;
    }
    
}


int pari_dispari(int numero) {
    
    if ((numero & 1) == 0) {
        return 0;  // Pari
    } else {
        return 1;  // Dispari
    }
}

// Funzione che calcola la somma delle cifre di un numero
int sommaCifre(int numero) {
    int somma = 0;
    
    while (numero != 0) {
        somma += numero % 10;  // Aggiunge l'ultima cifra
        numero /= 10;           // Rimuove l'ultima cifra
    }
    
    return somma;
}

// Funzione che calcola la somma dei divisori propri di un numero
int sommaDivisori(int numero) {
    int somma = 0;
    
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            somma += i;
        }
    }
    
    return somma;
}

// Funzione che trova e stampa le coppie di numeri amici nel range 0-1500
void NumeriAmici(int max) {
    for (int i = 1; i <= max; i++) {
        int somma_i = sommaDivisori(i);
        if (somma_i > i && somma_i <= max) {
            int somma_somma_i = sommaDivisori(somma_i);
            if (somma_somma_i == i) {
                printf("Coppia di numeri amici: %d e %d\n", i, somma_i);
            }
        }
    }
}

// Funzione menu che gestisce la selezione dell'utente
int menu() {
    int scelta;
    printf("Seleziona un'opzione:\n");
    printf("1. Sequenza di Fibonacci\n");
    printf("2. Pari o Dispari\n");
    printf("3. Somma delle Cifre\n");
    printf("4. Coppie di Numeri Amici\n");
    printf("5. Esci\n");
    printf("Scelta: ");
    scanf("%d", &scelta);
    return scelta;
}

int main() {
    int scelta, numero;
    
    // Ciclo do-while che esegue il menu finché l'utente non sceglie di uscire
    do {
        scelta = menu();  // Chiamata alla funzione menu
        switch (scelta) {
            case 1:
                printf("Inserisci un numero per la sequenza di Fibonacci: ");
                scanf("%d", &numero);
                fibonacci(numero);
                break;
            case 2:
                printf("Inserisci un numero intero: ");
                scanf("%d", &numero);
                if (pari_dispari(numero) == 0)
                    printf("%d è pari.\n", numero);
                else
                    printf("%d è dispari.\n", numero);
                break;
            case 3:
                printf("Inserisci un numero intero: ");
                scanf("%d", &numero);
                printf("La somma delle cifre di %d è %d.\n", numero, sommaCifre(numero));
                break;
            case 4:
                NumeriAmici(1500);
                break;
            case 5:
                printf("ciao grazie per essere passato\n");
                break;  // Esce dal programma
            default:
                printf("Scelta non valida. Riprova.\n");
        }
    } while (scelta != 5);  // Continua finché l'utente non sceglie di uscire

    return 0;
}
