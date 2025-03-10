
/** ****************************************************************************************
* \mainpage "array_a3"
* @brief Ricerca di un Elemento
Dichiari e inizializzi un array di 15 numeri con numeri random tra 0 e 20
Chieda all'utente un numero da cercare
Verifichi se il numero è presente nell'array
Stampi la posizione del numero se presente, altrimenti un messaggio appropriato.

* 
* @author Lorenzo Lequile
* @version 1.0 10/03/25 versione iniziale
* @version 2.0 10/03/25 versione finale
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vet_rand(int vet[], int n);
void vet_stampa(int vet[], int n);

int main() {
    int vet[15];

    // inizializzazione del generatore di numeri casuali
    // altrimenti i numeri generati saranno sempre gli stessi
    srand(time(NULL)); 

    // inizializzo il vettore con numeri casuali
    vet_rand(vet, 15);
    vet_stampa(vet, 15);
    printf("\n");   
}

/**
 * Stampa un vettore di interi
 * @param vet il vettore da stampare
 * @param n il numero di elementi del vettore
 */
void vet_stampa(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}


void vet_rand(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        //generiamo un numero random tra 0 a 20 
        vet[i] = rand() % 20;
    }
}
