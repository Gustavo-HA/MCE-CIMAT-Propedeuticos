// Hecho por Gustavo Hernandez Angeles
#include <stdlib.h>
#include <stdio.h>

int combinatorio(unsigned int n, unsigned int r){
    if (r==0 || r ==n){
        return 1;
    }
    return combinatorio(n-1,r-1) + combinatorio(n-1,r);
}

void main(){
    unsigned int n,r;
    printf("Este programa calcula el numero combinatorio de n sobre m, introduzca ambos numeros: ");
    scanf("%d %d", &n, &r);
    printf("El numero combinatorio de %d tomado en %d es %d",n,r,combinatorio(n,r));
}