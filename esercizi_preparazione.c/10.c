#include <stdio.h>
int main(){
    int somma = 15;
    printf("coppie ordinate che fanno 15 sono:%d\n",somma);
    for (int i = 0; i < somma; i++)
    {
       int j = somma - i;
        printf("(%d, %d)", i, j);
    }
    
    return 0;
}
