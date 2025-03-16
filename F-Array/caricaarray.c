#include <stdio.h>
#define N 8
void carica_array(int v []);
void stampa_array(int v []);

     
int main()
{
int voti[N];
float m;
carica_array(voti);
stampa_array(voti);
printf("\n %.2f",m);
}
void carica_array(int v[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("dammi un numero da inserire");
        scanf("%d",&v[i]);
    }
}
void stampa_array(int v[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d ",v[i]);
    }
}
    
   

    

                   