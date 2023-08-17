#include <stdio.h>
#include <stdlib.h>

#define n 3
#define m 3


void nuevamatriz(int a, int b, int M[n][m], int **N){
    // Hacemos un array con todos los elementos de la matriz
    int *elementos = malloc(n * m * sizeof(int));
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            *elementos = M[i][j];
            elementos++;
        }
    }

    // Prueba de como queda el array;
    //elementos = elementos-n*m;
    //for (int i = 0; i < n*m; i++) {
    //    printf("%d ",*elementos);
    //    elementos++;
    //}
    //puts("");
    

    // Llenamos la nueva matriz siguiendo el orden del arrya;
    elementos = elementos - n*m;
    int k = 0;
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            if (k>=n*m){
                N[i][j] = -1;
            }else{
                N[i][j] = *elementos;
                elementos++;
                k++;
            }
        }
    }
    free(elementos);
}



int main(){
    int M[n][m] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int a,b;
    printf("Introduce a y b: ");scanf("%d %d",&a,&b);

    int **N;
    N = (int **)malloc(sizeof(int*)*a);
    for (int i = 0;i<a;i++){
        N[i] = (int *)malloc(sizeof(int)*b);
    }

    nuevamatriz(a,b,M,N);

    // Visualizar la nueva matriz
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d\t", N[i][j]);
        }
        printf("\n");
    }

    // Liberar
    for (int i = 0; i < a; i++) {
        free(N[i]);
    }
    free(N);

    return 0;
}


