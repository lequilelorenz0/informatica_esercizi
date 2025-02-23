#include <stdio.h>
int poligono(int num_lati, int misura)
if(num_lati>2){
  if(num_lati==3) {
    printf("e un triangolo");
    else if(num_lati==4){printf ("e un quadrato")}
    else if(num_lati==5){printf ("e un pentagono")}
  } else { printf("ha più di 5 lati");
}
else {
    printf("Numero di lati insufficiente.\n");
    return 0;
}
int main()
if (scelta == 6) {
    int lati, misura;
    printf("Inserisci numero di lati e misura del lato: ");
    scanf("%d %d", &lati, &misura);
    int perimetro = poligono(lati, misura);
    if (perimetro > 0)
        printf("Perimetro: %d\n", perimetro);
