/*Ejemplos del uso de arreglos.
Programa creado el 10/09/2018 por Marco Gutiérrez.*/
#include<stdio.h>

int main()
{
	int i;
	float numeros[10];

	for (i=0;i<10;i++){
	numeros[i]=0;			//ejemplo 1
	}

	for(i=0;i<10;i++){
	scanf("%f",&numeros[i]);	//ejemplo 2
	}

	for(i=0;i<10;i++){
	printf("%f\n",numeros[i]);	//ejemplo 3
	}

	for(i=0;i<10;i++){
	scanf("%f",&numeros[i]);
	numeros[i]=numeros[i]*2;	//ejemplo 4
	printf("%f\n",numeros[i]);
	}

	return 0;
}
