#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main()
{
int *elementos;
elementos = (int*)malloc(sizeof(int)*536870912);
int random=0;
int i; /*declaración de los contadores*/
clock_t start = clock();

for (i=0;i<536870912;i++){
	random=rand()%10000000;
    elementos[random]= i;
    //printf("%i %i \n",i,random);
}
printf("%f\n", ((double)clock()-start )/ CLOCKS_PER_SEC);
	free(elementos);
    return 0;
}