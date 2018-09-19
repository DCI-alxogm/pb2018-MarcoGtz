/*Este programa evalua un valor x con las funciones exp, log, sin, cos y sqrt en un intervalo y espaciado dado por el usuario y te los guarda en un archivo.
Programa hecho el 12/09/2018 por Marco Gutiérrez.*/
#include<stdio.h>
#include<math.h>

int main()
{
	FILE *fp;
	float x,i,a,b; //i=contador a=intervalo b=espaciado

	printf("Dime desde que número comienzo a evaluar:\n");
	scanf("%f",&x);
	printf("Dime hasta que número termino de evaluar:\n");
	scanf("%f",&a);
	printf("Dime el espaciado que hay entre cada numero del intervalo:\n");
	scanf("%f",&b);

	fp=fopen("resultados.txt","w");
	for(i=x;i<=a;i+=b)
	{
	fprintf(fp,"Número evaluado: %f\n\n",i);
	x=exp(i);
	fprintf(fp,"Exponencial:\t%f\n",x);
	x=log(i);
	fprintf(fp,"Logaritmo:\t%f\n",x);
	x=sin(i);
	fprintf(fp,"Seno:\t\t%f\n",x);
	x=cos(i);
	fprintf(fp,"Coseno:\t\t%f\n",x);
	x=sqrt(i);
	fprintf(fp,"Raíz cuadrada:\t%f\n\n",x);
	}
	fclose(fp);

	return 0;
}
