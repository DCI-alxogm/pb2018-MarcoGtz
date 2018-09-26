#include<stdio.h>

int main()
{
	FILE *fp;
	float x,y,z,vx,vy,vz;

	fp=fopen("Tierra.txt","r");
	fscanf(fp,"%f",x);
	fscanf(fp,"%f",y);
	fscanf(fp,"%f",z);
	fscanf(fp,"%f",vx);
	fscanf(fp,"%f",vy);
	fscanf(fp,"%f",vz);
	fclose(fp);

	



return 0;
}
