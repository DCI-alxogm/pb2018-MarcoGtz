/*Este programa recibe un valor x y lo evalua en ciertas funciones.
creado el 20/08/2018 por Marco Gutiérrez.*/
#include <stdio.h>
#include <math.h>

int main()
{
	float x, y1, y2, y3;
	printf("Dame un número:\n");
	scanf("%f",&x);

	y1=exp(-x);
	y2=cos(x*(3.1416/180))+(2*tan((x/2)*(3.1416/180)));
	y3=log(x)+(3*(pow(x,2)));

	printf("exp(-%f)= %f\n", x, y1);
	printf("cos(%f)+2tan(%f/2)= %f\n", x, x, y2);
	printf("ln(%f)+3(%f)²= %f\n", x, x, y3);

	return 0;
}
