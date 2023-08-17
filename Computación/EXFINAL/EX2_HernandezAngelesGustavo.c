// Gustavo Hernández Angeles
#include <stdio.h>
#include <stdlib.h>

// Funciones prototipo

int esprimo(int n);
int contadordepares(int n);


// Programa
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",contadordepares(n));
    return 0;
}


// Funciones 

int esprimo(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;  
}

int contadordepares(int n){ 
    int contador=0;
    for (int i = 1;i<n/2+1;i++){
        if (esprimo(i)){
            for (int j =n/2;j<n;j++){
                if (esprimo(j)){
                    if (i+j==n) contador++;
                }
            }
        }
    }
    return contador;
}










