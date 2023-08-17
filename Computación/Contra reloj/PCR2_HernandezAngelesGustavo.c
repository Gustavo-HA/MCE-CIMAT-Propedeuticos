#include <stdlib.h>
#include <stdio.h>


#define diassemana 7

int main(){
    unsigned int d;
    char dias_semana[diassemana][10] = {"Martes","Miercoles","Jueves","Viernes","Sabado","Domingo","Lunes"};

    printf("Dias despues del martes 1 de enero del 2000: ");scanf("%d",&d);

    printf("%d dia/s despues del 1 de enero del 2000 sera un %s",d,dias_semana[d%7]);
    return 0;
}