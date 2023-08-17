#include<stdlib.h>
#include<stdio.h>

int numespejo(int m, int n);

int main(){
    int m,n;
    printf("Introduzca los dos numeros m y n: ");scanf("%d %d",&m,&n);
    printf("Hay %d numero/s espejo en el intervalo [%d,%d].",numespejo(m,n),m,n);
}


int strlen(char *s){
    int n;
    for(n=0; *s!='\0'; s++) 
    n++;
    return n;
}

int numespejo(int m, int n){
    int *lista;
    lista = (int *)malloc((n-m+1)*sizeof(int));
    for (int i=m;i<n+1;i++){
        lista[i-m] = i; 
    }

    int iguales_espejo[10] = {0,1,5,-1,-1,2,-1,-1,8,-1};

    int contador = 0;
    int decision = 0;
    for (int i = 0;i<n-m+1;i++){
        char numstring[10];
        snprintf(numstring, sizeof(numstring), "%d", lista[i]);
        for (int j = 0; j<strlen(numstring);j++){
            if (iguales_espejo[atoi(&numstring[j])]==atoi(&numstring[strlen(numstring)-j-1])){
                decision = 0;
            }else{
                decision = 1;
                printf("%d no cumple\n",lista[i]);
                break;
            }
        }
        if (decision == 0) {
            contador++;
            printf("%d\n",lista[i]);
        }
    }
    free(lista);
    return contador;
}

