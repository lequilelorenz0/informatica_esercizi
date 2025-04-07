/**
 * @file es_battaglia_navale_step2.c
 * @brief Battaglia Navale - Step 2: Posizionamento casuale della nave sul campo
 * @author Lequile Lorenzo
 * @version 1.0 01/04/25 Versione iniziale
 * 
 * @details
 * OBIETTIVO DELL'ESERCIZIO:
 * Arricchire il programma del Step 1 con la funzionalità di posizionamento casuale
 * di una nave di lunghezza predefinita sul campo di gioco.
 * 
 * ANALISI DEI REQUISITI:
 * 1. Utilizzare un generatore di numeri casuali per posizionare la nave
 * 2. La nave deve avere una lunghezza di 3 caselle (definita come costante)
 * 3. Implementare due modalità di posizionamento: orizzontale e verticale
 * 4. Garantire che la nave sia sempre completamente all'interno del campo
 * 5. Visualizzare il campo con la possibilità di mostrare o nascondere la nave
 * 6. La nave è rappresentata dal carattere '#' nella matrice
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMENSIONE 7
#define LUNGHEZZA_NAVE 3

/* Prototipi delle funzioni */

void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
void posizionaNave(char campo[DIMENSIONE][DIMENSIONE]);
void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
int main() {
    char campo[DIMENSIONE][DIMENSIONE];
    inizializzaCampo (campo);
    visualizzaCampo (campo);
    posizionaNave(campo);
    visualizzaCampo (campo);
}

/* Implementazione delle funzioni */
void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]) 
    {
        char c= '~';
        for(int i=0; i<DIMENSIONE;i++)
        { for(int j=0; j<DIMENSIONE;j++)
            { campo[i][j]= c ; }
         } }

void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE])
{           printf("    ");
    for (int i = 0; i < DIMENSIONE; i++) {
        printf("%d ", i);
    }
    printf("\n");
            for (int i = 0; i < DIMENSIONE; i++) {
                printf("%d || ", i);
                for (int j = 0; j < DIMENSIONE; j++) { 
                    printf("%c ", campo[i][j]);
                }
                printf("||\n");
            }
}
void posizionaNave(char campo[DIMENSIONE][DIMENSIONE])
{   int posizionamento;
    srand(time(NULL));
    posizionamento = rand() % 2;
   int righe = rand() % (DIMENSIONE-LUNGHEZZA_NAVE);
   int colonne = rand() % (DIMENSIONE-LUNGHEZZA_NAVE);
    if (posizionamento==1) //se 1 verticale
    {

        for (int i = 0; i < LUNGHEZZA_NAVE; i++) {
             {
                
                campo[righe][colonne] = '#';
                colonne++;  //contatore colonne se =1
            }
        }
    }
    else //se 0 orizzontale
    {
        for (int j = 0; j < LUNGHEZZA_NAVE; j++) {
            {
               
               campo[righe][colonne] = '#';
               righe++;  //contatore righe se =0
           }
       }
    }




}