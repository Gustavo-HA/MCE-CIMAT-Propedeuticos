// Gustavo Hernández Angeles
#include <stdio.h>
#include <stdlib.h>

// Funciones prototipo

int minimo_pasos_posible_camino(int a, int b, int x, int y);
int min(int n,int m);


// Programa
int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    printf("%d:",minimo_pasos_posible_camino(a,b,0,0));
    return 0;
}


// Funciones 

int min(int n, int m){
    if (n<m) return n;
    return m;
}

int minimo_pasos_posible_camino(int a, int b, int x, int y){
    int distanciax=a-x, distanciay=b-y;
    int i;

    for (i = 1; !(x == a && y == b);i++){
        // Damos paso en x
        if (abs(distanciax) == i){
            x += distanciax;
            distanciax = 0;
        }else{
            x += -i*abs(distanciax)/distanciax ;
            distanciax = a-x;
        }
        if (abs(distanciay) == i){
            y += distanciay;
            distanciay = 0;
        }else{
            y += -i*abs(distanciay)/distanciay ;
            distanciay = b-y;
        }
        printf("(%d, %d)",x,y);
    }
    return i+1;
}















