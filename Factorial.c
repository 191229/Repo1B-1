#include <stdio.h>
#include <math.h>

//Sacar factorial de un numero 

int main()
{
  int a, b, fact = 1;

  printf("Escribe un numero para calcular su factorial\n");
  scanf("%d", &a);
	
	if (a >= 0){
 	 for (b = a; b > 1; b--){
	  	fact = fact * b;
}
 		printf("El factorial de %d = %d\n", a, fact); }
	else printf ("El numero tiene que ser entero y positivo");  

  return 0;
} 
