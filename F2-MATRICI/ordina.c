#include <stdio.h>

// Funzione per ordinare un array con Selection Sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        // Trova il minimo nella parte non ordinata
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Scambia l'elemento minimo con il primo elemento non ordinato
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Funzione per stampare un array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int size = 5;

    printf("Array originale:\n");
    printArray(arr, size);

    // Ordinamento con Selection Sort
    selectionSort(arr, size);

    printf("Array ordinato:\n");
    printArray(arr, size);

    return 0;
}