/** ****************************************************************************************
* \mainpage "array a_1"
* @brief esercizi sugli array 
* 
* @author Lorenzo Lequile
* @version 1.0 10/03/25 versione iniziale
* @version 2.0 10/03/25 versione finale
*/

#include <stdio.h>

int main() {
    // Dichiarazione e inizializzazione dell'array
    int array[10]={1,2,3,4,5,6,7,8,9,10};

    // Visualizza insieme nell'array
    printf("dentro l'array:");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);  // Stampa ogni elemento dell'array
    }

    return 0;
}


