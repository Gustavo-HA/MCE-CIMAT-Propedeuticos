// Hecho por Gustavo Hernandez Angeles
#include <stdlib.h>
#include <stdio.h>

void burbuja(int lista[], size_t longitud){
    int aux;
    for (int i=0;i<longitud-1;i++){
        for (int j=0;j<longitud-i-1;j++){
            if (lista[j] > lista[j+1]){
                aux = lista[j];
                lista[j] = lista[j+1];
                lista[j+1] = aux;
            }
        }
    }
}

int main(){
    int nums[] = {1, 9, 8, 34, 21, 39, 12, 23, 10, 3};
    size_t longitud = sizeof(nums)/sizeof(nums[0]);
    printf("Lista original");
    for (int i=0;i<longitud;i++){
        if (i % 10 == 0)
            puts("");
        printf( "%d ", nums[ i ] );
    }
    puts("");
    burbuja(nums,longitud);

    printf("Lista ordenada");
    for (int i=0;i<longitud;i++){
        if (i % 10 == 0)
            puts("");
        printf( "%d ", nums[ i ] );
    }
}