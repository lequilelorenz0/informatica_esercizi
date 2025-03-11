/** ****************************************************************************************
* \mainpage "array_b1"
* @briefTermometro
Crea un array di 24 float per rappresentare le temperature orarie (una per ogni ora)
Fai inserire all'utente le temperature per ogni ora
Trova e visualizza:
La temperatura massima e l'ora in cui è stata registrata
La temperatura minima e l'ora in cui è stata registrata
L'escursione termica (differenza tra massima e minima)
La temperatura media della giornata
* 
* @author Lorenzo Lequile
* @version 1.0 10/03/25 versione iniziale
* @version 2.0 11/03/25 versione finale
*/
#include <stdio.h>

#define ORE_GIORNALIERE 24

int main(int arcont, char *arv[]) {
    float temperatura[ORE_GIORNALIERE];
    int i;
    float max_temp, min_temp, media_temp, temp_escursione;
    int max_ora, min_ora;
    float somma = 0;

    // Inserimento delle temperature per ogni ora
    printf("Inserisci le temperature per ogni ora (0-23):\n");
    for (i = 0; i < ORE_GIORNALIERE; i++) {
        printf("Ora %d: ", i);
        scanf("%f", &temperatura[i]);
    }

    // Inizializzazione dei valori di massimo e minimo
    max_temp = min_temp = temperatura[0];
    max_ora = min_ora = 0;

    // Calcolo di temperatura massima, minima e somma per la media
    for (i = 0; i < ORE_GIORNALIERE; i++) {
        // Aggiorna la temperatura massima
        if (temperatura[i] > max_temp) {
            max_temp = temperatura[i];
            max_ora = i;
        }
        // Aggiorna la temperatura minima
        if (temperatura[i] < min_temp) {
            min_temp = temperatura[i];
            min_ora = i;
        }
        // Somma per calcolo della media
        somma += temperatura[i];
    }

    // Calcolo escursione termica e media
    temp_escursione = max_temp - min_temp;
    media_temp = somma / ORE_GIORNALIERE;

    // Stampa dei risultati
    printf("\n--- Risultati ---\n");
    printf("Temperatura massima: %.2f°C registrata alle ore %d\n", max_temp, max_ora);
    printf("Temperatura minima: %.2f°C registrata alle ore %d\n", min_temp, min_ora);
    printf("Escursione termica: %.2f°C\n", temp_escursione);
    printf("Temperatura media: %.2f°C\n", media_temp);

    return 0;
}
