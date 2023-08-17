#include<stdio.h>

int main(){
int y,i, *ip;
i=5;
ip=&i;
y=*ip+1;
printf("y= %d, i= %d \n",y,i);
*ip+=1;
printf("Luego de *ip+=1. i= %d \n",i);
++*ip;
printf("luego de ++*ip. i= %d \n",i);
(*ip)++;
printf("luego de (*ip)++. i= %d \n",i);
*ip++;
printf("luego de *ip++. i= %d, *ip= %d \n",i,*ip);
return 0;
}
