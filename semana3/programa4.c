/*Este programa es la combinación de los programas 1 y 3 por medio del comando switch.
Programa1.o: Este programa trasforma una temperatura en celsius a fahrenheit y kelvin,y luego de vuelta a celsius.
Programa3.o: Este programa recibe una coordenada cartesiana (x,y) y lo convierte a una coordenada polares (r,θ).
Creado el 23/08/2018 por Marco Gutiérrez.*/
#include <stdio.h>
#include <math.h>

int main()
{
	int opcion;
	float c, f, k; //c=celsius, f=fahrenheit, k=kelvin
	float x, y; //P1(x,y)
	float r, a; //P2(r,θ)

	printf("Teclea 1 para seleccionar el convertidor de temperaturas.\n");
	printf("Teclea 2 para seleccionar el convertidor de coordenadas.\n");
	scanf("%i", &opcion);

	switch(opcion)
	{
	case 1:
		printf("Dame una temperatura en °c:\n");
		scanf("%f", &c);
	
		f=1.8*c+32;
		k=c+273.15;

		printf("Tu temperatura en celsius es: %f\n",c);
		printf("Tu temperatura en fahrenheit es: %f\n",f);
		printf("Tu temperatura en kelvin es: %f\n",k);
		break;
	case 2:
		printf("Dame una coordenada cartesiana (x,y):\n");
		scanf("%f", &x);
		scanf("%f", &y);
		printf("Tu coordenada cartesiana es: (%f,%f)\n", x, y);
	
		r= sqrt((pow(x,2))+(pow(y,2)));
		a= (atan((y/x)))*(180/3.141592);
	
		printf("Tus coordenadas polares (r,θ) son: (%f,%f°)\n", r, a);

		if(x>=0 && y>=0){
			printf("Estas en el primer cuadrante: (+,+)\n");
		}else{
			if(x<0 && y>=0){
				printf("Estas en el segundo cuadrante: (-,+)\n");
			}else{
				if(x<0 && y<0){
					printf("Estas en el tercer cuadrante: (-,-)\n");
				}else{
					printf("Estas en el cuarto cuadrante: (+,-)\n");
				}
			}
		}
		break;
	default:
		printf("Esa no es una opción válida.\n");	
		break;
	}
	return 0;
}
