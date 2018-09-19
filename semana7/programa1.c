/*Programa creado el 17/09/2018 por Marco Gutiérrez.*/
#include<stdio.h>
#include<math.h>

int main()
{
	FILE*fp;
	int p,n,j,k;
	float i,a,b,c,fx,lx,h,sumatoria,fa;

	fp=fopen("Potencia.txt","r");
	fscanf(fp,"%i",&p);
	fscanf(fp,"%f",&a);
	fscanf(fp,"%f",&b);
	fscanf(fp,"%i",&n);
	fscanf(fp,"%i",&j);
	fclose(fp);

	c=(b-a)/n;

	fp=fopen("resultados.txt","w");
	fprintf(fp,"x\t\tf(x)\t\t\tl(x)\n");

	if(p>=1){
	
        fa=pow(a,p);
	for(i=a;i<=b;i+=c)
	{
	fx=pow(i,p);
        
	h=(i-a)/j;
        sumatoria=0;
	for(k=1;k<=j-1;k++){
	sumatoria=sumatoria+(pow((a+(k*h)),p));}

	lx=h*(((fx+fa)/2.0)+sumatoria);
	fprintf(fp,"%f\t%f\t\t%f\n",i,fx,lx);
	}
	
	}
	else{
	fprintf(fp,"Esa potencia no es válida\n");
	return 1;
	}

	fclose(fp);

	return 0;
}
