/*Programa creado el 30/10/2018 por Marco Gutiérrez*/
#include<stdio.h>

int main()
{
//Se inicializan las variables iniciales
	FILE*entrada;
	FILE*resultados; 
	int i=0,c=0,a,b,n;
	float l1,l2,l3,l4;
	
//Se escanean los valores de entrada (temperatura de los lados y tamaño de la placa) desde datos.txt
	entrada = fopen("datos.txt","r");
	fscanf(entrada,"%f %f %f %f %i", &l1,&l2,&l3,&l4,&n);
	fclose(entrada);
	
//Se crea el arreglo que representa la placa con los valores escaneados y se inicializa todo en 0
	float placa[n][n];
	for(a=0;a<n;a++)
    {
        for(b=0;b<n;b++)
        {
            placa[b][a]=0;
        }
    }
    
//Se asignan los valores iniciales
	for(a=0;a<n;a++)
	{
		placa[0][a]=l1;
		placa[n-1][a]=l2;
	}
	for(b=0;b<n;b++)
	{
		placa[b][0]=l3;
		placa[b][n-1]=l4;
	}
	
//Desde aqui inicia el procesado de los datos
	while(i<10)
	{ 
    	while(placa[5][5]<l3-1)
	    { 
	    
//Se crea un arreglo para los nombres de los archivos
	        char nombre[32];
        
            while(c<21)
            {
            
//Aquí se calcula cada instante de la propagación del calor
	            for(a=1; a<n-1; a++)
	            {
		            for(b=1; b<n-1; b++)
		            {
			            placa[b][a]=(placa[b+1][a]+placa[b-1][a]+placa[b][a+1]+placa[b][a-1])/4;
		            }
	            }

                    snprintf(nombre, sizeof(char)*32, "resultados%i", c);
                    c++;
                    
//Se imprime los resultados en distintos archivos con su respectivo nombre
	            resultados=fopen(nombre,"w");
	            for(a=0;a<n;a++)
	            {
                    for(b=0;b<n;b++)
                    {
                        fprintf(resultados,"%f ",placa[b][a]);
                	}
	            	fprintf(resultados,"\n");
	            }
	        }
	    fclose(resultados);
	    c=0;
	    }
	i++;
	c=0;
	}

//Fin del programa
	return 0;
}
