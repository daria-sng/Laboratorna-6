#include <stdio.h>
#include <stdlib.h> 
#define M 4
#define N 5

int main() { 
    system("chcp 65001");

    int array_A[M][N]={
        1, 9, 0 , 12, -15,
        4, -7, 9, 5, 23, 
        -19, 14, 8, -3, 11,
        29, -56, 12, -37, 0
    };

    int array_B[M][N]={
        67, 0, 6, 17, -9,
        45, -11, 13, 5, 0,
        -1, 18, 32, 10, -7, 
        43, -8, 12, 21, 52
    };

    int array_sum[M][N];
    int i, j;

    for(i=0; i<M; i+=1){
        for(j=0; j<N; j+=1){
            array_sum[i][j] = array_A[i][j] + array_B[i][j];
        }
    }

    puts("Матриця С: ( Результат додавання двох матриць А і B ) ");

    for(i=0; i<M; i+=1){
        for(j=0; j<N; j+=1){
            printf("%d ", array_sum[i][j]);
        }
        printf("\n");
    }

    int array_C[M][N];

    for(i=0; i<M; i+=1){
        for(j=0; j<N; j+=1){
            array_C[j][i] = array_sum[i][j];
        }
    }
    
    puts("\nТранспонована матриця С: ");

    for(i=0; i<N; i+=1){
        for(j=0; j<M; j+=1){
            printf("%d ", array_C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}