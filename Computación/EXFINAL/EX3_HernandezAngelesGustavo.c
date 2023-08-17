// Gustavo Hernández Angeles
#include <stdio.h>
#include <stdlib.h>

// Funciones prototipo

int MCD(int p, int q);
int phi(int n);
void intervalo(int p, int q, int *m, int *n);

// Programa
int main(){
    int p, q, m, n;

    scanf("%d %d",&p,&q);
    intervalo(p,q,&m,&n);
    printf("%d %d",m,n);

    return 0;
}



// Funciones 


int MCD(int p, int q) {
    int resto;

    while (q != 0) {
        resto = p % q;
        p = q;
        q = resto;
    }

    return p; 
}

int phi(int n){
    int contador = 0;
    for (int i = 1;i<n;i++){
        if (MCD(i,n)==1) contador ++;
    }
    return contador;
}

void intervalo(int p, int q, int *m, int *n){
    int maximophi = 0;
    int maximo_n;
    int i;
    for (i = p; i<q+1;i++){ 
        if (phi(i)==maximophi){
            continue;
        }
        if (phi(i)>maximophi){
            maximophi = phi(i);
            maximo_n = i;
        }
    }
    *m = maximophi;
    *n = maximo_n;
}








