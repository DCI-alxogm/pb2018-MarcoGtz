/*Este programa trasforma una temperatura en celsius a fahrenheit y kelvin,y luego de vuelta a celsius.
Creado el 20/08/2018 por Marco Gutiérrez.*/
#include <stdio.h>

int main()
{
	float c, f, k, a; //c=celsius, f=fahrenheit, k=kelvin, a=extra para operaciones de vuelta
	printf("Dame una temperatura en °c:\n");
	scanf("%f", &c);

	f=1.8*c+32;
	k=c+273.15;
	a=(f-32)/1.8;

	printf("Tu temperatura en fahrenheit es: %f\n",f);
	printf("Tu temperatura en kelvin es: %f\n",k);
	printf("Tu temperatura en celsius es: %f\n",a);

	return 0;
}
