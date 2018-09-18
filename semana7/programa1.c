/*Programa creado el 17/09/2018 por Marco Gutiérrez.*/
#include<stdio.h>
#include<math.h>

int main()
{
	FILE *fp;
	int p,a,b,c,n,i,fx;//p=potencia, a-b=intervalo, c=espaciado
	float lx,h;

	fp=fopen("Potencia.txt","r");
	fscanf(fp,"La potencia de x es:\n%i",&p);
	fscanf(fp,"El intervalo en el que se va a evaluar x es:\nde %i a %i",&a,&b);
	fscanf(fp,"Y se evaluaran:\n%i números",&n-1);
	fclose(fp);
	c=(b-a)/n;

	fp=fopen("resultados.txt","w");
	if(p>=1){
	for(i=a;i<=b;i+=c)
	{
	fprintf(fp,"%i",i);
	fx=pow(i,p);
	h=(i-a)/n;

	for(j=1;j<=n-1;j++){
	




	lx=h*( ((fx+(pow(a,p)))/2)+
	}
	}else{}
	fclose(fp);

	return 0;
}
