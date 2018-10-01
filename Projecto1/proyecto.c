#include<stdio.h>
#include<math.h>

int main()
{
    //Declarar variables
	FILE *fp;
	int i;
	float x[9],y[9],z[9],vx[9],vy[9],vz[9];
	float xi[9],yi[9],zi[9],vxi[9],vyi[9],vzi[9];
	float Msol,G,h,r;
	
    //Escanear los datos
	fp=fopen("Planetas.txt","r");
	for(i=0;i<9;i++){
	fscanf(fp,"%f %f %f %f %f %f",&x[i],&y[i],&z[i],&vx[i],&vy[i],&vz[i]);
	}
	fscanf(fp,"%f",&Msol);
	fscanf(fp,"%f",&h);
	fclose(fp);

	//Operaciones y procesado de datos
	G=4.0*3.1416*3.1416;
	for(i=0;i<9;i++){
	r=sqrt(pow(x[i],2)+pow(y[i],2)+pow(z[i],2));
	xi[i]=x[i]+vx[i]*h;
	yi[i]=y[i]+vy[i]*h;
	zi[i]=z[i]+vz[i]*h;
	vxi[i]=vx[i]-(h*G*Msol*x[i]/pow(r,3));
	vyi[i]=vy[i]-(h*G*Msol*y[i]/pow(r,3));
	vzi[i]=vz[i]-(h*G*Msol*z[i]/pow(r,3));
	
	}
	
	//Impresion de los datos



return 0;
}
