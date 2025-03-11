/** ****************************************************************************************
* \mainpage "array_b1"
* @brief Istogramma
Dicharare un array di 10 numeri interi
inizializzare l’array con numeri random compresi tra 0 e 20
Visualizzi un istogramma orizzontale usando il carattere '*', dove il numero di asterischi corrisponde al valore di ciascun elemento

 
* 
* @author Lorenzo Lequile
* @version 1.0 10/03/25 versione iniziale
* @version 2.0 11/03/25 versione finale
*/
#include <stdio.h>   
#include <stdlib.h>  // Libreria per generazione numeri casuali e gestione della memoria
#include <time.h>    // Libreria per inizializzare il generatore di numeri casuali

// Definizione di costanti valore max e array
#define CONTENUTO 10
#define MAX 20

int main(int arcont, char *arv[]) {
    int array[CONTENUTO]; // Dichiarazione di un array di 10 elementi
    int i, j;

    // Inizializzazione del generatore di numeri casuali con il tempo corrente
    srand(time(NULL));

    // Generazione e stampa dei valori casuali
    printf("Array generato:\n");
    for (i = 0; i < CONTENUTO; i++) {
        // Assegna un valore casuale tra 0 e MAX_VALUE
        array[i] = rand() % (MAX + 1);
        // Stampa il valore generato
        printf("%2d ", array[i]);
    }
    printf("\n\n"); // Va a capo dopo aver stampato tutti i valori

    // Stampa dell'istogramma 
    printf("ecco a te l' Istogramma:\n");
    for (i = 0; i < CONTENUTO; i++) {
        // Stampa il valore dell'oggetto dell'array
        printf("%2d || ", array[i]);
        // Stampa un numero di '*' pari al valore dell'oggetto dell'array
        for (j = 0; j < array[i]; j++) {
            printf("*");
        }
        printf("\n"); // vai a capo
    }

    return 0; // Termine del programma 
}
