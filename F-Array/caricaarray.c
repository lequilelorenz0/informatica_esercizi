#include <stdio.h>
#define N 7
void carica_array(int v []);
void stampa_array(int v []);
float calcola_media(int v[]);
     
int main()
{
int voti[N];
float m;
carica_array(voti);
stampa_array(voti);
m=calcola_media(voti);
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
float calcola_media(int v[])
{
    int i;
    float m=0.0;
    for(i=0;i<N;i++)
    {
       m=v[i]+m;
        
    }
    m=m/N;
   
    return m;

}
void copia_pari(int v1[],int v2[])
{
    for(int i=0,j=0;i<N;i++)
    {
        if(v1[i] % 2 == 0 )
        {
            v2[i]=v1[i];
        
        }
        else 
        {
            v2[i]=0;
        }
    }
}
                    