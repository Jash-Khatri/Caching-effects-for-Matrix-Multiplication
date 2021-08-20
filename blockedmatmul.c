#include<stdio.h>
#include <stdlib.h>

int min(int a,int b){
if(a>b){
    return b;
}
else{
    return a;
}

}


int main(int argc,char *argv[])
{
    char *a = argv[1];
    char *b = argv[2];
    int N = atoi(a);
    int BLK = atoi(b);
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

    int i0,j0,k0;

    for (i0 = 0; i0 < N; i0++)
    {
        for (j0 = 0; j0 < N; j0++)
        {
            res[i][j] = 0;
            for (k0 = 0; k0 < N; k0++){

            for(i=i0;i<min(i0+BLK-1,N);i++ ){
                for(j=j0;j<min(j0+BLK-1,N);j++){

                    for(k=k0;k<min(k0+BLK-1,N);k++ ){

                        res[i][j] += mat1[i][k]*mat2[k][j];
                    }

                }
            }
            }
                //res[i][j] += mat1[i][k]*mat2[k][j];
        }
    }
/*
    printf("Result matrix is \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           printf("%d ", res[i][j]);
        printf("\n");
    }*/

    return 0;
}
