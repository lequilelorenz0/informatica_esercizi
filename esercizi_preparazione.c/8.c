#include <stdio.h>
int num_primi(int n){
    if (n < 2)
    
        return 0;
    
    for (int i = 2; i * i <=n; i++)
    {
    if (n % i == 0)
        return 0;
    
    }
    return 1;
}
void stampa_primi(int max) {
    printf("i numeri primi da 0 a %d sono:\n",max);
    for (int i = 2; i <= max; i++)
    {
        if(num_primi(i)){
            printf("%d",i);
        }

    }
   printf("\n");

}
int main(){
    int numero;
    printf("inserisci un numero positivo");
    scanf("%d",&numero);
    if (numero < 2)
    {
        printf("non ci sono numeri primi %d\n",numero);

    }
    else {
     stampa_primi(numero);}
     return 0;
}