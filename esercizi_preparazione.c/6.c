#include <stdio.h>
float arearett(float base,float altezza){
    return base * altezza;
}
int main(){
    float base;
    float altezza;
    printf("inserisci la base");
    scanf("%f",&base);

    printf("inserisci l altezza");
    scanf("%f",&altezza);
    //calcolo area
    float area= arearett(base,altezza);
    printf("l'area e %2f",area);
    return 0;
}