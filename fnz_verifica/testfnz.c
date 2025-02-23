#include <stdio.h>

int poligono(int lati, int misura) {
    if (lati > 2) {
        if (lati == 3) printf("Triangolo\n");
        else if (lati == 4) printf("Quadrato\n");
        else if (lati == 5) printf("Pentagono\n");
        else printf("Poligono con piu' di 5 lati\n");
        return lati * misura;
    } else {
        printf("Numero di lati insufficiente.\n");
        return 0;
    }
}

int prodotto_dispari(int x) {
    int prodotto = 1, n;
    for (int i = 0; i < x; i++) {
        printf("Inserisci un numero intero: ");
        scanf("%d", &n);
        if (n % 2 != 0)
            prodotto *= n;
    }
    return prodotto;
}

int leggere(int y) {
    int n, count = 0;
    printf("Inserisci numeri interi (termina con 0):\n");
    scanf("%d", &n);
    while (n != 0) {
        if (n % y == 0)
            count++;
        scanf("%d", &n);
    }
    return count;
}

int conta(char x) {
    char c;
    int count = 0;
    printf("Inserisci caratteri (termina con '%c'):\n", x);
    scanf(" %c", &c);
    while (c != x) {
        count++;
        scanf(" %c", &c);
    }
    return count;
}

void stampa(int righe, int colonne, char car) {
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("%c", car);
        }
        printf("\n");
    }
}

int main() {
    int scelta;
    printf("Scegli la funzione da eseguire (6-10): ");
    scanf("%d", &scelta);

    if (scelta == 6) {
        int lati, misura;
        printf("Inserisci numero di lati e misura del lato: ");
        scanf("%d %d", &lati, &misura);
        int perimetro = poligono(lati, misura);
        if (perimetro > 0)
            printf("Perimetro: %d\n", perimetro);
    } else if (scelta == 7) {
        int x;
        printf("Inserisci quanti numeri leggere: ");
        scanf("%d", &x);
        printf("Prodotto dei numeri dispari: %d\n", prodotto_dispari(x));
    } else if (scelta == 8) {
        int y;
        printf("Inserisci il parametro y: ");
        scanf("%d", &y);
        printf("Multipli di %d inseriti: %d\n", y, leggere(y));
    } else if (scelta == 9) {
        char x;
        printf("Inserisci il carattere di terminazione: ");
        scanf(" %c", &x);
        printf("Caratteri immessi prima di '%c': %d\n", x, conta(x));
    } else if (scelta == 10) {
        int righe, colonne;
        char car;
        printf("Inserisci righe, colonne e carattere: ");
        scanf("%d %d %c", &righe, &colonne, &car);
        stampa(righe, colonne, car);
    } else {
        printf("Scelta non valida.\n");
    }

    return 0;
}
