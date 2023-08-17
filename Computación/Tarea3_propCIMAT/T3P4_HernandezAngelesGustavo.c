// Hecho por Gustavo Hernandez Angeles
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define S 3

float calcularDeterminante(unsigned int N,float matriz[N][N]);
float multiplicacion_escalar(unsigned int N, float *matriz[][N],int k);
float imprimir_matriz(unsigned int N, float matriz[][N]);

int main() {
    float matriz[S][S] = {
        {1, 0, 23},
        {0, 1, 1},
        {3, 41, 23}
    }; 

    float determinante = calcularDeterminante(S,matriz);
    printf("El determinante de la matriz es: %.2f\n", determinante);

    float k=2;
    float **pter;
    pter = (float **)malloc(S*sizeof(float*));
    for (int i=0;i<S;i++){
        pter[i] = (float*)malloc(S*sizeof(float));
    }

    multiplicacion_escalar(S,&matriz,k);
    printf("La matriz multiplicada por %f resulta en: \n",k);
    imprimir_matriz(S,matriz);


    return 0;
}

float calcularDeterminante(unsigned int N,float matriz[N][N]) {
    float det = 0.0;

    if (N == 1) {
        det = matriz[0][0];
    } else {
        for (int k = 0; k < N; k++) {
            float submatriz[N - 1][N - 1];
            for (int i = 1; i < N; i++) {
                int j1 = 0;
                for (int j = 0; j < N; j++) {
                    if (j == k)
                        continue;
                    submatriz[i - 1][j1] = matriz[i][j];
                    j1++;
                }
            }
            det += matriz[0][k] * calcularDeterminante(N-1,submatriz) * ((k % 2 == 0) ? 1 : -1);
        }
    }

    return det;
}


float multiplicacion_escalar(unsigned int N, float *matriz[][N],int k){
    for (int i=0;i<N;i++){
        for (int j = 0 ; j<N ; j++){
            (*matriz)[i][j] *= k;
        }
    }
}


float imprimir_matriz(unsigned int N, float matriz[][N]){
    for (int i=0;i<N;i++){
        for (int j = 0 ; j<N ; j++){
            printf("%f\t",matriz[i][j]);
        }
        puts("");
    }
}
