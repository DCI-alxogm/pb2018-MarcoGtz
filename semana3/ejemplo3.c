#include <stdio.h>

int main()
{
	int numero1, numero2;

	printf("Introduzca dos numero enteros: \n");
	scanf("%i %i", &numero1, &numero2);
	if(numero1==numero2)
	{
	printf("Resultado: %d = %d\n",numero1,numero2);
	}
	else if (numero1> numero2)
	{
	printf("Resultado: %d > %d\n", numero1, numero2);
	}
	else
	{
	printf("Result: %d < %d\n",numero1, numero2);
	}
	return 0;
}
