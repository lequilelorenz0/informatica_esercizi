#include <stdio.h>
int main(){
float media;
int crediti;
int voto_finale;

printf("inserisci la media dello studente");
scanf("%f",&media);

printf("inserisci i crediti dello studente");
scanf("%d",&crediti);
voto_finale = media;

if(media>= 28 && crediti >24){
    voto_finale +=2;
}
else if(media>=25 && media <=27 && crediti>= 18 && crediti <=24)
{
    voto_finale +=1;
}
printf ("media iniziale:%.2f\n",media);
printf ("crediti ottenuti:%d\n",crediti);
printf("il voto finale: %d\n",voto_finale);
return 0;
}
