#include <stdio.h>
#include <stdlib.h>
int main(){

int dividendo,divisor,quociente,resto;
printf("Informe o dividendo: ");
scanf("%d", &dividendo);
printf("Informe o divisor: ");
scanf("%d", &divisor);

quociente = dividendo/divisor;
resto=dividendo%divisor;

printf("Dividendo: %d\n",dividendo);
printf("Divisor: %d\n",divisor);
printf("Quociente: %d\n",quociente);
printf("Resto: %d\n",resto);
system("pause");
}


