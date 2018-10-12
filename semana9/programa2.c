#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	FILE *fp;
	char ch;
	int lineas,i;
	float *ptr, des, prom, sum=0;

	fp = fopen("promedio.txt", "r");
	lineas=0;
	while((ch = fgetc(fp)) != EOF)
	{
	if(ch=='\n')
	lineas++;
	}
	fclose(fp);
	
	ptr = (float*) malloc (lineas*sizeof(float));

	fp=fopen("promedio.txt", "r");
	for(i=0;i<lineas;i++)
	{
	fscanf(fp,"%f",ptr+i);
	sum+=*(ptr+i);
	}
	fclose(fp);

	prom=sum/lineas;
	
	sum=0;
	for(i=0;i<lineas;i++)
	{
	sum=sum+pow((*(ptr+i)-prom),2);
	}
	sum=sum/lineas;
	des=sqrt(sum);

	free(ptr);

	printf("El promedio es: %f\nLa desviación estandar: %f\n",prom,des);

return 0;
}
