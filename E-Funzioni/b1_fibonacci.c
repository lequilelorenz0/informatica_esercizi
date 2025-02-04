#include <stdio.h>


void fibonacci(int n) {
    int num1 = 0, num2 = 1, terminesucc;
    
    printf("Sequenza di Fibonacci fino a %d termini:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", num1);
        terminesucc = num1 + num2;
        num1 = num2;
        num2 = terminesucc;
    }
    
}

int main() {
    int num;
    
    printf("Inserisci un numero intero: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Inserire un numero intero positivo.\n");
    } else {
        fibonacci(num);
    }
    
    return 0;
}

