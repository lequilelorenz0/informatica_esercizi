/** ****************************************************************************************
* \mainpage "array_a2"
* @brief esercizi sugli array 
* 
* @author Lorenzo Lequile
* @version 1.0 10/03/25 versione iniziale
* @version 2.0 10/03/25 versione finale
*/

#include <stdio.h>

int main() {
    float somma;  //dicharazione somma e media
    float media;
    // Dichiarazione e inizializzazione dell'array
    float array[10]={1,2,3,4,5,6,7,8,9,10};
for (int i= 0;i <10;i++)
{
    printf("digita un numero"); //chiedi all'utente un numero da inserire
    scanf("%f",&array[i]); //visualizza array
    somma=somma+array[i]; //somma operazione
    media=somma/10.0; // media operazione
}
printf("la media e %f e la somma e %f",media,somma);  //visualizza risultati
return 0;
} 