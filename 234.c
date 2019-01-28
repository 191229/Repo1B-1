#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[])
{
int Op1,Op2, Res;
printf("operador 1: ");
scanf("%i", &Op1 );
printf("operador2: ");
scanf("%i", &Op2 );
Res = Op1+Op2;
printf ("la suma de %i + %i = %i." , Op1,Op2,Res);
return 0;

getch();
}
