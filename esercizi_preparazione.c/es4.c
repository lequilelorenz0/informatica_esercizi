#include <stdio.h>
int main(){
    int num;
    int somma=0;
    int cont=0;
    int media;
    printf("inserisci una sequenza di interi(termina con 0)\n");
    do
    {
        scanf("%d",&num);
        if (num != 0)
        {
            somma += num;
         cont++;
       
        }
    
        

    } while (num != 0);

    if (cont>0)
    {
        media=somma/cont;
        printf("la media e %d",media);
    }
    else{
        printf("error");
    }
    return 0;
    
    
}