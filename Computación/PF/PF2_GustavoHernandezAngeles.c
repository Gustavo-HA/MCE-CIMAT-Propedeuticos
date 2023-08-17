#include<stdio.h>
#include<stdlib.h>

void suma(float a1,float b1,float a2,float b2, float *a3, float *b3);
void resta(float a1,float b1,float a2,float b2, float *a3, float *b3);
void multiplicacion(float a1,float b1,float a2,float b2, float *a3, float *b3);
void division(float a1,float b1,float a2,float b2, float *a3, float *b3);

int main(){
    float a1,b1,a2,b2,a3,b3;
    printf("\tCalculadora de numeros complejos A+iB\n");
    printf("Ingrese los valores de a y b para cada numero complejo separados por un espacio.\n");
    printf("Ingrese el primer numero complejo: "); scanf("%f %f",&a1,&b1);
    printf("Ingrese el segundo numero complejo: "); scanf("%f %f",&a2,&b2);
    suma(a1,b1,a2,b2,&a3,&b3);
    printf("Suma \t\t=\t %f + i(%f)\n",a3,b3);
    resta(a1,b1,a2,b2,&a3,&b3);
    printf("Resta \t\t=\t %f + i(%f)\n",a3,b3);
    multiplicacion(a1,b1,a2,b2,&a3,&b3);
    printf("Multiplicacion \t=\t %f + i(%f)\n",a3,b3);
    division(a1,b1,a2,b2,&a3,&b3);
    printf("Division \t=\t %f + i(%f)",a3,b3);
    return 0;
}

void suma(float a1,float b1,float a2,float b2, float *a3, float *b3){
    *a3 = a1+a2;
    *b3 = b1+b2;
}

void resta(float a1,float b1,float a2,float b2, float *a3, float *b3){
    *a3 = a1-a2;
    *b3 = b1-b2;
}

void multiplicacion(float a1,float b1,float a2,float b2, float *a3, float *b3){
    *a3 = a1*a2 - b1*b2;
    *b3 = a1*b2 + a2*b1;
}

void division(float a1,float b1,float a2,float b2, float *a3, float *b3){
    *a3 = (a1*a2 + b1*b2)/(a2*a2 + b2*b2);
    *b3 = (a2*b1-a1*b2)/(a2*a2+b2*b2);
}

