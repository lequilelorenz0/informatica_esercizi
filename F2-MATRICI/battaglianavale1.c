/**
 * @file es_battaglia_navale_step1.c
 * @brief Battaglia Navale - Step 1: Inizializzazione e visualizzazione del campo di gioco
 * @author Lequile Lorenzo
 * @version 3.0 06/04/25 Versione finale
 * 
 * @details
 * OBIETTIVO DELL'ESERCIZIO:
 * Creare la struttura base del gioco Battaglia Navale, implementando le funzioni
 * necessarie per inizializzare e visualizzare il campo di gioco.
 * 
 * ANALISI DEI REQUISITI:
 * 1. Creare una matrice di dimensione 5x5 per rappresentare il campo di gioco
 * 2. Inizializzare la matrice con il carattere '~' che rappresenta l'acqua
 * 3. Visualizzare il campo di gioco con indici di riga e colonna
 * 4. Utilizzare una struttura modulare con funzioni separate per inizializzazione e visualizzazione
 */

 #include <stdio.h>

 #define DIMENSIONE 7
 
 /* Prototipi delle funzioni */
 void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]);   //prototipo delle funzione
 void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
 
 int main() {
     char campo[DIMENSIONE][DIMENSIONE];
     
     // Inizializza il campo di gioco 
     inizializzaCampo(campo);
     
     // Visualizza il campo di gioco
     visualizzaCampo(campo);
     
     return 0;
 }
 
 void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]) {  //faccio un for per il campo e uso il tilde per disegnare l'acqua
     for (int i = 0; i < DIMENSIONE; i++) {
         for (int j = 0; j < DIMENSIONE; j++) {
             campo[i][j] = '~'; // uso l'acqua
         }
     }
 }
 
 void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE]) {  //faccio un for per visualizzare il campo
     printf("    ");
     for (int i = 0; i < DIMENSIONE; i++) {
         printf("%d ", i);
     }
     printf("\n");
     
     for (int i = 0; i < DIMENSIONE; i++) {
         printf("%d || ", i);
         for (int j = 0; j < DIMENSIONE; j++) {  //disegno lo schema
             printf("%c ", campo[i][j]);
         }
         printf("||\n");
     }
 }