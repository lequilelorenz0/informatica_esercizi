#include <stdio.h>
float media (int,int);
int main()
{
  
    int a,b;
    float risultato;
    printf("inserisci un  numero");
    scanf("%d",&a);
    printf("inserisci un secondo numero ");
      scanf("%d",&b);
      risultato=media(a,b);
      printf("%f",risultato);

}
float media(int x,int y)
{
    float somma;
    somma=(x+y)/2.0;
    return somma;
}
