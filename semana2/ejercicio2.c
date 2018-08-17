/*Este programa, al darle 4 números, realiza 4 operaciones y te las muestra en pantalla, pero no realiza operaciones con decimales.
Creado el 16/08/2018 por Marco Gutiérrez*/

#include<stdio.h>

int main()
{
	int a, b, c, d, e;
	
	printf("Dame cuatro números enteros: \n");
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	scanf("%i", &d);
	printf("Los números que me diste son:\n");
	printf("%i ",a);
	printf("%i ",b);
	printf("%i ",c);
	printf("%i\n",d);
//primera operacion	
	printf("Primera operación:\n");
	e = (a+b)*c/d;	
	printf("(%i",a);
	printf("+%i",b);
	printf(")*%i",c);
	printf("/%i",d);
	printf("= %i\n",e);
//segunda operacion
	printf("Segunda operación:\n");
	e = ((a+b)*c)/d;
	printf("((%i",a);
	printf("+%i",b);
	printf(")*%i)",c);
	printf("/%i",d);
	printf("= %i\n",e);
//tercera operacion
	printf("Tercera operación:\n");
	e = (a+b)*c/d;
	printf("(%i",a);
	printf("+%i",b);
	printf(")*%i",c);
	printf("/%i",d);
	printf("= %i\n",e);
//cuarta operacion
	printf("Cuarta operación:\n");
	e = a+(b*c)/d;
	printf("%i",a);
	printf("+(%i",b);
	printf("*%i)",c);
	printf("/%i",d);
	printf("= %i\n",e);
	return 0;
}
