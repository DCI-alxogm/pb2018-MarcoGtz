#include<stdio.h>
//#include<stdlib.h>

int main()
{
	FILE*fp;
	char ch;
	int i,num_lineas;
	float *ptr,num;
	
	ptr=&num;

	fp=fopen("num_maximo.txt","r");

	num_lineas=0;
	while((ch = fgetc(fp)) != EOF)
	{
	if(ch=='\n')
	num_lineas++;
	}

	ptr = (float*) calloc(num_lineas, sizeof(float));

	for(i=0;i<num_lineas;i++)
	{
	fscanf(fp,"%f",ptr+i);
	}

return 0;
}
