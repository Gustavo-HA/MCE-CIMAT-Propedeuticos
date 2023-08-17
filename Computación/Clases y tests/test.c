#include <stdio.h>

int main(){
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(float*));
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(double));

    char *cadenaptr = "hola";
    printf("%p\n",cadenaptr);
    printf("%s\n",cadenaptr);
    cadenaptr++;
    printf("%p\n",cadenaptr);
    printf("%s\n\n",cadenaptr);
    
    char cadena[50] = "hola";
    printf("%p\n",cadena);
    printf("%s\n",cadena);
}