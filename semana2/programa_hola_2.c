/*Esto es un comentario. Me sirve para escribir informacion del programa.
Imprime la frase "hola mundo" a la pantalla.gcc
Creado el 15/08/2018 por Marco Gutiérrez*/

#include<stdio.h>

int main()

	{
		int edad; 
		int edad2;
		char nombre[20];
		printf("Introduce tu nombre:\n");
		scanf("%s", &nombre);
		printf("Hola %s\n",nombre);
		printf("Introduce tu edad: \n");
		scanf("%i", &edad);
		printf("\nTu edad es: %i\n",edad);
		edad2=edad+10; 
		printf("\nTu edad en el 2028 sera: %i\n",edad2);
		return 0;
	}	

/*termine de escribir el programa*/
