#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 5
#define C 4

void stampa_matrici(int m[][C],int dim_righe,int dim_colonne);
int main()
{
    int mat1 [R][C];
    srand(time(NULL));
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            mat1[i][j]= rand() % 11;


        }
        
    }
    stampa_matrici(mat1,R,C);
    
}
void stampa_matrici(int m[][C],int dim_righe,int dim_colonne )
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}
