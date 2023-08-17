// Hecho por Gustavo Hernandez Angeles
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n = 1000;
    int resultados[11] = {0};
    int contador[11]={[0 ... 10] = 0};
    int resultconsec[11]={[0 ... 10] = 0};
    int actual=0, anterior=0;
    int suma;
    srand(time(NULL));

    for (int i=0;i<n;i++){
        suma = (rand()% 6 +1) + (rand()%6+1);
        actual = suma;
        if (actual==anterior){
            resultconsec[suma-2] = ++contador[suma-2];
        }else{
            int contador[11]={[0 ... 10] = 0};
        }
        anterior = actual;
        
        resultados[suma-2]++;
        }

    printf("Resultados suma de los dados: \n");
    for (int i=2;i<13;i++){
        printf("%d\t%d",i,resultados[i-2]);
        puts("");
    }


    int aux=0;
    int i=0;
    int indx;
    for ( i=0;i<12;i++){
        if (resultconsec[i]>=aux){
            aux = resultconsec[i];
            indx = i;
        }
    }
    printf("El numero que mas se genero consecutivamente es el %d con un total de %d veces",indx+2,aux+1);

}

