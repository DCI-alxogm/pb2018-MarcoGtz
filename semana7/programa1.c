/*Programa creado el 17/09/2018 por Marco Gutiérrez.*/
#include<stdio.h>
#include<math.h>

int main()
{
	FILE *fp;
	int p,a,b,c,n,i,j,fx;//p=potencia, a-b=intervalo, c=espaciado
	float lx,h,suma;

	fp=fopen("Potencia.txt","r");
	fscanf(fp,"La potencia de x es:\n%i",&p);
	fscanf(fp,"El intervalo en el que se va a evaluar x es:\nde %i a %i",&a,&b);
	fscanf(fp,"Y se evaluaran:\n%i números",&n-1);
	fclose(fp);
	c=(b-a)/n;

	fp=fopen("resultados.txt","w");
	fprintf(fp,"x\tf(x)\tl(x)\n");
	if(p>=1){
	for(i=a;i<=b;i+=c)
	{
	fx=pow(i,p);
	h=(i-a)/n;
	for(j=1;j<=n-1;j++){
	suma+=pow((a+(j*h)),p);}
	lx=h*(((fx+(pow(a,p)))/2)+suma);
	fprintf(fp,"%i\t%i\t%f\n",i,fx,lx);
	}
	}else{fprintf(fp,"Esa potencia no es válida\n");}
	fclose(fp);

	return 0;
}
