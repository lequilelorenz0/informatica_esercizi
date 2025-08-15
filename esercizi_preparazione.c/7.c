#include <stdio.h>

    int somma_div(int num){
        if (num<=0)
        {
            return 0;
        }
        int somma = 0;
        for (int i = 1; i < num; i++){
        if (num % i == 0)
        {
             somma=somma+i;
        }                               
     
        
        }
          return somma; 
        

    }
int main(){
    int n = 12;
    printf("la somma dei divisori di %d e %d\n",n,somma_div(n));
return 0;
}

