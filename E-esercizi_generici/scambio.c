#include <stdio.h>
void scambio(int *x,int *y);

int main()
{
 int c;
 for(c=1;c<=3;c++);
 {
    int num1,num2;
    printf("inserisci un numero");
    scanf("%d",&num1);
    printf("inserisci un numero");
    scanf("%d",&num2);
    scambio(&num1,&num2);
    printf("%d%d",num1,num2);
 }



}
void scambia(int *x,int *y);
{
    int t;
    *t = *x;
    *x = y;
    *y = t;

}