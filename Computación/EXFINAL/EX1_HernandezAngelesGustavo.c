// Gustavo Hernández Angeles
#include <stdio.h>
#include <stdlib.h>
#define n 1000000

// Funciones prototipo

int tripletas(char* entrada);



// Programa
int main(){
    char entrada[n];

    printf("Introduzca la cadena: ");
    fgets(entrada, sizeof(entrada), stdin);

    printf("%d", tripletas(entrada));

    return 0;
}

// Funciones 

int strlen(char *s){
    int c;
    for(c=0; *s!='\0'; s++) 
    c++;
    return c;
}


int tripletas(char* entrada){
    char abecedario[26][1] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    int contador = 0;
    int i = 0;
    for (i = 0;i<strlen(entrada)-2;i++){
        if (entrada[i] == 'A' || entrada[i] == 'C' || entrada[i] == 'G' || entrada[i] == 'T' ){
            if (entrada[i+1] == 'A' || entrada[i+1] == 'C' || entrada[i+1] == 'G' || entrada[i+2] == 'T' ){
                if (entrada[i+2] == 'A' || entrada[i+2] == 'C' || entrada[i+2] == 'G' || entrada[i+2] == 'T' ){
                    contador++;
                    i += 2;
                }
            }
        }
    }
    return contador;
}










