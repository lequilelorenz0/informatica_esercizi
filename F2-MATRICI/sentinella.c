#include <stdio.h>

// Funzione per la ricerca con sentinella
int sentinelSearch(int arr[], int size, int target) {
    int last = arr[size - 1];  // Salviamo l'ultimo elemento
    arr[size - 1] = target;  // Inseriamo la sentinella
    
    int i = 0;
    while (arr[i] != target) {
        i++;
    }

    // Ripristiniamo l'ultimo elemento
    arr[size - 1] = last;

    // Se trovato prima della posizione finale, è nel vettore originale
    if (i < size - 1 || arr[size - 1] == target) 
        return i;
    return -1;
}

int main() {
    int arr[] = {1, 4, 7, 9, 12, 16, 20};
    int size = 7;
    int target = 9;

    int result = sentinelSearch(arr, size, target);

    if (result != -1)
        printf("Elemento %d trovato in posizione %d\n", target, result);
    else
        printf("Elemento %d non trovato\n", target);

    return 0;
}