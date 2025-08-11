#include <stdio.h>
// lati triangolo
int main()

{
    int l1,l2,l3;
    printf("inserisci lato");
    scanf("%d",&l1);

     printf("inserisci lato");
    scanf("%d",&l2);

     printf("inserisci lato");
    scanf("%d",&l3);

    if(l1 == l2 && l2 == l3){
        printf("il triangolo e equilatero");
    }
    else if(l1 == l2 || l2 == l3 || l1 == l3){
        printf("il triangolo e isoscele");
    }
    else{
        ("scaleno");
    }
    return 0;
}