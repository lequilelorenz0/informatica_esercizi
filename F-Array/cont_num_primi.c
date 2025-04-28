#include "stdio.h" 
#include <stdlib.h>
#define N 100


int num_primo(int x);
int conta_prim(int v[]); 

    


int main()
{
    int v[N];
    int r;
    int x = 7;
    r=num_primo(x);
    printf("%d\n",r);
    int z=conta_prim(v);
    printf("\nNumeri primi:%d\n",z);
}


int num_primo(int x)
{
    int cont;
    int cont2;
    for(cont=1;cont<= x;cont ++)
    {
        if (x % cont== 0)
        {cont2 ++;
        }
    }
        if (cont2==2)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    
}
int conta_prim(int v[])
{

    int r;
    int cont=0;
    for(int i=0;i<=N;i++)
    {
    if(r==1)
    {cont++;
    }
    }
    return cont;
}

    


   
