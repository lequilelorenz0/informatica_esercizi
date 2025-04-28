@echo off
IF "%1"=="" (
    ECHO Utilizzo: benvenuto.bat [nome]
    PAUSE
    EXIT /B 1
)
ECHO Benvenuto, %1!
PAUSE
#include <stdio.h>

int main() {
    int ora;

    printf("Inserisci l'orario (0-24): ");
    scanf("%d", &ora);

    if (ora < 0 || ora > 24) {
        printf("Orario non valido.\n");
        return 1;
    }

    if (ora >= 0 && ora <= 18) {
        printf("Buongiorno Massimo!\n");
    } else {
        printf("Buonasera Massimo!\n");
    }

    return 0;
}
