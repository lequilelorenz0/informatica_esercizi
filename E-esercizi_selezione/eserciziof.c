#include <stdio.h>

int main() {
    int i = 2;

    printf("Numeri primi tra 1 e 100:\n");

    do {
        int j = 2;
        int divisibile = 0;

        do {
            divisibile += (i % j == 0 && i != j);
            j++;
        } while (j <= i / 2);

        if (!divisibile) {
            printf("%d ", i);
        }

        i++;
    } while (i <= 100);

    printf("\n");
    return 0;
}
