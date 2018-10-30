/*Programa creado el 22/10/2018 por Marco Gutiérrez*/
#include<stdio.h>
int main()
{
	int i=0,c=0,YA,XA,N; //inicializa contadores
	float izq,der,arr,abj; //iniciliza valores iniciales
	FILE*datos;
	FILE*resultados; 

	datos = fopen("datos","r"); //lectura de datos
	fscanf(datos,"%f %f %f %f %i", &izq,&der,&arr,&abj,&N);
	fclose(datos);
	printf("%f %f %f %f %i", izq,der,arr,abj,N);
	float placa[N][N]; //inicliaza en 0 array
	for(YA=0; YA<N; YA++){
                for(XA=0; XA<N; XA++){
                        placa[XA][YA]=0;
                }
        }
// se asignan valores iniciales
	for(YA=0;YA<N;YA++){
		placa[0][YA]=arr;
		placa[N-1][YA]=abj;
	}
	for(XA=0;XA<N;XA++){
		placa[XA][0]=izq;
		placa[XA][N-1]=der;
	}
	while(i<10){ //repite 10 veces para confirmar datos
	while(placa[5][5]<izq-1){ //asegura que sea manor al valor de equilibiro
		     char buffer[32]; //array nombre archivos
        while(c<21) {

		//calcula cada instante de propagacion del calor
	for(YA=1; YA<N-1; YA++){
		for(XA=1; XA<N-1; XA++){
			placa[XA][YA]=(placa[XA+1][YA]+placa[XA-1][YA]+placa[XA][YA+1]+placa[XA][YA-1])/4;
		}
	}

                snprintf(buffer, sizeof(char)*32, "resultados%i", c);
                c++;
	//imprime resultados en archivos diferentes
	resultados=fopen(buffer,"w");
	for(YA=0; YA<N; YA++){
                for(XA=0; XA<N; XA++){
			fprintf(resultados, "%f ", placa[XA][YA]);
		}
		fprintf(resultados, "\n");
	}
	}
	fclose(resultados);
	c=0;
	}
	i++;
	c=0;
	}

	return 0;
}
