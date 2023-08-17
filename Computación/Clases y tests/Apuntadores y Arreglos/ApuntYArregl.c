#include <stdlib.h>
#include <stdio.h>

int j, k, z[3];
char a[2];

int main (void){
j = 1;
k = 2;
printf("\n");
printf("j tiene el valor: %d y esta alojado en: %p\n", j, (void *)&j);
printf("k tiene el valor: %d y esta alojado en: %p\n", k, (void *)&k);
printf("a[0] esta alojado en: %p\n", (void *)&a[0]);
printf("a[1] esta alojado en: %p\n", (void *)&a[1]);
printf("z[0] esta alojado en: %p\n", (void *)&z[0]);
printf("z[1] esta alojado en: %p\n", (void *)&z[1]);
printf("z[2] esta alojado en: %p\n", (void *)&z[2]);
return 0;
}
