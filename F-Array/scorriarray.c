#include <stdio.h>

void scorriArray(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: %d\n", i, v[i]);
    }
}

int main() {
    int v[] = {5, 2, 8, 1, 3};
    int n = 5; // Lunghezza dell'array

    printf("Elementi dell'array:\n");
    scorriArray(v, n);

    return 0;
}
