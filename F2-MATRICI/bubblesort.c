#include <stdio.h>

// Funzione per ordinare un array con Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { // Scambio se l'elemento è maggiore del successivo
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = 7;

    printf("Array originale:\n");
    printArray(arr, size);

    // Ordinamento con Bubble Sort
    bubbleSort(arr, size);

    printf("Array ordinato:\n");
    printArray(arr, size);

    return 0;
}