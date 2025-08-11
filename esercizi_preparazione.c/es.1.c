#include <stdio.h>
int main() {
    int n1, n2;
//richiesta numeri
printf("inserisci primo numero intero");
scanf("%d",&n1);

printf("inserisci secondo numero intero");
scanf("%d",&n2);

//verfica se sono diversi
if(n1==n2){
    printf("errore");
}
    else {
        
    

if(n1>n2) {
        printf("il maggiore e %d",n1);
}
else  {
     printf("il maggiore e %d",n2);
}
    }

return 0;
}






