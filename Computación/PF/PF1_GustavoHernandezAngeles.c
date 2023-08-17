#include<stdio.h>
#include <stdlib.h>

struct fecha {
    int dia;
    int mes;
    int anio;
};

int main(){ 
    struct fecha f1,f2;
    printf("Ingrese el dia, fecha y anio separados por un espacio.\n");
    printf("Ingrese la primera fecha:"); scanf("%d %d %d",&f1.dia,&f1.mes,&f1.anio);printf("\n");
    printf("Ingrese la segunda fecha:"); scanf("%d %d %d",&f2.dia,&f2.mes,&f2.anio);printf("\n");

    int dias_por_mes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int dia_del_anio1=0, dia_del_anio2=0;
    for (int i=0;i<f1.mes-1;i++){
        dia_del_anio1 += dias_por_mes[i];
    }
    dia_del_anio1 += f1.dia;
    for (int i=0;i<f2.mes-1;i++){
        dia_del_anio2 += dias_por_mes[i];
    }
    dia_del_anio2 += f2.dia;

    int diferenciadias = dia_del_anio2 - dia_del_anio1;
    if (f1.anio != f2.anio) diferenciadias = (f2.anio-f1.anio)*365 + (dia_del_anio2-dia_del_anio1);

    printf("Entre ambas fechas hay %d dia/s.",diferenciadias);
    return 0;
}
