#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	int i,num_lineas;
	float x,y,*ptr;

	fp=fopen("num_maximo.txt","r");

	num_lineas=0;
	while((ch = fgetc(fp)) != EOF)
	{
	if(ch=='\n')
	num_lineas++;
	}
	fclose(fp);

	ptr = (float*) malloc (num_lineas*sizeof(float));

	fp=fopen("num_maximo.txt","r");
	fscanf(fp,"%f",&x);
	for(i=1;i<num_lineas;i++)
	{
	fscanf(fp,"%f",ptr+i);
	if(x < *(ptr+i))
	{
	x=*(ptr+i);
	}
	}

	fclose(fp);
	printf("El número más grande es: %f\n",x);
	free(ptr);

return 0;
}
