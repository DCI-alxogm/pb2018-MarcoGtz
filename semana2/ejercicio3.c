/*Este programa, al darle 4 números, realiza 4 operaciones y te las muestra en pantalla, realiza operaciones con decimales también.
Creado el 16/08/2018 por Marco Gutiérrez*/

#include<stdio.h>

int main()
{
	float a, b, c, d, e;
	
	printf("Dame cuatro números reales: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	printf("Los números que me diste son:\n");
	printf("%f ",a);
	printf("%f ",b);
	printf("%f ",c);
	printf("%f\n",d);
//primera operacion	
	printf("Primera operación:\n");
	e = (a+b)*c/d;	
	printf("(%f",a);
	printf("+%f",b);
	printf(")*%f",c);
	printf("/%f",d);
	printf("= %f\n",e);
//segunda operacion
	printf("Segunda operación:\n");
	e = ((a+b)*c)/d;
	printf("((%f",a);
	printf("+%f",b);
	printf(")*%f)",c);
	printf("/%f",d);
	printf("= %f\n",e);
//tercera operacion
	printf("Tercera operación:\n");
	e = (a+b)*c/d;
	printf("(%f",a);
	printf("+%f",b);
	printf(")*%f",c);
	printf("/%f",d);
	printf("= %f\n",e);
//cuarta operacion
	printf("Cuarta operación:\n");
	e = a+(b*c)/d;
	printf("%f",a);
	printf("+(%f",b);
	printf("*%f)",c);
	printf("/%f",d);
	printf("= %f\n",e);
	return 0;
}
