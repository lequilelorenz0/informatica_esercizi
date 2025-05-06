#include <stdio.h>

// Funzione per la ricerca binaria
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;  // Elemento trovato
        if (arr[mid] < target) left = mid + 1;  // Cerca a destra
        else right = mid - 1;  // Cerca a sinistra
    }

    return -1;  // Elemento non trovato
}

int main() {
    int arr[] = {2, 3, 4, 10, 15, 20, 25};
    int size = 7;
    int target = 10;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Elemento %d trovato in posizione %d\n", target, result);
    else
        printf("Elemento %d non trovato\n", target);

    return 0;
}