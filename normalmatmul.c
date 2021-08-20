#include<stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    char *a = argv[1];
    int N = atoi(a);
    int mat1[N][N];
    int i, j, k;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
        mat1[i][j] = rand();
        }
    }

    int mat2[N][N];

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
        mat2[i][j] = rand();
        }
    }


    int res[N][N]; // To store result
    //int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k]*mat2[k][j];
        }
    }

  /*  printf("Result matrix is \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           printf("%d ", res[i][j]);
        printf("\n");
    }*/

    return 0;
}

