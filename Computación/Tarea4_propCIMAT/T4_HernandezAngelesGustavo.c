#include <stdio.h>
#include <stdlib.h>

//MENU
char* concatenar(char *cadena1, char *cadena2);
int palindromo(char* cadena1);
char* invertir(char* cadena);
int buscar_en_cadena(char* cadena1, char* cadena2);

//LISTA N-ESIMO MAYOR.
int nesimomayor(unsigned int n, int *a,int longitud);


int main(){
    // Menu 
    char cadena1[50],cadena2[50];
    int eleccion;
    do{
        printf("MENU - OPERACIONES CON CADENAS\n");
        printf("1. Concatenar dos cadenas.\n");
        printf("2. Verificar si la cadena es palindromo.\n");
        printf("3. Invertir la cadena.\n");
        printf("4. Buscar en cadena.\n");
        printf("0. Salir.\n\n");
        printf("Elija una opcion:");scanf("%d",&eleccion);puts("");
        switch(eleccion){
            case 1:
                printf("Ingrese la primera cadena: ");scanf("%s",&cadena1);printf("\n");
                printf("Ingrese la segunda cadena: ");scanf("%s",&cadena2);printf("\n");
                char *cadenaresultante = concatenar(cadena1,cadena2);
                printf("Cadena resultante: %s\n\n",cadenaresultante);
                free(cadenaresultante);
                break;
            case 2:
                printf("Ingrese la cadena: ");scanf("%s",&cadena1);puts("");
                if (palindromo(cadena1) == 0){
                    printf("Es palindromo!\n\n");
                }else{
                    printf("No es palindromo\n\n");
                }
                break;
            case 3:
                printf("Ingrese la cadena: ");scanf("%s",&cadena1);puts("");
                char *cadenainvertida = invertir(cadena1);
                printf("Cadena invertida: %s\n\n",cadenainvertida);
                free(cadenainvertida);
                break;
            case 4:
                printf("Ingrese la cadena 1 a buscar: ");scanf("%s",&cadena1);puts("");
                printf("Ingrese la cadena 2 donde se buscara: ");scanf("%s",&cadena2);
                if (buscar_en_cadena(cadena2,cadena1) == 0){
                    printf("La cadena 1 se encuentra en la cadena 2.\n\n");
                }else{
                    printf("La cadena 1 no se encuentra en la cadena 2.\n\n");
                }
                break;
            case 0:
                printf("Saliendo...\n\n");
                break;
            default:
                printf("Error: elija una opcion valida.\n\n");
                break;
        }
    }while (eleccion != 0);

    // N-esimo numero mayor de la lista.
    int a[] = {1,5,2,6,3,4,9,7,8};
    int n = 2;
    int longitud = sizeof(a)/sizeof(a[0]);

    printf("El %d numero mayor es el %d.",n,nesimomayor(n,a,longitud));

    return 0;
}


// -------------- MENU -------------
int strlen(char *s){
    int n;
    for(n=0; *s!='\0'; s++) 
    n++;
    return n;
}


char* concatenar(char *cadena1, char *cadena2){
    int len1 = strlen(cadena1);
    int len2 = strlen(cadena2);
    char *cadenaresultante = malloc((len1+len2+1)*sizeof(char));

    for (int i = 0;i<len1;i++){
        cadenaresultante[i] = cadena1[i];
    }
    for (int i = len1; i<len1+len2;i++){
        cadenaresultante[i] = cadena2[i-len1];
        }
    cadenaresultante[len1+len2] = '\0';
    return cadenaresultante;
}

int palindromo(char* cadena1){
    int len = strlen(cadena1);
    for (int i = 0;i<len;i++){
        if(cadena1[i]!=cadena1[len-i-1]) return 1;
    }
    return 0;
}

char* invertir(char* cadena){
    int len = strlen(cadena);
    char *cadenaresultante = malloc(len*sizeof(char));

    for(int i = 0; i<len;i++){
        cadenaresultante[len-i-1] = cadena[i];
    }
    cadenaresultante[len] = '\0';
    return cadenaresultante;
}

int buscar_en_cadena(char* cadena1, char* cadena2){
    int len1 = strlen(cadena1);
    int len2 = strlen(cadena2);
    int respuesta=0;

    for (int i = 0; i<len1;i++){
        if (cadena1[i] == cadena2[0]){
            for (int j = 1; j<len2;j++){
                if (cadena1[i+j]!=cadena2[j]) respuesta = 1;
            }
            if (respuesta==0) return 0;
            respuesta=0;
        }
    }
    return 1;
}


// -------------- LISTA -------------
int nesimomayor(unsigned int n, int *a,int longitud){
    int i, j, auxiliar,max;
    for (i = 0;i<n;i++){
        max = i;
        for (j = i+1;j<longitud;j++){
            if (*(a+max)<*(a+j)){
                max = j;
            }
        }
        auxiliar = *(a+i);
        *(a+i) = *(a+max);
        *(a+max) = auxiliar;
    }
    return a[n-1]; 
}

