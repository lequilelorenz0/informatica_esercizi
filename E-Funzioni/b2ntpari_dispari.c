#include <stdio.h>

// Funzione per determinare se un numero è pari o dispari facendo sottrazioni con il while
int pari_dispari(int numero) {
    while (numero >= 2) {
        numero -= 2;
    }
    if (numero == 0) return 0;
    return 1;
}

int main() {
    int num;
    
    printf("Inserisci un numero intero: ");
    scanf("%d", &num);
    
    int risultato = pari_dispari(num);
    if (risultato == 0)
        printf("Il numero %d è pari\n", num);
    else
        printf("Il numero %d è dispari\n", num);
    
    return 0;
}